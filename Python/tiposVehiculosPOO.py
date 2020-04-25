class Vehiculo:
    def __init__(self, color, ruedas):
        self. color = color
        self.ruedas = ruedas
    def getColor(self):
        return self.color
    def getRuedas(self):
        return self.ruedas    
class Auto(Vehiculo):
    def __init__(self, color, ruedas, velocidad, cilindrada):
        super().__init__(color, ruedas)
        self.velocidad = velocidad
        self.cilindrada = cilindrada
class Camioneta(Auto):
    def __init__(self, color, ruedas, velocidad, cilindrada, carga):
        super().__init__(color, ruedas, velocidad, cilindrada)
        self.carga = carga
class Bicicleta(Vehiculo):
    def __init__(self, color, ruedas, tipo):
        super().__init__(color, ruedas)
        self.tipo = tipo
class Moto(Bicicleta):
    def __init__(self, color, ruedas, tipo, velocidad, cilindrada):
        super().__init__(color, ruedas, tipo)
        self.velocidad = velocidad
        self.cilindrada = cilindrada
def catalogar(vehiculos):
    for i in vehiculos:
        print(type(i).__name__)
        print(i.getColor())
        print(i.getRuedas())

auto = Auto("Rojo",4,200,12)
camioneta = Camioneta("Azul",4,150,15,500)
bici = Bicicleta("Amarillo",2,'u')
moto = Moto("Negro",2,'d',250,5)
vehiculos = [auto,camioneta,bici,moto]
catalogar(vehiculos)
