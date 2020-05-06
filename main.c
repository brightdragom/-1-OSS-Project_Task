#include<stdio.h>

void plus(int x, int y);
void minus(int x, int y);
void multiplication(int x, int y);
void divide(int x, int y);

void main(){
  int x = 10;
  int y = 20;
  
  plus(x, y);
  minus(x, y);
  multiplication(x, y);
  divide(x, y);
  
  }
  
void plus(int x, int y){
  printf("x+y = %d", x+y);
}

void minus(int x, int y){
  printf("x-y = %d", x-y);
}

void multiplication(int x, int y){
   printf("x*y = %d", x*y);
}

}

void divide(int x, int y){
  float div = 0;
  div = (float)x / (float)y;
  
  printf("x / y = %0.2f\n", div);
}
  
