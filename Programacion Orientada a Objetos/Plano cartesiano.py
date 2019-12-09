import math
import turtle
fondo = turtle.Screen()
fondo.bgcolor("white")
fondo.title("Plano Cartesiano por Lucapo")
yo = turtle.Turtle()
yo.speed(1)
yo.exitonclick()

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
    def getDistancia(self, punto1, punto2):
        return math.sqrt(pow(punto2.getX() - punto1.getX(), 2) + pow(punto2.getY() - punto1.getY(), 2))

class Plano:
    def __init__(self, largo_x, largo_y):
        self.largo_x = largo_x
        self.largo_y  = largo_y
    def dibujarPlano(self):
        yo.forward(self.largo_x / 2)

plano = Plano(50,50)
plano.dibujarPlano()
