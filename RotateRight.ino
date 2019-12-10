
void rotateRight(int duration, int pwm){
  
  Serial.println("Entered Function rotateRight from Tank Function as object straight ahead so turn right ");
  
  digitalWrite(BackwardsRight,HIGH); // backwards
  digitalWrite(BackwardsLeft,LOW); // don't move
  analogWrite(motor1speed, pwm); // speed
  analogWrite(motor2speed, pwm);
  delay(duration);
  analogWrite(motor1speed, 0); // speed
  analogWrite(motor2speed, 0);
  
  /*Serial.println("after rotating goForward ");
  
  digitalWrite(forwardRight,HIGH); // forward
  digitalWrite(forwardLeft,HIGH); // forward
  
  analogWrite(motor1speed, pwm); // speed
  analogWrite(motor2speed, pwm);
  delay(duration);
  analogWrite(motor1speed, 0); // speed
  analogWrite(motor2speed, 0);
  
  Serial.println("Return to Tank Function as Fuction rotateRight has been run ");*/
}

