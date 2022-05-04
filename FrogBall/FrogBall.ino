
#include <Servo.h>
const int BUTTONPIN8 = 8;
const int BUTTONPIN9 = 9;

const int SWITCHPIN2 = 2;
const int SWITCHPIN3 = 3;
const int SWITCHPIN4 = 4;

const int SERVOPIN5 = 5;
const int SERVOPIN6 = 6;
const int SERVOPIN7 = 7;

const int LEDPIN12 = 12;
const int LEDPIN11 = 11;

int switchValue2;
int switchValue3;
int switchValue4;

int buttonValue8;
int buttonValue9;

Servo sky;
Servo heart;
Servo ball;


void setup() {
  ball.attach(SERVOPIN5);
  ball.write(165);
  sky.attach(SERVOPIN6);
  sky.write(0);
  heart.attach(SERVOPIN7);
  heart.write(0);

  pinMode(LEDPIN12, OUTPUT);
  pinMode(LEDPIN11, OUTPUT);

  pinMode(BUTTONPIN8, INPUT);
  pinMode(BUTTONPIN9, INPUT);

  pinMode(SWITCHPIN2, INPUT);
  pinMode(SWITCHPIN3, INPUT);
  pinMode(SWITCHPIN4, INPUT);

}

void loop() {
  buttonValue8 = digitalRead(BUTTONPIN8);
  buttonValue9 = digitalRead(BUTTONPIN9);

  switchValue2 = digitalRead(SWITCHPIN2);
  switchValue3 = digitalRead(SWITCHPIN3);
  switchValue4 = digitalRead(SWITCHPIN4);

  if (buttonValue8 == HIGH) {
    ball.write(15);
    digitalWrite(LEDPIN11, HIGH);
  }

  if (switchValue2 == HIGH) {
    digitalWrite(LEDPIN11, LOW);
    digitalWrite(LEDPIN12, HIGH);
    //ball.write(15);
  }
  if (switchValue3 == HIGH) {
    digitalWrite(LEDPIN11, LOW);
    digitalWrite(LEDPIN12, LOW);
    sky.write(180);
  }
  if (switchValue4 == HIGH) {
    sky.write(180);
   
  }
  if (buttonValue9 == HIGH) {
    heart.write(180);
  }
}
