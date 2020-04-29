using System;

namespace Clases
{
    class Program
    {
        static void Main(string[] args)
        {
            Persona[] personas = new Persona[5];
            personas[0] = new Persona("lucas", 18);
            personas[1] = new Persona("lucas2", 19);
            personas[2] = new Persona("lucas3", 20);
            personas[3] = new Persona("lucas4", 21);
            personas[4] = new Persona("lucas5", 22); 
            Persona.decirDatosPersonas(personas);

        }
    }
    class Persona
    {
        private String nombre;
        private int edad, identificador;
        private static int identificadores = 1;
        public Persona(String nombre, int edad)
        {
            this.nombre = nombre;
            this.edad = edad;
            this.identificador = identificadores;
            identificadores++;
        }
        public static void decirDatosPersonas(Persona[] listaPersonas)
        {
            foreach(Persona persona in listaPersonas)
            {

                Console.WriteLine("Hola mi nombre es " + persona.nombre + ", tengo " + persona.edad + " años, y mi id es " + persona.identificador);
            }
            
        }
    }
}
