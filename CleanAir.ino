
void CleanAir(){
  Serial.println("Entered Function CleanAir ");
  
  float sensor_volt;
  float RS_air; //  Get the value of RS via in a clear air
  float R0;  // Get the value of R0 via in H2
  float sensorValue;
  int x;
  
  sensorValue = analogRead(A0);
  sensor_volt = sensorValue/1024*5.0;
  
  /*--- Get a average data by testing 100 times ---*/
  for(x = 0 ; x < 100 ; x++)
  {
        sensorValue = sensorValue + analogRead(A0);
  }
  sensorValue = sensorValue/100.0;
  /*-----------------------------------------------*/

  sensor_volt = sensorValue/1024*5.0;
  RS_air = (5.0-sensor_volt)/sensor_volt; // omit *RL
  R0 = RS_air/9.8; // The ratio of RS/R0 is 9.8 in a clear air from Graph (Found using WebPlotDigitizer)

  Serial.print("sensor_volt = ");
  Serial.print(sensor_volt);
  Serial.println("V");

  Serial.print("R0 = ");
  Serial.println(R0);
  delay(1000);
}
