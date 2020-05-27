
# http://progra.usm.cl/apunte/ejercicios/3/series-de-tiempo.html

def mediasMoviles(serie, valoresConsecutivos):
    mediasMoviles = []
    for i in range(len(serie) - valoresConsecutivos + 1):
        sumaValores = 0
        for k in range(valoresConsecutivos):
            sumaValores += serie[i+k]           
        mediasMoviles.append(round(sumaValores / 3, 1))
    return mediasMoviles

def diferenciasFinitas(serie):
    diferenciasFinitas = []
    for i in range(1, len(serie)):
        diferenciasFinitas.append(serie[i] - serie[i-1])
    return diferenciasFinitas    

serie = [5,2,2,8,-4,-1,2]
print(mediasMoviles(serie, 2))
print(diferenciasFinitas(serie))