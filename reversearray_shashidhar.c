#include <stdio.h>
 
int main() {
  int array[100], length, initial, temp, end;
  printf("enter the length of the array\n");
  scanf("%d", &length);
  end = length- 1;
  printf("enter the values\n");
  for (initial = 0; initial < length; initial++) {
    scanf("%d", &array[initial]);
  }
  for (intial = 0; initial < length/2; initial++) {
    temp        = array[initial];
    array[initial]   = array[end];
    array[end] = temp;
    end--;
  } 
  printf("Reversed array elements are:\n");
  for (intial = 0; initial < length; initial++) {
    printf("%d\n", array[initial]);
  }
  return 0;
}