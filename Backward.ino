
void goBackward(int duration, int pwm){
  
  Serial.println("Entered Function goBackward from Tank Function as object straight ahead so back up ");
  
  digitalWrite(BackwardsRight,HIGH); // backward
  digitalWrite(BackwardsLeft,HIGH); // backward
  analogWrite(motor1speed, pwm); // speed
  analogWrite(motor2speed, pwm);
  //7 Arduino Workshop ©2013, John Boxall
  delay(duration);
  analogWrite(motor1speed, 0); // speed
  analogWrite(motor2speed, 0);
  
  Serial.println("Return to Tank Function as Fuction goBackward has been run ");
}
