#include "stdio.h"

int main(){
  char text[2][25+1] = {"Ubonratchathani","Khon Kaen"};
  float wharr[2][4] = { {40, 50, 45.5, 51.1},
                        {134, 50, 33.1, 34.1}
                      };
  float wharr2[4][2] = { {35,32},
                         {85,42},
                         {30,56},
                         {23,89}
                        };
  for (int row = 0; row < 2; row++) {
    printf("\n");
    for (int col = 0; col < 4; col++) {
      printf("%.2f ", wharr[row][col]);
    }
  }
}
