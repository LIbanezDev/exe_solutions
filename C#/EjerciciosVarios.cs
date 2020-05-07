using System;
using System.Collections.Generic;
using System.Text;

namespace Clases
{
    class EjerciciosVarios
    {
        static void laboratiorioUno()
        {
            String nombreAlumno;
            int cursoCapacitacion;
            double notaObtenida;

            double notaMayorCursoUno = 0;
            double notaMayorCursoDos = 0;
            double notaMayorCursoTres = 0;

            String nombreNotaMayorUno = "Sin alumnos";
            String nombreNotaMayorDos = "Sin alumnos";
            String nombreNotaMayorTres = "Sin alumnos";

            bool hayNotaUno = false;
            bool hayNotaDos = false;
            bool hayNotaTres = false;



            for (int i = 0; i < 10; i++)
            {
                Console.WriteLine($"Alumno {i + 1}, ingrese sus datos");
                while (true)
                {
                    Console.WriteLine("Nombre de alumno: ");
                    nombreAlumno = Console.ReadLine();
                    if (nombreAlumno.Length >= 1) break;
                    Console.WriteLine("Nombre de alumno debe contener como minimo 1 caracter. ");
                }
                while (true)
                {                                               // Validaciones
                    Console.WriteLine("Codigo de curso: ");
                    cursoCapacitacion = int.Parse(Console.ReadLine());
                    if (cursoCapacitacion >= 1 && cursoCapacitacion <= 3) break;
                    Console.WriteLine("Curso de capacitación debe estar entre 1 y 3");
                }
                while (true)
                {
                    Console.WriteLine("Nota obtenida: ");
                    notaObtenida = double.Parse(Console.ReadLine());
                    if (notaObtenida >= 1 && notaObtenida <= 7) break;
                    Console.WriteLine("Nota debe estar entre 1 y 7");
                }

                if (cursoCapacitacion == 1 && !hayNotaUno)
                {
                    notaMayorCursoUno = notaObtenida;
                    nombreNotaMayorUno = nombreAlumno;
                    hayNotaUno = true;
                    continue;
                }
                if (cursoCapacitacion == 2 && !hayNotaDos)
                {
                    notaMayorCursoDos = notaObtenida;
                    nombreNotaMayorDos = nombreAlumno;
                    hayNotaDos = true;
                    continue;
                }
                if (cursoCapacitacion == 3 && !hayNotaTres)
                {
                    notaMayorCursoTres = notaObtenida;
                    nombreNotaMayorTres = nombreAlumno;
                    hayNotaTres = true;
                    continue;
                }

                if (cursoCapacitacion == 1 && notaObtenida > notaMayorCursoUno && hayNotaUno)
                {
                    notaMayorCursoUno = notaObtenida;
                    nombreNotaMayorUno = nombreAlumno;
                }
                if (cursoCapacitacion == 2 && notaObtenida > notaMayorCursoDos && hayNotaDos)
                {
                    notaMayorCursoDos = notaObtenida;
                    nombreNotaMayorDos = nombreAlumno;
                }
                if (cursoCapacitacion == 3 && notaObtenida > notaMayorCursoTres && hayNotaTres)
                {
                    notaMayorCursoTres = notaObtenida;
                    nombreNotaMayorTres = nombreAlumno;
                }
            }
            String textoMayorUno = $"WORD: {nombreNotaMayorUno}, con un {notaMayorCursoUno}";
            String textoMayorDos = $"EXCEL: {nombreNotaMayorDos}, con un {notaMayorCursoDos}";
            String textoMayorTres = $"PPT: {nombreNotaMayorTres}, con un {notaMayorCursoTres}";

            if (!hayNotaUno) textoMayorUno = $"WORD: {nombreNotaMayorUno} :(";
            if (!hayNotaDos) textoMayorDos = $"EXCEL: {nombreNotaMayorDos} :(";
            if (!hayNotaTres) textoMayorTres = $"PPT: {nombreNotaMayorTres} :(";

            Console.WriteLine(textoMayorUno);
            Console.WriteLine(textoMayorDos);
            Console.WriteLine(textoMayorTres);
        }
        static void digitoVerificadorRut()
        {
            double rutInt = int.Parse(Console.ReadLine());
            double[] rutIntArray = new double[8];

            for (int i = 7; i >= 0; i--)
            {
                rutIntArray[i] = rutInt % 10;
                rutInt /= 10;
                rutInt = Math.Truncate(rutInt);
            }

            int multiplicador = 2;
            double sumaDigitos = 0;
            for (int d = 7; d >= 0; d--)
            {
                sumaDigitos += rutIntArray[d] * multiplicador;
                multiplicador++;
                if (d == 2) multiplicador = 2;
            }

            double resto = sumaDigitos % 11;

            switch (resto)
            {
                case 0:
                    Console.WriteLine(0);
                    break;
                case 1:
                    Console.WriteLine("k");
                    break;
                default:
                    Console.WriteLine(11 - resto);
                    break;
            }
        }
    }
}
