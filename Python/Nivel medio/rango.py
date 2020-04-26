"""
http://progra.usm.cl/apunte/ejercicios/1/rango.html

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

