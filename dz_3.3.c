#include <stdio.h>

int main()
{
      int arr10[10] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10};
      int *arr = arr10;
      
      for(int i; i < 10; i++){
      printf("i = %d value = %d \n", i, *(arr + i) );
      
      }
}
