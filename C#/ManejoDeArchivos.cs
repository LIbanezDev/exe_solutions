using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace Clases
{
    class ManejoDeArchivos
    {
        private readonly int contador = 0;
        private readonly string linea;
        private readonly List<string> palabras = new List<string>();
        readonly StreamReader archivo = null;

        public ManejoDeArchivos(string ruta)
        {
            try
            {
                archivo = new StreamReader(ruta);
                while ((linea = archivo.ReadLine()) != null)
                {
                    palabras.Add(linea);
                    contador++;
                }

            }catch(Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }

        public void LeerLineas()
        {
            foreach (string lineas in palabras)
            {
                Console.WriteLine(lineas);
            }
            Console.WriteLine("El archivo tiene " + contador + " palabras");
        }

        ~ManejoDeArchivos() // Método destructor
        {
            archivo.Close();
        }
    }
}
