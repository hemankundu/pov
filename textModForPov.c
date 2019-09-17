#include<stdio.h>
#include<stdlib.h>
//string magnify for POV
capa(int line)
{
	switch(line){
			case 1: printf("     111     "); break;
			case 2: printf("   111111    "); break;
			case 3: printf("  11    11   "); break;
			case 4: printf(" 111    111  "); break;
			case 5: case 6: printf(" 1111111111  "); break;
			case 7: case 8: case 9: printf(" 111    111  "); break;
	}
	return;
}
capb(int line)
{
	switch(line){
			case 1: case 9: printf(" 1111111111  "); break;
			case 2: case 8: printf(" 11111111111 "); break;
			case 3: case 7: printf(" 11       11 "); break;
			case 4: case 6: printf(" 11      111 "); break;
			case 5: printf(" 1111111111  "); break;
	}
	return;
}
capc(int line)
{
	switch(line){
			case 1: case 9: printf("   11111111  "); break;
			case 2: case 8: printf(" 11111111111 "); break;
			case 3: case 4: case 5: case 6: case 7: printf(" 111         "); break;
	}
	return;
}
capd(int line)
{
	switch(line){
			case 1: case 9: printf(" 1111111111  "); break;
			case 2: case 8: printf(" 11111111111 "); break;
			case 3: case 4: case 5: case 6: case 7: printf(" 11      111 "); break;
	}
	return;
}
cape(int line)
{
	switch(line){
			case 1: case 2: case 8: case 9: printf(" 11111111111 "); break;
			case 3: case 7: printf(" 111         "); break;
			case 4: case 5: case 6: printf(" 1111111111  "); break;
	}
	return;
}
capf(int line)
{
	switch(line){
			case 1: case 2: case 4: case 5: printf(" 11111111111 "); break;
			case 3: case 6: case 7: case 8: case 9: printf(" 1111        "); break;
	}
	return;
}
capg(int line)
{
	switch(line){
			case 1: case 9: printf(" 1111111111  "); break;
			case 2: case 8: printf(" 11111111111 "); break;
			case 3: printf(" 11          "); break;
			case 6: case 7: printf(" 11      111 "); break;
			case 4: case 5: printf(" 11   111111 "); break;
	}
	return;
}
caph(int line)
{
	switch(line){
			case 1: case 2: case 3: case 6: case 7: case 8: case 9: printf(" 111     111 "); break;
			case 4: case 5: printf(" 11111111111 "); break;
	}
	return;
}
capi(int line)
{
	switch(line){
			case 1: case 2: case 8: case 9: printf("  111111111  "); break;
			case 3: case 4: case 5: case 6: case 7: printf("     111     "); break;
	}
	return;
}
capj(int line)
{
	switch(line){
			case 1: case 2: printf(" 11111111111 "); break;
			case 3: case 4: case 5: printf("       111   "); break;
			case 6: case 7: printf(" 111   111   "); break;
			case 8: printf(" 111111111   "); break;
			case 9: printf("  1111111    "); break;
	}
	return;
}
capk(int line)
{
	switch(line){
			case 1: case 8: case 9: printf(" 111     111 "); break;
			case 2: case 7: printf(" 111    111  "); break;
			case 3: case 6: printf(" 111   111   "); break;
			case 4: case 5: printf(" 11111111    "); break;
	}
	return;
}
capl(int line)
{
	switch(line){
			case 1: case 2: case 3: case 4: case 5: case 6: case 7: printf(" 111         "); break;
			case 8: case 9: printf(" 11111111111 "); break;
	}
	return;
}
capm(int line)
{
	switch(line){
			case 1: printf(" 1111   1111 "); break;
			case 2: printf(" 11111 11111 "); break;
			case 3: printf(" 111 111 111 "); break;
			case 4: printf(" 111  1  111 "); break;
			case 5: case 6: case 7: case 8: case 9: printf(" 111     111 "); break;
	}
	return;
}
capn(int line)
{
	switch(line){
			case 1: printf(" 1111    111 "); break;
			case 2: case 3: printf(" 11111   111 "); break;
			case 4: printf(" 111 11  111 "); break;
			case 5: printf(" 111  11 111 "); break;
			case 6: printf(" 111  111111 "); break; 
			case 7: case 8: printf(" 111   11111 "); break;
			case 9: printf(" 111    1111 "); break;
	}
	return;
}
capo(int line)
{
	switch(line){
			case 1: case 9: printf("    11111    "); break;
			case 2: case 8: printf("  111111111  "); break;
			case 3: case 4: case 5: case 6: case 7: printf(" 111     111 "); break;
	}
	return;
}
capp(int line)
{
	switch(line){
			case 1: case 6: printf(" 1111111111  "); break;
			case 2: case 5: printf(" 11111111111 "); break;
			case 3: case 4: printf(" 111     111 "); break;
			case 7: case 8: case 9: printf(" 111         "); break;
	}
	return;
}
capq(int line)
{
	switch(line){
			case 1: printf("    11111    "); break;
			case 2: case 8: printf("  111111111  "); break;
			case 3: case 4: case 5: printf(" 111     111 "); break;
			case 6: printf(" 111 11  111 "); break;
			case 7: printf(" 111  11 111 "); break;
			case 9: printf("    1111  11 "); break;
	}
	return;
}
capr(int line)
{
	switch(line){
			case 1: case 6: printf(" 1111111111  "); break;
			case 2: case 5: printf(" 11111111111 "); break;
			case 3: case 4: printf(" 111     111 "); break;
			case 7: printf(" 111 1111    "); break;
			case 8: printf(" 111  1111   "); break;
			case 9: printf(" 111    1111 "); break;
	}
	return;
}
caps(int line)
{
	switch(line){
			case 1: case 9: printf("   1111111   "); break;
			case 2: case 8: printf(" 11111111111 "); break;
			case 3: printf(" 1111    111 "); break;
			case 4: printf("  1111       "); break;
			case 5: printf("    111111   "); break;
			case 6: printf("       1111  "); break;
			case 7: printf(" 111    1111 "); break;
	}
	return;
}
capt(int line)
{
	switch(line){
			case 1: case 2: printf(" 11111111111 "); break;
			case 3: case 4: case 5:case 6:case 7:case 8:case 9: printf("     111     "); break;
	}
	return;
}
capu(int line)
{
	switch(line){
			case 1: case 2: case 3: case 4: case 5: case 6: printf(" 111     111 "); break;
			case 7: printf(" 111     111 "); break;
			case 8: printf("  111   111  "); break;
			case 9: printf("   1111111   "); break;
	}
	return;
}
capv(int line)
{
	switch(line){
			case 1: case 2: case 3: case 4: case 5: case 6: printf(" 111     111 "); break;
			case 7: printf("  111   111  "); break;
			case 8: printf("   1111111   "); break;
			case 9: printf("     111     "); break;
	}
	return;
}
capw(int line)
{
	switch(line){
			case 9: printf(" 1111   1111 "); break;
			case 8: printf(" 11111 11111 "); break;
			case 7: printf(" 111 111 111 "); break;
			case 6: printf(" 111  1  111 "); break;
			case 5: case 4: case 3: case 2: case 1: printf(" 111     111 "); break;
	}
	return;
}
capx(int line)
{
	switch(line){
			case 1: case 9: printf(" 1111   1111 "); break;
			case 2: case 8: printf("  111   111  "); break;
			case 5: printf("     111     "); break;
			case 3: case 7: printf("   111 111   "); break;
			case 4: case 6: printf("    11111    "); break;
	}
	return;
}
capy(int line)
{
	switch(line){
			case 1: case 2: printf(" 111     111 "); break;
			case 3: printf("  111   111  "); break;
			case 4: printf("   1111111   "); break;
			case 5: case 6: case 7: case 8: case 9: printf("     111     "); break;
	}
	return;
}
capz(int line)
{
	switch(line){
			case 1: case 9: printf(" 11111111111 "); break;
			case 2: case 8: printf("  111111111  "); break;
			case 7: printf("  1111       "); break;
			case 6: printf("    111      "); break;
			case 5: printf("     111     "); break;
			case 4: printf("      111    "); break;
			case 3: printf("       1111  "); break;
	}
	return;
}
space()
{
	printf("       ");
	return;
}
comma(int line)
{
	switch(line){
			case 1: case 2: case 3: case 4: printf("        "); break;
			case 5: case 6: printf("   1111 "); break;
			case 7: case 8: printf("    111 "); break;
			case 9: printf("    11  "); break;
	}
	return;
}
dot(int line)
{
	switch(line){
			case 1: case 2: case 3: case 4: case 5: printf("       "); break;
			case 6: case 9: printf("  111  "); break;
			case 7: case 8: printf(" 11111 "); break;
	}
	return;
}
col(int line)
{
	switch(line){
			case 5: printf("       "); break;
			case 1: case 4: case 6: case 9: printf("  111  "); break;
			case 2: case 3: case 7: case 8: printf(" 11111 "); break;
	}
	return;
}

