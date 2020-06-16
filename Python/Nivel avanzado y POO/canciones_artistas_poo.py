class Cancion:
    def __init__(self, nombre, artista):
        self.nombre = nombre
        self.artista = artista
    def setNombre(self, nombre):
        self.nombre = nombre
    def setArtista(self, artista):
        self.artista = artista    
    def getNombre(self):
        return self.nombre
    def getArtista(self):
        return self.artista

canciones = []
canciones.append(Cancion("a1","h1"))
canciones.append(Cancion("a2","h2"))
canciones.append(Cancion("a3","h3"))
canciones.append(Cancion("a4","h4"))
print("Hay ", len(canciones), "canciones")
n = 1
for i in canciones:
    print("Cancion numero",n,", Nombre:",i.getNombre(),", Artista:",i.getArtista())  
    n+=1
print("Primera cancion: ")
print("Nombre: ",canciones[0].getNombre(),", Artista: ", canciones[0].getArtista())
print("Ultima cancion: ")
print("Nombre: ",canciones[-1].getNombre(),", Artista: ", canciones[-1].getArtista())
nombre = input("Ingrese nombre de cancion a eliminar: ")
k = 0
for i in canciones:
    if i.getNombre() == nombre:
        canciones.remove(i)
    else:
        k+=1
if k == 4:
    print("No hay canciones con ese nombre")
else:
    print("Cancion eliminada.")
    n = 1
    for i in canciones:
        print("Cancion numero",n,", Nombre:",i.getNombre(),", Artista:",i.getArtista())  
        n+=1  

cancion = Cancion("lucas","yo")
canciones.append(cancion)
canciones.pop(len(canciones) - 2)

n = 1
for i in canciones:
    print("Cancion numero",n,", Nombre:",i.getNombre(),", Artista:",i.getArtista())  
    n+=1

nombre = input("Ingrese artista para conocer cuantas canciones hay de este: ")
n = 0
for i in canciones:
    if i.getArtista() == nombre:
        n+=1
print("Hay",n,"canciones de",nombre,".")
    






    
        