#include <stdio.h>

int SUVO(char s[],int j,int t)
{
	if(s[j+1]==85||s[j+1]==86)
	{
	    t++;
        printf("%d \n",1);
	   return SUVO(s,j+1,t);
	}
	else if(s[j+1]==79 && t==2)
	{
	    printf("%d\n",2);
	 	return 1;
	}
	else{printf("%d\n",9);
		return 0;}
}

int SUVOJIT(char s[],int j,int t)
{
	if(s[j+1]==85||s[j+1]==86||s[j+1]==79||s[j+1]==74||s[j+1]==73)
	{
	    t++;
        printf("%d\n",3);
	 	return SUVOJIT(s,j+1,t);
	}
	else if(s[j+1]==84&&t==5)
	{
	    printf("%d\n",4);
	 	return 1;
	}
	else{ printf("%d\n",8);
		return 0;}
}

int main()
{
    char s[153],c[5]={'S','U','V','O','\0'},d[8]={'S','U','V','O','J','I','T','\0'};
    int n,i,x=0,y=0,j,e=0;
    scanf("%d",&n);
    while(n--)
    {
        x=0;y=0;
    	scanf("%s",s);
    	for(j=0;s[j]!='\0';j++)
    	{
    		if(s[j]==83)
    		{
    		    printf("%d %d\n",5,j);
    		    y+=SUVOJIT(s,j,0);
    		   printf("%d %d\n",6,j);
    		    e=SUVOJIT(s,j,0);

    		    if(e==0){
                        printf("%d %d\n",7,j);
                    x+=SUVO(s,j,0);}
                e=0;
                printf("%s = %d, %s = %d\n",c,x,d,y);
    		}
    	}

    	printf("\n");
    }
}
