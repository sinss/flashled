int num = 0;
int total = 0;
int isNegative =  false;
void setup()
{
  Serial.begin(9600);     
}
void loop() 
{
  total = 0;
 while (Serial.available() > 0) 
 {
    num = Serial.read();
    Serial.println("I received: ");
    if (num == 45) {
      isNegative = true;
    } else {
      total = total * 10 + num - '0';
    }    
  }
  if (total != 0) {
    Serial.print("total = ");
    if (isNegative == true) {
      Serial.print('-');
    }
    Serial.println(total);
  }
  delay(100);
}

