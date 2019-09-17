int ledPins[9] = {2,3,4,5,6,7,8,9,10};

int n = 83;
char message[7][84] = {
"11100011100000001111111100000011100000000000011100000000000011111111000000001100000",
"11100011100000001111111100000011100000000000011100000000001110000011100000000100000",
"11100011100000001110000000000011100000000000011100000000011100000001110000001100000",
"11111111100000001111110000000011100000000000011100000000011100000001110000000100000",
"11100011100000001110000000000011100000000000011100000000001110000011100000001100000",
"11100011100000001111111100000011111111000000011111111000000111000111000000000100000",
"11100011100000001111111100000011111111000000011111111000000011111110000000001100000"
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
  for ( int col = n-1; col >= 0; col--)
  {
    for ( int row = 0; row < 8; row++)
    {
      //char state = message[col][row];
      if(message[row][col]=='0')
        digitalWrite(ledPins[row+1],LOW);
      else if(message[row][col]=='1')
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
    delayMicroseconds(600);
  }
   allOff();
   delayMicroseconds(600/11);
}
void allOff()
{
   for (int led = 0; led < 9; led ++)
 {
   
     digitalWrite(ledPins[led], LOW);
 }
}
