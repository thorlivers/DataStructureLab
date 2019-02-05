#include <stdio.h>
#define MAX 5

int cirq[MAX];
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

int displayAt(int x, int y) {
  int i;
  for (int i=x; i!=y; i=(i+1)%MAX)
    printf("%d ", cirq[i]);
}

int main(int argc, char const *argv[]) {
  enqueue(4);
  enqueue(1);
  enqueue(2);
  enqueue(8);
  enqueue(10);
  displayAt(3,0);
  printf("\n");
  return 0;
}
