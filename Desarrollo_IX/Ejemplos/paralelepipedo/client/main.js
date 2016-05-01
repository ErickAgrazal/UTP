import { Template } from 'meteor/templating';
import { ReactiveVar } from 'meteor/reactive-var';
import './main.html';

/* UTILS */
utils = {};
utils.reverse = function (s) {
  return s.split('').reverse().join('');
}
utils.isOdd = function(num) { return num % 2;}
utils.resolveOdd = function (txt) {
  arr1 = txt.substring(0, txt.length/2);
  arr2 = txt.substring(txt.length/2 + 1, txt.length);

  // Printing just to test
  console.log(arr1);
  console.log(arr2);

  // Reverse the second arr
  arr2 = utils.reverse(arr2);

  if (arr1==arr2) {
    alert('Es paralelepipedo');
  }
}
utils.resolveEven = function (txt) {
  arr1 = txt.substring(0, txt.length/2);
  arr2 = txt.substring(txt.length/2, txt.length);

  // Printing just to test
  console.log(arr1);
  console.log(arr2);

  // Reverse the second arr
  arr2 = utils.reverse(arr2);

  if (arr1==arr2) {
    alert('Es paralelepipedo');
  }
}

Template.formulario.onCreated(function helloOnCreated() {
  // counter starts at 0
  // this.counter = new ReactiveVar(0);
});

// Template.formulario.helpers({
//   counter() {
//     return Template.instance().counter.get();
//   },
// });

Template.formulario.events({
  'submit .paralelepipedo-js'(event, instance) {
    event.preventDefault();
    // Tomar valores del textbox
    let target = event.target;
    let texto = target.texto.value;
    let subs1;
    let subs2;
    if (utils.isOdd(texto.length)){
      utils.resolveOdd(texto);
    }
    else{
      utils.resolveEven(texto);
    }
  },
});
