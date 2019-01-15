#include "stdio.h"
int i, x[5], sum;
main(){
  sum = 0;
  i = 0;
  while(i <= 4){
    scanf("%d",&x[i]);
    sum = sum + x[i];
    i = i + 1;
  }
    printf("Sum = %d", sum);
}
