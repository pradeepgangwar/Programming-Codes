#include <stdio.h>
main()
{
      float a,b,c,d;
      printf("Here we will change the value of temperature from celcius to fahrenheit:\n\n");
      printf("Enter the value of temp in Celcius:");
      scanf("%f",&a);
      b= (a*9)/5 + 32;
      printf("Here is the value of temperature in fahrenheit:");
      printf("%f\n\n\n",b);
      
      printf("Here we will chnage the temperature value from fahrenheit to celcius:\n\n");
      printf("Enter the value in fahrenheit:");
      scanf("%f",&c);
      d= (c-32)*5/9;
      printf("Here is the value of temperature in celcius:");
      printf("%f\n\n\n",d);
      return 0;
}
