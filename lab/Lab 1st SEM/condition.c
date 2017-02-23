#include <stdio.h>
int main()
{   char a,b,A,B;
    float c,d,e,f;
    printf("Enter 'A' to change celcius to fahrenheit and enter 'B' to change from fahrenheit to celcius:\n");
    scanf("%s",&a);
  
  if (a=='A')
{

       printf("Here we will change the value of temperature from celcius to fahrenheit:\n\n");
       printf("Enter the value of temp in Celcius:");
       scanf("%f",&c);
       d= (c*9)/5 + 32;
       printf("Here is the value of temperature in fahrenheit:");
       printf("%f\n\n\n",d);
       return 0;
}

   if (a=='B')
{
      printf("Here we will chnage the temperature value from fahrenheit to celcius:\n\n");
      printf("Enter the value in fahrenheit:");
      scanf("%f",&e);
      f= (e-32)*5/9;
      printf("Here is the value of temperature in celcius:");
      printf("%f\n\n\n",f);
      return 0;
}

}
