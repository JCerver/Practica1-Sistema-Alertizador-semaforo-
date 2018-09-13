                                /*DEFINICION DE VARIABLES A UTILIZAR*/
//Comenzamos por definir las variables correspondientes a los pines de salida digital del arduino
#define ledRojo_carro  2
#define ledAmarillo_carro  3
#define ledVerde_carro  4
#define ledRojo_peaton 5
#define ledVerde_peaton  6

//Definimos el pin de salida para el boton o pulsador
#define botonPeatonal  8

//Se define el pin de entrada analogica para registrar valores del potenciometro
#define pot A5

//Se define una variable entera para determinar el estado del boton, ya sea encendido o apagado.                    
int estadoBoton;

//Se define una variable entera para almacenar el valor del potenciometro. 
int valorPot;



                 /*INICIALIZACION Y ASIGNACION DE VALORES A VARIABLES DEFINIDAS  Y ESTADOS DE PINES*/
void setup(){  
  //Se especifican los puertos correspondientes de salida                                    
  pinMode(ledVerde_carro, OUTPUT);
  pinMode(ledAmarillo_carro, OUTPUT);
  pinMode(ledRojo_carro, OUTPUT);
  pinMode(ledRojo_peaton, OUTPUT);
  pinMode(ledVerde_peaton, OUTPUT);

  //Se coloca la comunicacion serial en 9600 
  Serial.begin(9600);
  //se inicializa la variable del valor del potenciometro en 0
  valorPot=0;
}

             /*INICIA EL CICLO QUE SE EJECUTA INDEFINIDAMENTE*/
void loop(){
      

  //Se manda a llamar al metodo encargado de realizar todo el proceso de los estados a partir del estado del boton
  estadoSemaforo();
}


void estadoSemaforo(){
  

    //Se realiza un ciclo for donde hace que el led verde del semaforo de carros parpadea para indicar un cambio de estado 
    for (int i = 0; i < 3; i++){
      digitalWrite(ledVerde_carro, LOW); 
      // el semaforo verde parpadea con una frecuencia de 5 ms
      delay(500);
      digitalWrite(ledVerde_carro, HIGH);            
      delay(500);
    }
    //Se apaga el led verde de carros, se enciende el ledamarillo y  parpadea por 1000 ms y despues se apaga.
    digitalWrite(ledVerde_carro, LOW);
    digitalWrite(ledAmarillo_carro, HIGH);
    delay(1000);
    digitalWrite(ledAmarillo_carro, LOW);  

    //Se enciende el led rojo del semaforo de carros, se activa el led verde peatonal y se desactiva el led rojo del mismo.
    //este estado dura 5 ms      
    digitalWrite(ledRojo_carro, HIGH);                //  
    digitalWrite(ledVerde_peaton, HIGH);          
    digitalWrite(ledRojo_peaton, LOW);
    delay(7000);

    //Se realiza un ciclo for donde hace que el led verde del semaforo peatonal parpadea para indicar un cambio de estado 
    for (int i = 0; i < 3; i++){
      digitalWrite(ledVerde_peaton, LOW); 
      // el semaforo verde parpadea con frecuencia de 5 ms
      delay(500);
      digitalWrite(ledVerde_peaton, HIGH);            
      delay(500);
    }

    // se apaga el led rojo de carros y el led verde peatonal
    digitalWrite(ledRojo_carro, LOW);
    digitalWrite(ledVerde_peaton, LOW);           

  

   

}


