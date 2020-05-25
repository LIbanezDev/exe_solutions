
# http://progra.usm.cl/apunte/ejercicios/3/transmision-datos.html


def binarioToDecimal(binario):  # Punto 1
    longitud = len(binario)
    sumaBits = 0
    exponente = 0
    for i in range(longitud-1, -1, -1): # búcle desde el ultimo elemento hasta el primero
        if binario[i]:
            sumaBits += 2 ** exponente
        exponente += 1       
    return sumaBits

def bloqueValido(corrienteBinaria): # Punto 2
    if len(corrienteBinaria) % 4 != 0:
        return False
    else:
        return True

def decodificarCorrienteBinaria(corrienteBinaria): # Punto 3
    corrienteDecodificada = []
    cantidadBloques = int(len(corrienteBinaria) / 4)
    hayCorrienteInvalida = False
    if len(corrienteBinaria) % 4 != 0:
        hayCorrienteInvalida = True
    
    for i in range(1, cantidadBloques+1):
        sumaBits = 0
        exponente = 0
        for i in range(4*i-1, 4*i-4, -1): # [0,0,0,0] = [0,1,2,3]
            if corrienteBinaria[i]:
                sumaBits += 2 ** exponente
            exponente += 1
        corrienteDecodificada.append(sumaBits)
    
    if(hayCorrienteInvalida):
        corrienteDecodificada.append(-1)
        return corrienteDecodificada

    return corrienteDecodificada

corriente = [0,1,0,1,0,0,0,1,1]

print(decodificarCorrienteBinaria(corriente))





