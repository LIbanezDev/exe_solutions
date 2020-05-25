
# http://progra.usm.cl/apunte/ejercicios/1/votaciones-confech.html

class Universidad:
    def __init__(self, nombre, voto):
        self.nombre = nombre
        self.voto = voto
    def votar(self):
        votos = [0,0,0,0]
        while(True):
            v = input("Ingrese voto: ")
            if v == 'a':
                votos[0]+=1
            elif v == 'r':
                votos[1]+=1
            elif v == 'n':
                votos[2]+=1
            elif v == 'b':
                votos[3]+=1
            elif v == 'x':
                break
            else:
                print("Ingrese voto valido.")
        return votos
k = int(input("Numero de universidades: "))
unis = []
estado_unis = [0,0,0]  #0 = U. que aceptaron, #1 = U. que rechazaron, #2 = U. que empataron
for i in range(k):
    nombre = input("Nombre de universidad: ")
    unis.append(Universidad(nombre,'a'))
    unis[i].voto = unis[i].votar()
    print(nombre, "Aceptan:", unis[i].voto[0],"Rechazan:", unis[i].voto[1],"Blancos:", unis[i].voto[3], "Nulos:", unis[i].voto[2])

    if unis[i].voto[0] > unis[i].voto[1]:
        estado_unis[0]+=1
    elif unis[i].voto[1] > unis[i].voto[0]:
        estado_unis[1]+=1
    else:
        estado_unis[2]+=1
                
print("Universidades que aceptan:", estado_unis[0], "Universidades que rechazan:", estado_unis[1], "Universidades que empatan:",estado_unis[2])