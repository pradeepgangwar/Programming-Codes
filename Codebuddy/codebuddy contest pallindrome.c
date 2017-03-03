#include<stdio.h>
#include<string.h>
int main()
{
	long long int n,a[26]={0},d=0,i,j,l=0;
        char s[10004]={0};
 	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
 	     scanf("%s",s);
	     l=strlen(s);
             for(j=0;j<26;j++)
                a[j]=0;
             for(j=0;j<l;j++)
			 {
				  if(s[j]=='a')
					a[0]++;
				  else if(s[j]=='b')
					a[1]++;
				  else if(s[j]=='c')
					a[2]++;
				  else if(s[j]=='d')
					a[3]++;
				  else if(s[j]=='e')
					a[4]++;
				  else if(s[j]=='f')
					a[5]++;
				  else if(s[j]=='g')
					a[6]++;
				  else if(s[j]=='h')
					a[7]++;
				  else if(s[j]=='i')
					a[8]++;
				  else if(s[j]=='j')
					a[9]++;
				  else if(s[j]=='k')
					a[10]++;
				  else if(s[j]=='l')
					a[11]++;
				  else if(s[j]=='m')
					a[12]++;
				  else if(s[j]=='n')
					a[13]++;
				  else if(s[j]=='o')
					a[14]++;
				  else if(s[j]=='p')
					a[15]++;
				  else if(s[j]=='q')
					a[16]++;
				  else if(s[j]=='r')
					a[17]++;
				  else if(s[j]=='s')
					a[18]++;
				  else if(s[j]=='t')
					a[19]++;
		 	  	  else if(s[j]=='u')
					a[20]++;
				  else if(s[j]=='v')
					a[21]++;
				  else if(s[j]=='w')
					a[22]++;
				  else if(s[j]=='x')
					a[23]++;
				  else if(s[j]=='y')
					a[24]++;
				  else if(s[j]=='z')
					a[25]++;
		      }
              d=0;
              for(j=0;j<26;j++)
                 {
                     if(a[j]%2!=0)
                        d++;
                 }
              printf("%lld\n",l-d+1);
    }
return 0;
}
