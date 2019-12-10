void Motor(){
      
  Serial.println("Entered Function Motor ");
  
  int dist;
  int flame;
  
  dist = Ultra();
  flame = LFlame();
  
  if(flame <= dist)
  {
    Serial.print("Flame Detected at distance: ");
    Serial.println(dist);
    Serial.println("Do not go Forward!!! ");
    // Make servo go to 0 degrees
    Servo1.write(0);
    delay(3000);
  }
  else if(flame >= dist)
  {
    Serial.print("Flame Detected at distance: ");
    Serial.println(dist);
    Serial.println("Flame is at a safe distance. ");
    // Make servo go to 0 degrees
    Servo1.write(0);
    delay(3000);
  }
  else  // No Flame
  {
    Serial.println("No Flame. Turn 90 degrees Right.");
    // Make servo go to 90 degrees
    Servo1.write(90);
    delay(3000);
  }
  delay(3000);
  
  Serial.println("Return to void Loop as Function Motor has been run");
}
