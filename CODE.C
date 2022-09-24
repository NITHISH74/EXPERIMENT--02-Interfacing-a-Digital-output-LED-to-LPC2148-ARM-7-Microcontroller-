#include <lpc214x.h>
void delay_ms(unsigned int count)
{
	unsigned int j=0,i=0;
	{
	for(j=0;j<count;j++)
	{
		for(i=0;i<3000;i++);
	}
}

}

int main()
{
	PINSEL2 = 0x000000;  
	IO1DIR = 0xffffffff;
	
	while(1)
	{
		IO1SET = 0xffffffff;
		  delay_ms(1000);
		
		IO1CLR = 0xffffffff;
			delay_ms(1000);	
		
}
}