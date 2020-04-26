"""
http://progra.usm.cl/apunte/ejercicios/1/maquina-alimentos.html

"""

productoComprado = input("Ingrese producto a comprar: ")

if productoComprado == 'A':    
    precioProductoComprado = 270
elif productoComprado == 'B':
    precioProductoComprado = 340
else:
    precioProductoComprado = 390

montoIntroducido = 0

print("Ingrese monedas hasta alcanzar el precio del producto (",precioProductoComprado,"):")

while(montoIntroducido < precioProductoComprado):  
    monedasIntroducidas = int(input())
    montoIntroducido += monedasIntroducidas

if(montoIntroducido == precioProductoComprado):
    print("No hay vuelto :)")   
else:
    vuelto = montoIntroducido - precioProductoComprado
    while(vuelto > 0):
        if vuelto / 100 >= 1:
            vuelto -= 100
            print("100")
        elif vuelto / 50 >= 1:
            vuelto -= 50
            print("50")
        else:
            vuelto -= 10
            print("10")
    

