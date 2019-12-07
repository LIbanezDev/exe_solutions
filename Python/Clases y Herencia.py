class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
    def decir_nombre(self):
        print("Hola mi nombre es" + self.nombre)
    def decir_edad(self):
        print("Tengo", self.edad , "años")

class Estudiante(Persona):
    def __init__(self, nombre, edad, grado):
        super().__init__(nombre, edad)
        self.graduado = grado
    def presentarse(self):
        print("Mi nombre es", self.nombre, "tengo", self.edad, "y estoy en", self.graduado, "grado")

lucas = Estudiante("lucas", 18, 1)
lucas.presentarse()
lucas.decir_edad()
lucas.decir_nombre()


