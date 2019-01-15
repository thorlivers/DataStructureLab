#include "stdio.h"
int i, x[5], sum;
main(){
  sum = 0;
  for (i=0; i<=4; i++){
    scanf("%d",&x[i]);
    sum = sum + x[i];
  }
    printf("Sum = %d", sum);
}
