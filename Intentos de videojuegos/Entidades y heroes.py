class Entidad:
    def __init__(self, vida, nombre):
        self.vida = vida
        self.nombre = nombre

    def setVida(self, vida):
        self.vida = vida
    def setNombre(self, nombre):
        self.nombre = nombre
    def getVida(self):
        return self.vida    
    def getNombre(self):
        return self.nombre

class Heroe(Entidad):
    def __init__(self, vida, nombre, ataque):
        super().__init__(vida, nombre)
        self.ataque = ataque
    def setAtaque(self):
        self.ataque = ataque
    def getAtaque(self):
        return self.ataque

class Enemigo(Heroe):
    def __init__(self, vida, nombre, ataque, descripcion):
        super().__init__(vida, nombre, ataque)
        self.descripcion = descripcion
    def setDescripcion(self):
        self.descripcion = descripcion
    def getDescripcion(self):
        return self.descripcion    

class Juego:
    enemigos = []
    def __init__(self, nombre, descripcion):
        self.nombre = nombre
        self.descripcion = descripcion
    def setNombre(self, nombre):
        self.nombre = nombre
    def getNombre(self):
        return self.nombre
    def setDescripcion(self, descripcion):
        self.descripcion = descripcion
    def getDescripcion(self):
        return self.descripcion
    def addEnemigo(self, enemy):
        self.enemigos.append(enemy)
    def getEnemigo(self, indice):
        return self.enemigos[indice]       
    def addHeroe(self, hero):
        self.heroe = hero
    def atacarEnemigo(self, nombre):
        for i in self.enemigos:
            if i.getNombre() == nombre:
                i.setVida(i.getVida() - self.heroe.getAtaque())
                if i.getVida() <= 0:
                    print("----------")
                    print(i.getNombre(), "Ha muerto") 
                    print("----------")                 
                    self.enemigos.remove(i)        

e1 = Enemigo(300, "e1", 10, "Un capo")
e2 = Enemigo(301, "e2", 11, "Un capo1")
e3 = Enemigo(302, "e3", 12, "Un capo2")
e4 = Enemigo(303, "e4", 13, "Un capo3")
e5 = Enemigo(304, "e5", 14, "Un capo4")
e6 = Enemigo(305, "e6", 15, "Un capo5")
hero = Heroe(500, "Lucapo", 50)
juego = Juego("Civil War", "1 Hero versus 10 enemys, Who will win?")
juego.addHeroe(hero)
juego.addEnemigo(e1)
juego.addEnemigo(e2)
juego.addEnemigo(e3)
juego.addEnemigo(e4)
juego.addEnemigo(e5)
juego.addEnemigo(e6)
print("Comienza el juego, se te pedira el nombre del enemigo a atacar.")
while(True):
    for i in range(6):
        print("Enemigo numero ", i+1, ", Nombre:",juego.getEnemigo(i).getNombre(),", Vida:", juego.getEnemigo(i).getVida(),", Ataque:",juego.getEnemigo(i).getAtaque(),".")
    eleccion = input("Ingrese nombre de enemigo a atacar: ")
    juego.atacarEnemigo(eleccion)
    for i in range(6):
        print("Enemigo numero ", i+1, ", Nombre:",juego.getEnemigo(i).getNombre(),", Vida:", juego.getEnemigo(i).getVida(),", Ataque:",juego.getEnemigo(i).getAtaque(),".")
