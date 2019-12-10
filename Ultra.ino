
int Ultra(){
  // following print allow me to know that it entered the function from the function call
  Serial.println("Entered Function Ultra ");
  // set var.
  long dur;
  int dist;
  
  digitalWrite(trigPin, LOW);  // sets the pin off
  delayMicroseconds(2);  // 2 microSec delay
  
  digitalWrite(trigPin, HIGH);  // sets the pin on
  delayMicroseconds(10);  // 10 microSec delay
  
  digitalWrite(trigPin, LOW);  // sets the pin off
  dur = pulseIn(echoPin, HIGH);  // pulsIn from Instructables
  dist = (dur/2) / 29.1;
  
  if (dist >= 1000 || dist <= 10){
    Serial.println("Out of range");
  }
  else {
    Serial.println("Obstacle in sight of distance: ");
    Serial.print(dist);
    Serial.println(" cm");  // print dist read in cm on its own line
  }
  delay(1000);  // 1s delay
  
  Serial.println("Return to Loop as Fuction Ultra has been run ");
  
  return dist;
}
