#include <stdio.h>
#include <math.h>

int main(){
   int j;
   int n, i, isprime, limit;
   for(n=2; n<=100; n++){
      isprime = 1;
      limit=sqrt (n);
      for (i=2;i <= limit;i++){
      if(n % i==0){
      isprime = 0;
      break;
      }
      }
      if (isprime==1){
      printf("%d " ,n);
      }
      }
      return 0;
      }

