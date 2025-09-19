#include <Arduino.h>

int redLED = 5;
int greenLED = 6;
int blueLED = 7;

int trigPin = 12;
int echoPin = 13;

int buzzerPin = 10;

long duration;
float distance;

void setup() {
  Serial.begin(9600);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  // Set trigpin to low
  digitalWrite(trigPin, LOW);
  delay(10);

  // Enable soundwaves then disable after a period of time
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*0.017);

  if (distance <= 20){
    analogWrite(redLED, 75);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
    digitalWrite(buzzerPin, HIGH);
  } else if (distance >= 20.01 && distance <= 40){
    analogWrite(redLED, 75);
    analogWrite(greenLED, 75);
    analogWrite(blueLED, 0);
    digitalWrite(buzzerPin, LOW);
  } else {
    analogWrite(redLED, 0);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 255);
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}