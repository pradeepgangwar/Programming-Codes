#include<stdio.h>
int main()
{

    int i,k,j,l,r,s,max=0,n,pos=0,a[100],b[100],m=0,mean,sum=0,t,mid,new,temp=0,low,high,loc;
    printf("Enter the numbers of elements you want to enter=");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
                m+=1;
        }
        b[i]=m;
        m=0;
    }
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            if(b[l]>=max)
            {max=b[l];
             pos=l;}
        }
    }
    printf("\n");
    printf("%d is the mode of data provided\n",a[pos]);

    
   
   

for (r=0;r<n;r++)
{ loc=r;temp=0;
  for(s=r;s<n;s++)
    {
     if(a[s]>temp)
       {temp=a[s];
         loc=s;}
    }
   new=a[r];
   a[r]=a[loc];
   a[loc]=new;
}

 low=a[0];  high=a[n-1];
 mid=(n/2);
 printf("%d is the median\n",a[mid]);


 for(t=0;t<n;t++)
  sum= sum+a[t];
 mean= sum/n;
 printf("%d is the mean of data\n",mean);
 
 
    return 0;
}
