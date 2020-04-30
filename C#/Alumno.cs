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
        private String msjAlternativo;
        public Alumno(String nombreAlumno, int codigoCurso, double notaAlumno)
        {
            this.nombreAlumno = nombreAlumno;
            this.codigoCurso = codigoCurso;
            this.notaAlumno = notaAlumno;
        }
        public Alumno(String mensaje)
        {
            this.msjAlternativo = mensaje;
        }
        public String getNombreAlumno() => nombreAlumno;
        public int getCodigoCurso() => codigoCurso;
        public double getNotaAlumno() => notaAlumno;
        public String getMensaje() => msjAlternativo;

        public static void ordenarAlumnos(Alumno[] listaTodosLosAlumnos)
        {
            Alumno[] mejoresAlumnos = new Alumno[3];
            bool hayAlumnoUno = false;
            bool hayAlumnoDos = false;
            bool hayAlumnoTres = false;

            for(int j = 0; j < listaTodosLosAlumnos.Length; j++)
            {
                    if (listaTodosLosAlumnos[j].getCodigoCurso() == 1 && !hayAlumnoUno)
                    {
                        mejoresAlumnos[0] = new Alumno(listaTodosLosAlumnos[j].getNombreAlumno(), listaTodosLosAlumnos[j].getCodigoCurso(), listaTodosLosAlumnos[j].getNotaAlumno());
                        hayAlumnoUno = true;
                    }
                    else if (listaTodosLosAlumnos[j].getCodigoCurso() == 1 && hayAlumnoUno && listaTodosLosAlumnos[j].getNotaAlumno() > mejoresAlumnos[0].getNotaAlumno())
                    {
                        mejoresAlumnos[0] = listaTodosLosAlumnos[j];
                    }

                    if (listaTodosLosAlumnos[j].getCodigoCurso() == 2 && !hayAlumnoDos)
                    {
                        mejoresAlumnos[1] = new Alumno(listaTodosLosAlumnos[j].getNombreAlumno(), listaTodosLosAlumnos[j].getCodigoCurso(), listaTodosLosAlumnos[j].getNotaAlumno());
                        hayAlumnoDos = true;
                    }
                    else if (listaTodosLosAlumnos[j].getCodigoCurso() == 2 && hayAlumnoDos && listaTodosLosAlumnos[j].getNotaAlumno() > mejoresAlumnos[1].getNotaAlumno())
                    {
                        mejoresAlumnos[1] = listaTodosLosAlumnos[j];
                    }

                    if (listaTodosLosAlumnos[j].getCodigoCurso() == 3 && !hayAlumnoTres)
                    {
                        mejoresAlumnos[2] = new Alumno(listaTodosLosAlumnos[j].getNombreAlumno(), listaTodosLosAlumnos[j].getCodigoCurso(), listaTodosLosAlumnos[j].getNotaAlumno());
                        hayAlumnoTres = true;
                    }
                    else if (listaTodosLosAlumnos[j].getCodigoCurso() == 3 && hayAlumnoTres && listaTodosLosAlumnos[j].getNotaAlumno() > mejoresAlumnos[2].getNotaAlumno())
                    {
                        mejoresAlumnos[2] = listaTodosLosAlumnos[j];
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
