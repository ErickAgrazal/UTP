# -*- coding: utf-8 -*-

cantidad_de_notas = int(raw_input("Introduzca la cantidad de notas: "))

notas = []

for i in range(cantidad_de_notas):
    notas.append(int(raw_input("Introduzca la nota #{}: ".format(i+1))))

print 'Las notas fueron: ', notas

if sum(notas)/len(notas) > 70:
    print 'El estudiante, aprobó con: ', sum(notas)/len(notas)
else:
    print 'El estudiante, reprobó con: ', sum(notas)/len(notas)
