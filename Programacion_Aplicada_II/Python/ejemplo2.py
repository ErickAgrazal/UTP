# -*- coding: utf-8 -*-
elementos = []

tam = int(raw_input("El tamaño del arreglo es: "))

for i in range(tam):
    elementos.append(int(raw_input("Leer el valor : ")))

print elementos
print 'P1: ', elementos[0]
print 'P2: ', elementos[1]
print 'El promedio es: ', sum(elementos)/len(elementos)
