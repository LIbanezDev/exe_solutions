n = int(input("Cantidad de universidades:"))
universidades = [] # Nombres de universidades
cantidades_votos = []  # Almacena listas de tamaño 4 para los votos vinculando el indice con el nombre en la lista univeridades[]
voto = [] # Lista anidada con votos, almacena la cantidad de votos | votos[[0,0,0,0],[0,0,0,0]] |
estado_us = [0,0,0]  #[0] = U. que aceptaron, [1] = U. que rechazaron, [2] = U. que empataron
for i in range(n):
    name = input("Nombre de universidad: ")
    universidades.append(name)
    voto = [0,0,0,0]

    while(True):
        v = input("Ingrese voto: ")
        if v == 'a':
            voto[0]+=1
        elif v == 'r':
            voto[1]+=1
        elif v == 'b':
            voto[2]+=1
        elif v == 'n':
            voto[3]+=1
        elif v == 'x':
            break
        else:
            print("Ingrese voto valido.")

    cantidades_votos.append(voto)
    print(universidades[i],"Aceptan:",cantidades_votos[i][0],"Rechazan:",cantidades_votos[i][1],"Blanco:",cantidades_votos[i][2],"Nulo:",cantidades_votos[i][3])

    if cantidades_votos[i][0] > cantidades_votos[i][1]:
        estado_us[0]+=1
    elif cantidades_votos[i][1] > cantidades_votos[i][0]:
        estado_us[1]+=1
    else:
        estado_us[2]+=1

print("Universidades que aceptan:", estado_us[0]) 
print("Universidades que rechazan:", estado_us[1]) 
print("Universidades que empatan:",estado_us[2])


