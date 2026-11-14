#include <Arduino.h>

// Pinos dos botoes (cada botao deve ligar o pino correspondente ao GND)
const int notaC = 2;
const int notaD = 3;
const int notaE = 4;
const int notaF = 5;
const int notaG = 6;
const int notaA = 7;
const int notaB = 8;
const int notaCagudo = 9;

// Pino do buzzer
const int buzzer = 13;

void setup() {
  pinMode(notaC, INPUT_PULLUP);
  pinMode(notaD, INPUT_PULLUP);
  pinMode(notaE, INPUT_PULLUP);
  pinMode(notaF, INPUT_PULLUP);
  pinMode(notaG, INPUT_PULLUP);
  pinMode(notaA, INPUT_PULLUP);
  pinMode(notaB, INPUT_PULLUP);
  pinMode(notaCagudo, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);
}

void loop() {
  // INPUT_PULLUP significa que LOW indica um botao pressionado.
  // Se mais de um for pressionado, a primeira condicao tem prioridade.
  if (digitalRead(notaC) == LOW) {
    tone(buzzer, 262);
  } else if (digitalRead(notaD) == LOW) {
    tone(buzzer, 294);
  } else if (digitalRead(notaE) == LOW) {
    tone(buzzer, 330);
  } else if (digitalRead(notaF) == LOW) {
    tone(buzzer, 349);
  } else if (digitalRead(notaG) == LOW) {
    tone(buzzer, 392);
  } else if (digitalRead(notaA) == LOW) {
    tone(buzzer, 440);
  } else if (digitalRead(notaB) == LOW) {
    tone(buzzer, 494);
  } else if (digitalRead(notaCagudo) == LOW) {
    tone(buzzer, 523);
  } else {
    noTone(buzzer);
  }
}
