#include <stdio.h>

int main() {

      long long int n,a,b,i,j,t;
      scanf("%lld",&n);
      for(j=0;j<n;j++)
      {
          scanf("%lld %lld",&a,&b);
          t=a/b;
          printf("%lld\n",b*(t+1));
      }

	return 0;
}
