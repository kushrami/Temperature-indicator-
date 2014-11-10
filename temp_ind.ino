float tempc;
int temppin=0;
int s[8]={3,4,5,10,11,12,13,1};
int k[8]={A4,A2,A1,A5,2,A3,6,0};
byte a=B0000000;
byte a1=B0000000;

int n;
void setup()
{
  for(int i=0;i<8;i++)
  {  
    pinMode(s[i],OUTPUT);
    digitalWrite(s[i],0);
    pinMode(k[i],OUTPUT);
    digitalWrite(k[i],0);
  }
  Serial.begin(9600);
}
void loop()
{
  tempc=analogRead(temppin);
  tempc=(5.0*tempc*100.0)/1024.0;
  Serial.print((byte)tempc);
  delay(1000);

  n=tempc;
  
  switch(n)
    {
    case 0:
      //ZERO(0)
      a=B00000100;
      //Serial.println(a);
      break;

    case 1:
      //ONE(1)
       a=B11011100;
      break;

    case 2:
      //TWO(2)
      a=B10000010;
      break;

    case 3:
      //THREE(3)
      a=B10010000;
      break;

    case 4:
      //FOUR(4)
      a=B01011000;
      break;

    case 5:
      //FIVE(5)
      a=B00110000;
      break;

    case 6:
      //SIX(6)
      a=B00100000;
      break;

    case 7:
      a=B10011100;
      break;

    case 8:
      //EIGHT(8)
      a=B00000000;
      break;

    case 9:
      //NINE(9)
      a=B00010000;
      break;
      
    case 10:
      //ZERO(0)
      a1=B11011100;
      a=B00000100;
      //Serial.println(a);
      break;

    case 11:
      //ONE(1)
      a1=B11011100;
       a=B11011100;
      break;

    case 12:
      //TWO(2)
      a1=B11011100;
      a=B10000010;
      break;

    case 13:
      //THREE(3)
      a1=B11011100;
      a=B10010000;
      break;

    case 14:
      //FOUR(4)
      a1=B11011100;
      a=B01011000;
      break;

    case 15:
      //FIVE(5)
      a1=B11011100;
      a=B00110000;
      break;

    case 16:
      //SIX(6)
      a1=B11011100;
      a=B00100000;
      break;

    case 17:
    a1=B11011100;
      a=B10011100;
      break;

    case 18:
      //EIGHT(8)
      a1=B11011100;
      a=B00000000;
      break;

    case 19:
      //NINE(9)
      a1=B11011100;
      a=B00010000;
      break;
    
    case 20:
      //ZERO(0)
      a1=B10000010;
      a=B00000100;
      //Serial.println(a);
      break;

    case 21:
      //ONE(1)
      a1=B10000010;
       a=B11011100;
      break;

    case 22:
      //TWO(2)
      a1=B10000010;
      a=B10000010;
      break;

    case 23:
      //THREE(3)
      a1=B10000010;
      a=B10010000;
      break;

    case 24:
      //FOUR(4)
      a1=B10000010;
      a=B01011000;
      break;

    case 25:
      //FIVE(5)
      a1=B10000010;
      a=B00110000;
      break;

    case 26:
    //26
      a1=B10000010;
      a=B00100000;
     break;
     
    case 27:
    //27
   a=B10011100;
   a1=B10000010;
      break;

    case 28:
      //EIGHT(8)
      a1=B10000010;
      a=B00000000;
      break;

    case 29:
      //NINE(9)
      a1=B10000010;
      a=B00010000;
      break;  
     
    case 30:
      //ZERO(0)
      a1=B10010000;
      a=B00000100;
      //Serial.println(a);
      break;

    case 31:
      //ONE(1)
      a1=B10010000;
       a=B11011100;
      break;

    case 32:
      //TWO(2)
      a1=B10010000;
      a=B10000010;
      break;

    case 33:
      //THREE(3)
      a1=B10010000;
      a=B10010000;
      break;

    case 34:
      //FOUR(4)
      a1=B10010000;
      a=B01011000;
      break;

    case 35:
      //FIVE(5)
      a1=B10010000;
      a=B00110000;
      break;

    case 36:
      //SIX(6)
      a1=B10010000;
      a=B00100000;
      break;

    case 37:
      a1=B10010000;
      a=B10011100;
      break;

    case 38:
      //EIGHT(8)
      a1=B10010000;
      a=B00000000;
      break;

    case 39:
      //NINE(9)
      a1=B10010000;
      a=B00010000;
      break; 
      
    }
    
    for(int i=0;i<8;i++)
 {
            digitalWrite(s[i],bitRead(a,7-i));
            digitalWrite(k[i],bitRead(a1,7-i));
            
 }
}
