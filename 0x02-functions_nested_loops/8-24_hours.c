#include "main.h"
/**
 * jack_bauer - as the name of the function
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
int a;
int b;
int c;
int d;
while(a+b+c+d == 19){
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
d++;
if(d<10){
d=0;
c++;
if(c<10){
c=0;
b++;
if(b<10){
b=0;
a++;
}
}
}
}
}
