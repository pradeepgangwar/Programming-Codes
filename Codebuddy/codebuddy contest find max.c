#include <stdio.h>

int main() {

    long long int i,j,k,n,m,a[250],temp,pos,new,x,p=-1,y,c;

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    { c=0;
        scanf("%lld",&m);
        for(j=0;j<m;j++)
        {
            scanf("%lld",&a[j]);
        }

    for (j=0;j<m;j++)
       { pos=j;temp=0;
         for(k=j;k<m;k++)               //sorting in descending order
           {
             if(a[k]>temp)
               {temp=a[k];
                  pos=k;}
            }
      new=a[j];
      a[j]=a[pos];
     a[pos]=new;
    }
    /*for(j=0;j<m;j++)
        printf("%d,",a[j]);
    printf("\n");*/
      x=0;y=0;
      for(j=1;j<m;j++)
      {
          for(k=j+1;k<m;k++)
          {
              if (a[y]==a[j]+a[k])
                {printf("%lld\n",a[y]);x=1;c=1;
                break;}
          }
          if(x==1)
            break;

      if(x!=1)
        {y++;}
    }
    if(c!=1)
    printf("%d\n",-1);}
	return 0;
}
