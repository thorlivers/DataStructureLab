#include <stdio.h>
#define MAX 10

int cirq[MAX];
int input[MAX]; //input from keyboard
int rear = -1;
int front = -1;

void enqueue(int x) {
  if ( ( (rear+1)%MAX) == front){
      printf("Queue is full, can not add %d\n",x);
      return;
  } else {
      if (front == -1)
          front = rear = 0;
      else
          rear = (rear+1)%MAX;
      cirq[rear] = x;
  }
}

int display() {
  for (int i=front; i<= rear; i++)
    printf("%d ", cirq[i]);
}

void func2 (int len) {
  int i;
  for (i=0; i<len; i++){
    if (input[i]%2==0) {
      enqueue(input[i]);
    }
  }
  for (i=0; i<len; i++){
    if (input[i]%2!=0) {
      enqueue(input[i]);
    }
  }
}

int main(int argc, char const *argv[]) {
  int i;
  int len;
  printf("Enter Number of Data\n");
  scanf("%d",&len);
  printf("Enter Data\n");
  for (i=0; i<len; i++) {
    scanf("%d",&input[i]);
  }
  func2(len);

  display();
  return 0;
}
