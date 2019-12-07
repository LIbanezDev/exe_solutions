class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
    def hablar(self):
        print("Hola mi nombre es " + self.nombre)
    def decir_edad(self):
        print("Tengo ", self.edad , "años")

lucas = Persona("Lucas", 18)
lucas.nombre = "Lucapito"
lucas.edad = 20
lucas.hablar()
lucas.decir_edad()


