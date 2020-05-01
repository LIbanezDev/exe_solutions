using System;

namespace Etc
{
    class HerenciaAbstracta
    {
        static void Main(string[] args)
        {
            Vehiculo[] vehiculos = new Vehiculo[5];
            vehiculos[0] = new Auto("rojo", 2001, "motor random1", 6);
            vehiculos[1] = new Avion("azul", 2002, "motor random2");
            vehiculos[2] = new Auto("amarillo", 2003, "motor random3", 2);
            vehiculos[3] = new Avion("negro", 2004, "motor random4");
            vehiculos[4] = new Auto("verde", 2005, "motor random5", 2);
            Console.WriteLine("Arrancando motores!");
            foreach(Vehiculo v in vehiculos)
            {
                v.arrancarMotor();
            }
            Console.WriteLine("Deteniendo motores");
            foreach (Vehiculo v in vehiculos)
            {
                v.detenerMotor();
            }
            Console.WriteLine("Motores de cada vehiculo");
            foreach (Vehiculo v in vehiculos)
            {
                Console.WriteLine(v.getMotor());
            }
            Console.WriteLine("Datos generales de cada vehiculo");
            foreach (Vehiculo v in vehiculos)
            {
                v.decirDatos();
            }
        }
    }
    abstract class Vehiculo
    {
        protected string color;
        protected int antiguedad;
        protected int id;
        private static int sumaID = 1; //identificador unico de cada vehiculo [1 -> %]
        protected Vehiculo(string color, int antiguedad)
        {
            this.color = color;
            this.antiguedad = antiguedad;
            this.id = sumaID;
            sumaID++;

        }
        public void setColor(string color) => this.color = color;
        public void setEdad(int antiguedad) => this.antiguedad = antiguedad;
        public int getAntiguedad() => antiguedad;
        public string getColor() => color;
        public int getId() => id;
        abstract public void arrancarMotor();
        abstract public void detenerMotor();
        abstract public string getMotor();
        abstract public void decirDatos();
        public virtual void conducir()
        {
            Console.WriteLine("Los vehiculos conducen");
        }
    }
    class Avion: Vehiculo
    {
        protected string motor;
        public Avion(string color, int antiguedad, string motor) : base(color, antiguedad)
        {
            this.motor = motor;
        }
        public void setMotor(string motor) => this.motor = motor;
        public override string getMotor() => motor;

        public override void arrancarMotor()
        {
            Console.WriteLine("Soy un avion y arranque mi motor " + motor);
        }
        public override void detenerMotor()
        {
            Console.WriteLine("Soy un avion y detuve mi motor " + motor);
        }
        public override void conducir()
        {
            Console.WriteLine("Los aviones conducen");
        }
        public override void decirDatos()
        {
            Console.WriteLine("Datos de avion ID: " + id);
            Console.WriteLine($"Color: {color}, antiguedad:{antiguedad}, motor {motor}");
        }
    }
    class Auto: Avion
    {
        private int puertas;
        
        public Auto(string color, int antiguedad, string motor, int puertas):base(color, antiguedad, motor)
        {
            this.puertas = puertas;
        }
        public override void arrancarMotor()
        {
            Console.WriteLine("Soy un auto y arranco mi motor " + motor);
        }
        public override void detenerMotor()
        {
            Console.WriteLine("Soy un auto y detengo mi motor " + motor);
        }
        public override void conducir()
        {
            Console.WriteLine("Los autos conducen");
        }
        public override void decirDatos()
        {
            Console.WriteLine("Datos de vehiculo ID: " + id);
            Console.WriteLine($"Color: {color}, antiguedad:{antiguedad}, motor {motor}, numero de puertas: {puertas}");
        }
    }
}
