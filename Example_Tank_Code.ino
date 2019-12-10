/*  
    This is an excerpt from
    Arduino Workshop by John Boxall.
    For more information or to order a copy of
    Arduino Workshop, visit nostarch.com/arduino.
    Print purchase includes DRM-free ebook
    (PDF, Mobi, and ePub).
*/

// Project 40 - Building and Controlling a Tank Robot
// Example code for tank from pdf file 
// Link: http://pop.h-cdn.co/assets/cm/15/06/54cfd84d128fd_-_arduino_project40.pdf


int m1speed=6; // digital pins for speed control
int m2speed=5;
int m1direction=7; // digital pins for direction control
int m2direction=4;

void setup()
{
 pinMode(m1direction, OUTPUT);
 pinMode(m2direction, OUTPUT);
 delay(5000);
}
void goForward(int duration, int pwm)
{
u digitalWrite(m1direction,HIGH); // forward
 digitalWrite(m2direction,HIGH); // forward
 analogWrite(m1speed, pwm); // speed
 analogWrite(m2speed, pwm);
 delay(duration);
 analogWrite(m1speed, 0); // speed
 analogWrite(m2speed, 0);
}
void goBackward(int duration, int pwm)
{
 digitalWrite(m1direction,LOW); // backward
v digitalWrite(m2direction,LOW); // backward
 analogWrite(m1speed, pwm); // speed
 analogWrite(m2speed, pwm);
 7 Arduino Workshop
©2013, John Boxall
 delay(duration);
 analogWrite(m1speed, 0); // speed
 analogWrite(m2speed, 0);
}
void rotateRight(int duration, int pwm)
{
w digitalWrite(m1direction,HIGH); // forward
 digitalWrite(m2direction,LOW); // backward
 analogWrite(m1speed, pwm); // speed
 analogWrite(m2speed, pwm);
 delay(duration);
 analogWrite(m1speed, 0); // speed
 analogWrite(m2speed, 0);
}
void rotateLeft(int duration, int pwm)
{
x digitalWrite(m1direction,LOW); // backward
 digitalWrite(m2direction,HIGH); // forward
 analogWrite(m1speed, pwm); // speed
 analogWrite(m2speed, pwm);
 delay(duration);
 analogWrite(m1speed, 0); // speed
 analogWrite(m2speed, 0);
}
void loop()
{
 goForward(1000, 255);
 rotateLeft(1000, 255);
 goForward(1000, 255);
 rotateRight(1000, 255);
 goForward(1000, 255);
 goBackward(2000, 255);
 delay(2000);
}
