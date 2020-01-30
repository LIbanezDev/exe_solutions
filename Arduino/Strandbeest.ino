int izqA = 5; 
int izqB = 6; 
int derA = 9; 
int derB = 10; 
int vel = 200 ;            // Velocidad de los motores (0-255)
char estado;

int pecho = 2;            // define el pin 2 como (pecho) para el Ultrasonido
int ptrig = 3;            // define el pin 3 como (ptrig) para el Ultrasonido
int duracion, distancia;  // para Calcular distacia

unsigned long tiempo_transcurrido1 = 0; 
unsigned long tiempo_transcurrido2 = 0; 

void setup(){
  Serial.begin(9600);
  pinMode(derA, OUTPUT);
  pinMode(derB, OUTPUT);
  pinMode(izqA, OUTPUT);
  pinMode(izqB, OUTPUT);
  pinMode(pecho, INPUT);   // define el pin 2 como entrada (pecho) 
  pinMode(ptrig,OUTPUT);   // define el pin 3 como salida  (ptrig) 
}

void loop(){
  if(Serial.available()>0){        // lee el bluetooth y almacena en estado
    estado = Serial.read();
  }
  
  switch(estado){
    case 'a': // avanzar
      analogWrite(derB, 0);     
      analogWrite(izqB, 0); 
      analogWrite(derA, vel);  
      analogWrite(izqA, vel); 
      break;
    case 'i': // izquerda
      analogWrite(derB, 0);     
      analogWrite(izqB, 0); 
      analogWrite(derA, 0);  
      analogWrite(izqA, vel); 
      break;
    case 'p': // parar
      analogWrite(derB, 0);     
      analogWrite(izqB, 0); 
      analogWrite(derA, 0);  
      analogWrite(izqA, 0);
      break;
    case 'd': // derecha
      analogWrite(derB, 0);     
      analogWrite(izqB, 0);
      analogWrite(izqA, 0);
      analogWrite(derA, vel);
      break;
    case 'r': //reversa
      analogWrite(derA, 0);    
      analogWrite(izqA, 0);
      analogWrite(derB, vel);  
      analogWrite(izqB, vel); 
      break;
    case 'x': // piloto automatico
      digitalWrite(ptrig, HIGH);   // genera el pulso de trigger por 10us
      delay(0.01);
      digitalWrite(ptrig, LOW);    
      duracion = pulseIn(pecho, HIGH);          // Lee el tiempo del Echo
      distancia = (duracion/2) / 29;            // calcula la distancia en centimetros
      Serial.println(distancia);
      delay(10);
      if(distancia > 6){
          analogWrite(derB, 0);     
        analogWrite(izqB, 0); 
        analogWrite(derA, vel);  
        analogWrite(izqA, vel); 
        }else{           // empieza a transcurrir tiempo
          for(int i = 0; i < 2000; i++){
            analogWrite(derA, 0);    
          analogWrite(izqA, 0);
          analogWrite(derB, vel);  
          analogWrite(izqB, vel);
            delay(1);
          }
          for(int i = 0; i < 2000; i++){
            analogWrite(derB, 0);     
        analogWrite(izqB, 0);
        analogWrite(izqA, 0);
        analogWrite(derA, vel);
            delay(1);
          }          
         }
    break;
    default:  // estará detenido al inicio del programa
      analogWrite(derB, 0);     
      analogWrite(izqB, 0); 
      analogWrite(derA, 0);  
      analogWrite(izqA, 0);
      break;
  }
}
