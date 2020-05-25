
# http://progra.usm.cl/apunte/ejercicios/1/votaciones-confech.html

cantidad_univ = int(input("Cantidad de universidades:"))
universidad_votos = {} 
estado_us = [0,0,0]  #[0] = Ues. que aceptaron, [1] = Ues. que rechazaron, [2] = Ues. que empataron

for i in range(cantidad_univ):
    nombre = input("Nombre de universidad: ")
    universidad_votos[nombre] = {'a':0, 'r':0,'b':0,'n':0}
    while(True):
        voto = input("Ingrese voto ('a', 'r', 'b', 'n') o 'x' para salir: ")
        if voto == 'x':
            break
        universidad_votos[nombre][voto]+=1

    print("En la",nombre,"Aceptan:",universidad_votos[nombre]['a'],"Rechazan:",universidad_votos[nombre]['r'],"Blanco:",universidad_votos[nombre]['b'],"Nulo:",universidad_votos[nombre]['n'])
    
    if universidad_votos[nombre]['a'] > universidad_votos[nombre]['r']:
        estado_us[0] += 1
    elif universidad_votos[nombre]['a'] < universidad_votos[nombre]['r']:
        estado_us[1] += 1
    else:
        estado_us[2] += 1
print("Universidades que aceptaron:",estado_us[0],", rechazaron:",estado_us[1],", empataron:", estado_us[2])

