using System;
using System.Collections.Generic;
using System.Text;

namespace Clases
{
    class Alumno
    {
        private String nombreAlumno;
        private int codigoCurso;
        private double notaAlumno;

        public Alumno(String nombreAlumno, int codigoCurso, double notaAlumno)
        {
            this.nombreAlumno = nombreAlumno;
            this.codigoCurso = codigoCurso;
            this.notaAlumno = notaAlumno;
        }
        public String getNombreAlumno() => nombreAlumno;
        public int getCodigoCurso() => codigoCurso;
        public double getNotaAlumno() => notaAlumno;

        public static void ordenarAlumnos()
        {
            var listaAlumnos = new Alumno[4];
            String nombreAlumno;
            int cursoCapacitacion;
            double notaObtenida;

            for (int i = 0; i < 4; i++)
            {
                Console.WriteLine($"Alumno numero {i + 1}");
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
                listaAlumnos[i] = new Alumno(nombreAlumno, cursoCapacitacion, notaObtenida);
            }

            Alumno[] mejoresAlumnos = new Alumno[3];

            bool hayAlumnoUno = false;
            bool hayAlumnoDos = false;
            bool hayAlumnoTres = false;

            for(int j = 0; j < listaAlumnos.Length; j++)
            //foreach(Alumno alumnoActual in listaTodosLosAlumnos)
            {
                    if (listaAlumnos[j].getCodigoCurso() == 1 && !hayAlumnoUno)
                    {
                        mejoresAlumnos[0] = listaAlumnos[j];
                        hayAlumnoUno = true;
                    }
                    else if (listaAlumnos[j].getCodigoCurso() == 1 && hayAlumnoUno && listaAlumnos[j].getNotaAlumno() > mejoresAlumnos[0].getNotaAlumno())
                    {
                        mejoresAlumnos[0] = listaAlumnos[j];
                    }

                    if (listaAlumnos[j].getCodigoCurso() == 2 && !hayAlumnoDos)
                    {
                        mejoresAlumnos[1] = listaAlumnos[j];
                        hayAlumnoDos = true;
                    }
                    else if (listaAlumnos[j].getCodigoCurso() == 2 && hayAlumnoDos && listaAlumnos[j].getNotaAlumno() > mejoresAlumnos[1].getNotaAlumno())
                    {
                        mejoresAlumnos[1] = listaAlumnos[j];
                    }

                    if (listaAlumnos[j].getCodigoCurso() == 3 && !hayAlumnoTres)
                    {
                        mejoresAlumnos[2] = listaAlumnos[j];
                        hayAlumnoTres = true;
                    }
                    else if (listaAlumnos[j].getCodigoCurso() == 3 && hayAlumnoTres && listaAlumnos[j].getNotaAlumno() > mejoresAlumnos[2].getNotaAlumno())
                    {
                        mejoresAlumnos[2] = listaAlumnos[j];
                    }               
            }

            String textoMayorUno = "WORD: No hay alumnos :(";
            String textoMayorDos = "EXCEL: No hay alumnos :(";
            String textoMayorTres = "PPT: No hay alumnos :(";

            if (hayAlumnoUno) textoMayorUno = $"WORD: {mejoresAlumnos[0].getNombreAlumno()}, con un {mejoresAlumnos[0].getNotaAlumno()}";
            if (hayAlumnoDos) textoMayorDos = $"EXCEL: {mejoresAlumnos[1].getNombreAlumno()}, con un {mejoresAlumnos[1].getNotaAlumno()}";
            if (hayAlumnoTres) textoMayorTres = $"PPT: {mejoresAlumnos[2].getNombreAlumno()}, con un {mejoresAlumnos[2].getNotaAlumno()}";

            Console.WriteLine(textoMayorUno);
            Console.WriteLine(textoMayorDos);
            Console.WriteLine(textoMayorTres);

        }
    }
}
