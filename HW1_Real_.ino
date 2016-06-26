const int led[] ={3,9,10,11};
int varNums;
int ledNums;
const int brightness[14][4]=
  {{250,  0,  0,  0},      
   {100,250,  0,  0},
   { 50,100,250,  0},
   {  5, 50,100,250},
   {  0,  5, 50,100},
   {  0,  0,  5, 50},
   {  0,  0,  0,  5},
   {0,  0,  0,  255},      
   {0,0,  250,  100},
   { 0,250,100,  50},
   {  250, 100,50,5},
   {  100,  59, 5,0},
   {  50,  5,  0, 0},
   {  5,  0,  0,  0}};
const int brightness2[7][4]=
  {{0,  0,  0,  255},      
   {0,0,  250,  100},
   { 0,250,100,  50},
   {  250, 100,50,5},
   {  100,  59, 5,0},
   {  50,  5,  0, 0},
   {  5,  0,  0,  0}  };
void setup()  
{ 
} 
void loop()  
{ 
    for(varNums=0;varNums<14;varNums++)
    {
      for(ledNums=0;ledNums<4;ledNums++)
        analogWrite(led[ledNums],brightness[varNums][ledNums]);  
      delay(100);    
    }
//    for(varNums=6;varNums>=0;varNums--)
//    {
//      for(ledNums=0;ledNums<4;ledNums++)
//        analogWrite(led[ledNums],brightness2[varNums][ledNums]);  
//      delay(100);    
//    }
}
