
# http://progra.usm.cl/apunte/ejercicios/1/alzas-dolar.html

dias = int(input("Dias a contabilizar: "))

for i in range(1, dias+1):
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




    
    


    
    