int main()
{
	char text[25],c;
	int  line, i,textLen;
	printf("Supported charecters: (|A to Z | , | . | : |)\nEnter Your Text: ");
	gets(text);
	for (i = 0; text[i] != '\0'; i++);
	textLen = i;
		for(line=1;line<=9;line++){
			printf("\"");
			for(i=0;i<textLen;i++){
				c=text[i];
				if(c=='a'||c=='A') capa(line);
				else if(c=='b'||c=='B') capb(line);
				else if(c=='c'||c=='C') capc(line);
				else if(c=='d'||c=='D') capd(line);
				else if(c=='e'||c=='E') cape(line);
				else if(c=='f'||c=='F') capf(line);
				else if(c=='g'||c=='G') capg(line);
				else if(c=='h'||c=='H') caph(line);
				else if(c=='i'||c=='I') capi(line);
				else if(c=='j'||c=='J') capj(line);
				else if(c=='k'||c=='K') capk(line);
				else if(c=='l'||c=='L') capl(line);
				else if(c=='m'||c=='M') capm(line);
				else if(c=='n'||c=='N') capn(line);
				else if(c=='o'||c=='O') capo(line);
				else if(c=='p'||c=='P') capp(line);
				else if(c=='q'||c=='Q') capq(line);
				else if(c=='r'||c=='R') capr(line);
				else if(c=='s'||c=='S') caps(line);
				else if(c=='t'||c=='T') capt(line);
				else if(c=='u'||c=='U') capu(line);
				else if(c=='v'||c=='V') capv(line);
				else if(c=='w'||c=='W') capw(line);
				else if(c=='x'||c=='X') capx(line);
				else if(c=='y'||c=='Y') capy(line);
				else if(c=='z'||c=='Z') capz(line);
				else if(c==' ') space();
				else if(c==',') comma(line);
				else if(c=='.') dot(line);
				else if(c==':') col(line);
				printf("  ");
			}
			printf("\",");
			printf("\n");
		}
	printf("Don't forget to copy...and replace white spaces with zero");
	getchar();
	printf("Press any key to exit..");
	getchar();
	return 0;
}
