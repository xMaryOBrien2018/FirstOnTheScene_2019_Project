void stop1(){
  digitalWrite(forwardRight,LOW); // forward
  digitalWrite(forwardLeft,LOW);
  digitalWrite(BackwardsRight,LOW); // backwards
  digitalWrite(BackwardsLeft,LOW); // don't move
  analogWrite(motor1speed, 0); // speed
  analogWrite(motor2speed, 0);
}
