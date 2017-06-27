# -*- coding: utf-8 -*-


def main():
    cantidad_de_estudiantes = int(raw_input("Introduzca la cantidad de estudiantes: "))
    cantidad_de_notas = int(raw_input("Introduzca la cantidad de notas: "))

    nombres = []
    notas = []

    for i in range(cantidad_de_estudiantes):
        nombres.append(raw_input("Introduzca el estudiante: "))
        for j in range(cantidad_de_notas):
            notas_estudiante = []
            notas_estudiante.append(int(raw_input("Introduzca la nota: ")))
        notas.append(sum(notas_estudiante)/len(notas_estudiante))

    for i in range(cantidad_de_estudiantes):
        if notas[i] > 70:
            print 'El estudiante, aprobó la materia con: {}'.format(notas[i])
        else:
            print 'El estudiante, reprobó la materia con: {}'.format(notas[i])


if __name__ == '__main__':
    main()
