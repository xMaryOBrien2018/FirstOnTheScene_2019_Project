
void goForward(int duration, int pwm){
  
  Serial.println("Entered Function goForward from Tank Function as no object ahead ");
  
  digitalWrite(forwardRight,HIGH); // forward
  digitalWrite(forwardLeft,HIGH); // forward
  
  analogWrite(motor1speed, pwm); // speed
  analogWrite(motor2speed, pwm);
  delay(duration);
  analogWrite(motor1speed, 0); // speed
  analogWrite(motor2speed, 0);
  
  Serial.println("Return to Tank Function as Fuction goFroward has been run ");
}
