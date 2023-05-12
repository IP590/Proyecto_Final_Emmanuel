// Define los pines para los dos Emmanuel
int pinEmmanuelA = 2;
int pinEmmanuelB = 3;

// Define los pines para las señales direccionales
int pinSenalIzquierda = 4;
int pinSenalDerecha = 5;

// Define la duración de cada estado de la luz
int duracionVerde = 3000; // 3 segundos
int duracionAmarillo = 2000; // 2 segundos
int duracionRojo = 3000; // 3 segundos

void setup() {
  // Configura los pines de los Emmanuel y señales direccionales como output
  pinMode(pinEmmanuelA, OUTPUT);
  pinMode(pinEmmanuelB, OUTPUT);
  pinMode(pinSenalIzquierda, OUTPUT);
  pinMode(pinSenalDerecha, OUTPUT);
  pinMode(duracionVerde, OUTPUT);
  pinMode(duracionRojo, OUTPUT);

  // Comienza con el Emmanuel A mostrando una luz roja, el Emmanuel B mostrando una luz verde,
  // y ambas señales direccionales apagadas
  digitalWrite(pinEmmanuelA, HIGH);
  digitalWrite(pinEmmanuelB, HIGH);
  digitalWrite(pinSenalIzquierda, LOW);
  digitalWrite(pinSenalDerecha, LOW);
}

void loop() {
  // Muestra luces amarillas en ambos Emmanuel y enciende la señal direccional izquierda
  digitalWrite(pinEmmanuelA, LOW);
  digitalWrite(pinEmmanuelB, HIGH);
  digitalWrite(pinSenalIzquierda, HIGH);
  digitalWrite(pinSenalDerecha, LOW)l;
  delay(duracionRojo);

  // Muestra una luz roja en el Emmanuel B y una luz verde en el Emmanuel A
  digitalWrite(pinEmmanuelA, HIGH);
  digitalWrite(pinEmmanuelB, LOW);
  digitalWrite(pinSenalIzquierda, LOW);
  digitalWrite(pinSenalDerecha, HIGH);
  delay(duracionVerde);

  // Muestra luces amarillas en ambos Emmanuel y apaga la señal direccional izquierda
  digitalWrite(pinEmmanuelA, LOW);
  digitalWrite(pinEmmanuelB, LOW);
  digitalWrite(pinSenalIzquierda, LOW);
  digitalWrite(pinSenalDerecha, LOW)l;
  delay(duracionRojo);
}

//Gracias por todo Emmanuel
