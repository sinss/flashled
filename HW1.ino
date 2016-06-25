int led[] = {10,11,12,13};
int i;
int j=0;
bool reverse = false;
void setup() {    
  for(i=0;i<4;i++)
  {  
    pinMode(led[i], OUTPUT); 
  }    
}

void loop() {
  for(i=0;i<4;i++)
  {
    digitalWrite(led[i],LOW);
  }  
  digitalWrite(led[j], HIGH); 
  delay(200);
  if (reverse == true) {
    j--;
  } else {
    j++;
  }
  if(j==3)
    reverse = true;
  else if (j== 0) {
    reverse = false;
  }
}
