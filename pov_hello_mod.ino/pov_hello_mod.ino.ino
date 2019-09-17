int ledPins[9] = {2,3,4,5,6,7,8,9,10};

int n = 78;
char message[7][79] = {
"111000111000000011111111000000111000000000000111000000000000111111110000000011",
"111000111000000011111111000000111000000000000111000000000011100000111000000001",
"111000111000000011100000000000111000000000000111000000000111000000011100000011",
"111111111000000011111100000000111000000000000111000000000111000000011100000001",
"111000111000000011100000000000111000000000000111000000000011100000111000000011",
"111000111000000011111111000000111111110000000111111110000001110001110000000001",
"111000111000000011111111000000111111110000000111111110000000111111100000000011"
};

void setup()
{
 for (int led = 0; led < 9; led ++)
 {
    pinMode(ledPins[led], OUTPUT);
 }
 pinMode(12,INPUT);
}

void loop()
{
 for ( int col = 451; col >= 0; col--)
  {
    for ( int row = 0; row < 8; row++)
    {
      char state='0';
      if(col<=n)state = message[row][col];
      if(state=='0')
        digitalWrite(ledPins[row+1],LOW);
      else if(state=='1')
        digitalWrite(ledPins[row+1],HIGH);
      if (col%10==0){
        digitalWrite(ledPins[0],HIGH);
        digitalWrite(ledPins[8],LOW);
      }
      else if(col%4==0){
        digitalWrite(ledPins[0],LOW);
        digitalWrite(ledPins[8],HIGH);
      }
          
    }
    delayMicroseconds(400);
  }
 
}
void process()
{
   
   /*allOff();
   delayMicroseconds(600/11);*/
}
/*void allOff()
{
   for (int led = 0; led < 9; led ++)
 {
   
     digitalWrite(ledPins[led], LOW);
 }
}*/
