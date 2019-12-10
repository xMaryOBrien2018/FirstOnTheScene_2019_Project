
#include <Servo.h>

const int trigPin = 12;  //digital pins for Ultra-Sonic Sensor
const int echoPin = 11;
const int servoPin = 3;

const int mq2 = A3;  // set analog pin A3
const int tempOut = A2;


int motor1speed = 6; // digital pins for speed control
int motor2speed = 9;
int forwardLeft = 8; // digital pins for direction control n
int BackwardsLeft = 4;
int forwardRight = 2;
int BackwardsRight = 7;

int Ultra();
void Tank(int dis);
void goForward(int duration, int pwm);
void goBackward(int duration, int pwm);
void rotateRight(int duration, int pwm);

Servo Servo1; 

void CleanAir();
int LFlame();
boolean isFlameDetected();  //code needs work
void Fire();  //code needs work

int distance = 0;
int temp;
char choice;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);  // set digital pin as output
  pinMode(echoPin, INPUT);  // set digital pin as input
  
  pinMode(tempOut, INPUT);
  
  Servo1.attach(servoPin);
  
  pinMode(forwardRight, OUTPUT);
  pinMode(forwardLeft, OUTPUT);
  pinMode(BackwardsRight, OUTPUT);
  pinMode(BackwardsLeft, OUTPUT);
  delay(5000);
}

void loop() {
  
  Serial.println("Start of loop ");  // print so I can see code before function call
  
  choice = Serial.read();
  Serial.println("You have typed in: ");
  Serial.print(choice);
  
  switch(choice){
    case 'a':
          CleanAir();  // call function
          break;
    case 'b':
          goBackward(2000, 255);
          delay(2000);
          stop1();
          delay(1000);
          break;
    case 'f':
          goForward(1000, 255);
          delay(2000);
          stop1();
          delay(1000);
          break;
    case 'l':
            temp = LFlame();
            Fire();
            isFlameDetected();
          delay(2000);
          break;
    case 'm':
          Motor();
          delay(2000);
          break;
    case 'r':
          rotateRight(1000, 255);
          delay(2000);
          stop1();
          delay(1000);
          break;
    case 't':
          distance = Ultra();
          Tank(distance);
          break;
    case 'u':
          distance = Ultra();
          break;
    default:
          Serial.println("Invaid input ");
          
          Serial.println("Case 'a': CleanAir ");
          Serial.println("Case 'b': Backwards ");
          Serial.println("Case 'f': Forwards ");
          Serial.println("Case 'l': LFlame ");
          Serial.println("Case 'm': Motor ");
          Serial.println("Case 'r': RotateRight ");
          Serial.println("Case 't': Tank ");
          Serial.println("Case 'u': Ultra ");
          delay(3000);
          Serial.println(" ");
          
          break;
  }
  
  Serial.println("End of loop ");  // print so I can see code return from function call
}
