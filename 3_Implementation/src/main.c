#include<stdio.h>
int light;
void read_ldr()
{
unsigned int adc_value=0;
adc_value=ADC_Read(0);
light = 100 – adc_value/10.24;
if(light>=80) // SWITCH of the light when light is 80 percent
{
PORTB.F1=0;

}
else
{
PORTB.F1=1;
}
}
void main()
{
TRISB=0X00;
PORTB=0X00;
Adc_Init();

while (1)
{
read_ldr();
}
}