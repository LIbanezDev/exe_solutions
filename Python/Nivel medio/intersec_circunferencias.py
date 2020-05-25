
# http://progra.usm.cl/apunte/ejercicios/1/interseccion-circunferencias.html

import math

print("Circunferencia 1")
x1 = int(input("Coordenada x del centro:"))
y1 = int(input("Coordenada y del centro:"))
r1 = int(input("Radio:"))
print("Circunferencia 2")
x2 = int(input("Coordenada x del centro:"))
y2 = int(input("Coordenada y del centro:"))
r2 = int(input("Radio:"))

distanciaEntreCentros = math.sqrt(math.pow(x2 - x1, 2))
sumaRadios = r1 + r2
diferenciaRadios = r1 - r2

if(distanciaEntreCentros > sumaRadios):
    print("Exteriores.")
    print("Las circunferencias no tienen puntos en común.")
if(distanciaEntreCentros < r1 + r2 and distanciaEntreCentros > diferenciaRadios):
    print("Secantes.")
    print("Tienen dos puntos en común.")
if(distanciaEntreCentros > 0 and distanciaEntreCentros < diferenciaRadios):
    print("Interiores.") 
    print("Una circunferencia está dentro de la otra, y por tanto no tienen puntos en común.")  
if(distanciaEntreCentros == sumaRadios):
    print("Tangentes Exteriores.") 
    print("El centro de cada circunferencia es exterior a la otra y tienen un punto en común, punto de tangencia.")
if(distanciaEntreCentros == diferenciaRadios):
    print("Tangentes Interiores.")
    print("El centro de una de las circunferencias está dentro de la otra. Tienen un punto en común.")
if(distanciaEntreCentros == 0):
    print("Concéntricas.")
    print("No tienen puntos en común, salvo que r1 = r2, en este caso son la misma circunferencia.")

