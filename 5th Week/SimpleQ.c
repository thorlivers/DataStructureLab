#include <stdio.h>
#define MAX 5

int simpleq[MAX];
int rear = -1;
int front = -1;

void enqueue(int x) {
  if (rear == MAX-1) {
    printf("Q is full\n");
  } else {
    if (front == -1)
      front = 0;

  rear = rear+1;
  simpleq[rear] = x;
  }
}

int dequeue(){
  int x = -1;
  if(front == -1 || rear == -1){
    printf("Q is empty \n");
  } else {
    x = simpleq[front];
    front = front+1;
  }
  return x;
}

int display() {
  for (int i=front; i<= rear; i++)
    printf("%d ", simpleq[i]);
}

int main(int argc, char const *argv[]) {
  enqueue(10);
  enqueue(20);
  enqueue(30);
  display();
  printf("\ndequeue remove:\n");
  dequeue();
  display();
  return 0;
}
