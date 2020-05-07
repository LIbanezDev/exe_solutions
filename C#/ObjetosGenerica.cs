using System;
using System.Collections.Generic;
using System.Text;

namespace Clases
{
    class Objetos<T> where T : IAboutYou  /* Clase generica solo para almacenar objetos de aquellas clases
                                         que tengan implementada la interfaz IAboutYou */
    {
        static T[] almacenObjetos;
        private int i = 0;

        public Objetos(int cantidadElementos)
        {
            almacenObjetos = new T[cantidadElementos];
        }

        public void agregarElemento(T objetoAgregar)
        {
            almacenObjetos[i] = objetoAgregar;
            Console.WriteLine("Elemento agregado en el indice " + i + " clase: " + objetoAgregar.GetType());

            i++;
        }
        public T GetElemento(int indice)
        {
            return almacenObjetos[indice];
        }
    }
}
