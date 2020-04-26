"""
En estadística descriptiva, se define el rango de un conjunto de datos reales como la diferencia entre el mayor y el menor de los datos.

Por ejemplo, si los datos son:

[5.96, 6.74, 7.43, 4.99, 7.20, 0.56, 2.80],
entonces el rango es 7.43 − 0.56 = 6.87.

Escriba un programa que:

pregunte al usuario cuántos datos serán ingresados,
pida al usuario ingresar los datos uno por uno, y
entregue como resultado el rango de los datos.
Suponga que todos los datos ingresados son válidos.

"""
cantidadDatos = int(input("Cantidad de datos a ingresar: "))
for i in range(cantidadDatos):
    dato = int(input("dato: "))
    
    if i == 0:
        mayor = dato
        menor = dato
        continue
    if dato > mayor:
        mayor = dato
    elif dato < menor:
        menor = dato

print("Rango ", mayor - menor)

