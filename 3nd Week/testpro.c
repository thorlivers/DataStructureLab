#include "stdio.h"
#include "stdlib.h"
#define  MAX_ROOM 2
#define  MAX_STD 5

float proScore[MAX_ROOM][MAX_STD] = { {10, 14, 13, 18, 20},
                                      {13, 17, 15, 19, 8}
};

float findAvg();
float findAvgRoom(int room);
float findMax();

int main(int argc, char *argv[]){
    int row, col;
    printf("Data in Array is Under here ...\n");
    for (row = 0; row < MAX_ROOM; row++) {
    printf("\n");
      for (col = 0; col < MAX_STD; col++) {
          printf("%.2f ", proScore[row][col]);

      }
    }

    printf("\n________________________________\n");

    float avg = findAvg();
    printf("Average All Room = %.2f\n",avg);

    avg = findAvgRoom(0);
    printf("Average Room 1 = %.2f\n",avg);


    printf("Average Room 2 = %.2f\n",findAvgRoom(1));
    printf("________________________________\n");
    findMax();
    return 0;
}

float findAvg() {
    float sum = 0;
    int row, col;
    for (row = 0; row < MAX_ROOM; row++){
      for (col = 0; col < MAX_STD; col++){
        sum = sum + proScore[row][col];
      }
    }
    float avg = sum/((float)(MAX_ROOM*MAX_STD));
    return avg;
}

float findAvgRoom(int room) {
    float sum = 0;
    int col;
      for (col = 0; col < MAX_STD; col++){
        sum = sum + proScore[room][col];
      }
    float avgRoom = sum / MAX_STD;
    return avgRoom;
}

float findMax(){
  float max = proScore[0][0];
  int maxRow = 0;
  int maxCol = 0;
  int row, col;
  for (row = 0; row < MAX_ROOM; row++){
    for (col = 0; col < MAX_STD; col++){
      if (max < proScore[row][col]) {
          max = proScore[row][col];
          maxCol = col;
          maxRow = row;
      }
    }

  }
  printf("Student Max Score is %.2f\n", max);
  printf("Student Number is %d\n", maxCol+1);
  printf("Student Room is %d\n", maxRow+1);

}
