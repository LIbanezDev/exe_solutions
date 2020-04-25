"""
Una máquina de alimentos tiene productos de tres tipos, A, B y C, que valen respectivamente $270, $340 y $390. La máquina acepta y da de vuelto monedas de $10, $50 y $100.

Escriba un programa que pida al usuario elegir el producto y luego le pida ingresar las monedas hasta alcanzar el monto a pagar. Si el monto ingresado es mayor que el precio del producto, el programa debe entregar las monedas de vuelto, una por una.

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
    

