using System;
using System.Collections.Generic;
using System.Text;

namespace Clases
{
    abstract class Trabajador : IAboutYou
    {
        public int Edad { get; }
        public int Sueldo { get; }
        public string Nombre { get; }

        public Trabajador(string nombre, int edad, int sueldo)
        {
            this.Nombre = nombre;
            this.Edad = edad;
            this.Sueldo = sueldo;
        }

        abstract override public string ToString();
    }
    class FrontEnd : Trabajador
    {
        public string FavoriteTechnology { get; }

        public FrontEnd(string nombre, int edad, int sueldo, string favoriteTechnology) :base(nombre, edad, sueldo)
        {
            this.FavoriteTechnology = favoriteTechnology;
        }

        public override string ToString()
        {
            return "My name is " + Nombre + ", i am " + Edad + " years old FrontEnd Developer " + ", my actual salary is " + Sueldo + " and i love " + FavoriteTechnology;
        }
    }
    class BackEnd : Trabajador
    {
        public int Experience { get; }

        public BackEnd(string nombre, int edad, int sueldo, int experience) : base(nombre, edad, sueldo)
        {
            this.Experience = experience;
        }

        public override string ToString()
        {
            return "My name is " + Nombre + ", i am a " + Edad + " years old BackEnd Developer " + ", my actual salary is " + Sueldo + " and i have been an engineer for " + Experience + " years";
        }
    }
}
