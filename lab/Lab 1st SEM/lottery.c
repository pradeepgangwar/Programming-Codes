#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r;
    int a;
    srand(time(NULL));
    r = rand()%100;
    scanf("%d",&a);
    if(a==r)
{   
    printf("You Won!");
}   
    return 0;
}
