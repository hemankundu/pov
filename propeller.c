//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@//
//   This programe for POV massage display   //
//            For Active LOW				 //
//			   Anticlockwise				 //
//			  Using Atmega16				 //
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@//

#include <avr/io.h>
#include <avr/delay.h>
#define F_CPU 8000000

#define led PORTA

unsigned int del=5; //use for delay function

void delay(void)
{

_delay_ms(del/80);

}

void display(unsigned char car);

void main()
{
DDRA=0xff; //setting the output port

while(1)
{
display('H'); //display H
display('S'); //display S
display('E'); //display E
display('J'); //display J
display('I'); //display I
display('R'); //display R
display('B'); //display B

_delay_ms(80); //delay after ending the name

}

}

void display(unsigned char car)
{
{
switch(car)
{
case 'B' : // letter B

led=0x93; delay( );

led=0x6D; delay( );

led=0x6D; delay( );

led=0x6D; delay( );

led=0x01; delay( );

led=0xff; delay( );// to make one column gap between letters

break;

case 'R' : // display R

led=0x8D; delay( );

led=0x6B; delay( );

led=0x67; delay( );

led=0x6F; delay( );

led=0x01; delay( );

led=0xff; delay( );// to make one column gap between letters

break;

case 'I' : // letter I


led=0x7D; delay( );

led=0x7D; delay( );

led=0x01; delay( );

led=0x7D; delay( );

led=0x7D; delay( );

led=0xff; delay( );// to make one column gap between letters

break;

case 'J' : // letter J


led=0x7F; delay( );

led=0x7F; delay( );

led=0x01; delay( );

led=0x7D; delay( );

led=0x71; delay( );

led=0xff; delay( );// to make one column gap between letters

break;

case 'E' : // letter E


led=0x6D; delay( );

led=0x6D; delay( );

led=0x6D; delay( );

led=0x6D; delay( );

led=0x01; delay( );

led=0xff; delay( );// to make one column gap between letters

break;

case 'S' : // letter S


led=0x61; delay( );

led=0x6D; delay( );

led=0x6D; delay( );

led=0x6D; delay( );

led=0x0D; delay( );

led=0xff; delay( );// to make one column gap between letters

break;

case 'H' : // letter H


led=0x01; delay( );

led=0xEF; delay( );

led=0xEF; delay( );

led=0xEF; delay( );

led=0x01; delay( );

led=0xff; delay( );// to make one column gap between letters

break;


}
}
} // END

