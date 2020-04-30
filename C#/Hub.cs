using System;
namespace Clases
{
    class Hub
    {
        static void Main(string[] args)
        {
            var listaAlumnos = new Alumno[4];
            String nombreAlumno;
            int cursoCapacitacion;
            double notaObtenida;
            for(int i = 0; i < 4; i++)
            {
                Console.WriteLine($"Alumno numero {i+1}");
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

            Alumno.ordenarAlumnos(listaAlumnos);
        }
        static void getEjercicioProgra()
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
    }  
}
