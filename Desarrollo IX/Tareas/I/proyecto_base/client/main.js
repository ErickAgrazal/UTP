// Se hacen los imports similares a Java o Python
import { Template } from 'meteor/templating'; // Siempre se importa para poder trabajar con los templates
import { ReactiveVar } from 'meteor/reactive-var'; // Incluido solamente para usar variables reactivas (Las que no necesitan volver a cargar la página para cambiar)

import './main.html';

// Nomenclatura para acceder a los eventos, funciones es:
// Template.nombre_del_template_a_acceder.función();
// Por ejemplo:
//    - Template.hello.helpers({});
// Mas información:
//    - http://guide.meteor.com/
//    - https://www.meteor.com/tutorials/blaze/creating-an-app

Template.home.onCreated(function helloOnCreated() {
  // En este evento (onCreated) es donde normalmente
  // van todas las incializaciones

  this.counter = new ReactiveVar(0); // Se le añade el "this" para que sea disponible en otros eventos/functiones de este template
});

Template.home.helpers({
  // En esta function (helpers) es donde se configuran
  // las variables que se van a dibujar en el template (archivos html).
  counter() {
    return Template.instance().counter.get();
  },
});

Template.home.events({
  // Eventos del que ocurren dentro del template, por ejemplo, click en el botón
  'submit .calculate-js'(event) {
    // Prevenir comportamiento por defecto del navegador al presionar "submit"
    event.preventDefault();

    // Tomar valores del textbox
    const target = event.target;
    const size = target.msize.value;

    /*

    AQUI VA SU CODIGO

    */
    alert(size);

    // Limpiar el formulario
    target.text.value = '';
  },
});
