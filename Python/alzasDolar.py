"""
Un analista financiero lleva un registro del precio del dólar día a día, y desea saber cuál fue la mayor de las alzas en el precio diario a lo largo de ese período.

Escriba un programa que pida al usuario ingresar el número n de días, y luego el precio del dólar para cada uno de los n días.

El programa debe entregar como salida cuál fue la mayor de las alzas de un día para el otro.

Si en ningún día el precio subió, la salida debe decir: No hubo alzas.

"""

dias = int(input("Dias a contabilizar: "))

for i in range(1,dias+1):
    diaActual = float(input("Dia "+str(i)+":"))

    if i == 1:
        diaAnterior = diaActual
        alzaMayor = 0
        continue

    alza = diaActual - diaAnterior

    if alza > alzaMayor:
        alzaMayor = alza
        
    diaAnterior = diaActual
if(alzaMayor == 0):
    print("No hubo alzas")
else:
    print("Alza mayor:", round(alzaMayor, 2))




    
    


    
    

