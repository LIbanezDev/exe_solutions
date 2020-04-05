import math
class Punto:
    def __init__(self):
        self.x = 0
        self.y = 0 
    def __init__(self, x, y):
        self.x = x
        self.y = y
    def getX(self):
        return self.x
    def getY(self):
        return self.y
    def getCuadrante(self, punto):
        if punto.getX() > 0 and punto.getY() > 0:
            return 1
        if punto.getX() < 0 and punto.getY() > 0:
            return 2
        if punto.getX() < 0 and punto.getY() < 0:
            return 3
        if punto.getX() > 0 and punto.getY() < 0:
            return 4
        if punto.getX() == 0 or punto.getY() == 0:
            return 0

class Plano:
    puntos = []
    def __init__(self, largo_x, largo_y):
        self.largo_x = largo_x
        self.largo_y  = largo_y
    def getPuntos(self):
        k = 1
        for i in self.puntos:
            print(k,"(", i.getX(),",",i.getY(),") Cuadrante:", i.getCuadrante(i))
            k+=1          
    def agregarPunto(self, pe):
        self.puntos.append(pe)
    def getDistancia(self, punto1, punto2):
        return math.sqrt(pow(punto2.getX() - punto1.getX(), 2) + pow(punto2.getY() - punto1.getY(), 2))    
    
p1 = Punto(0,0)
p2 = Punto(2,3)
plano = Plano(10,10)
plano.agregarPunto(p1)
plano.agregarPunto(p2)
plano.getPuntos()
print("distancia entre puntos:",plano.getDistancia(p1,p2))