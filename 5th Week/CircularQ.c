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

int dequeue(){
  int x = -1;
  if (front == -1 || rear == -1){
      printf("Queue is full\n");
  } else{
      x = cirq[front];
      front = (front+1)%MAX;
  }
  return x;
}

int display() {
  int i;
  for (i=front; i!=rear; i = (i+1)%MAX) {
      printf("%d ", cirq[i]);
  }
  printf("%d ", cirq[i]);
}

int main(int argc, char const *argv[]) {
  enqueue(10);
  enqueue(20);
  enqueue(30);
  display();
  printf("\n");
  dequeue();
  display();



  printf("\n");
  return 0;
}
