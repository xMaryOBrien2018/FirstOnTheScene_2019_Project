/*
Create Flame Sensor Code with examples and my own coding

edit using F1l7MZLHZ88NFJJ And TempSensor Code And GroveWebsiteCode
F1l7MZLHZ88NFJJ uses a three pin Flame Sensor 
instead of the Four pin Sensor I will be using
*/

int LFlame()
{
  Serial.println("Entered LFlame Function ");
  
  delay(500);        // delay in between reads for stability
  
  Serial.println("Return from LFlame Function ");
}

boolean isFlameDetected(){
  int FLAME_SENSOR;
   if(digitalRead(FLAME_SENSOR)){
     return false;
   }
   else return true;
}

void Fire(){
  // lowest and highest sensor readings:
  const int sensorMin = 0;     // sensor minimum
  const int sensorMax = 1024;  // sensor maximum

  // read the sensor on analog A0:
  int sensorReading = analogRead(A0);

  // map the sensor range (four options):
  // ex: 'long int map(long int, long int, long int, long int, long int)'
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
  
  // range value:
  switch (range) {
    case 0:    // A fire closer than 1.5 feet away.
      Serial.println("** Close Fire **");
      break;
    case 1:    // A fire between 1-3 feet away.
      Serial.println("** Distant Fire **");
      break;
    case 2:    // No fire detected.
      Serial.println("No Fire");
      break;
  }
  delay(1);  // delay between reads
}

