#include <stdio.h>

int main(){
int iArray[5] = {1,2,3,4,5};
int *iPtr = iArray;
printf("\nAddress of pointer of %p\n",  iPtr);
printf("First address of array: %p\n", &iArray[0]);

printf("\nPointer points to: %d\n", *iPtr);
printf("First element of array contains: %d\n", iArray[0]);


return 0;
}
