
void Tank(int dis){
  
  Serial.println("Entered Function Tank ");
  
  int count = 0;
  dis = Ultra();
  
  if(dis <= 20){
    goBackward(2000, 255);
    delay(2000);
    rotateRight(1000, 255);
    delay(2000);
    dis = Ultra();
    count++;
    //distance = Ultra();
  }
  else{
    goForward(1000, 255);
    delay(2000);
    dis = Ultra();
    count++;
  }
  if(count == 5)
  {
    CleanAir();
    count++;
  }
  if(count == 7)
  {
    LFlame();
    count = 0;
  }
  //rotateLeft(1000, 255);
  Serial.println("Return to Loop as Fuction Tank has been run ");
}
