# Crear clase persona con atributos nombre y edad con metodos de decir nombre y decir edad.
# Crear clase estudiante que herede los atributos nombre y edad y agregue un nuevo atributo llamado grado
# Crear metodo presentacion en la clase estudiante que incluya los 3 atributos 

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


