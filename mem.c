#include <stdio.h>
#include <stdlib.h>

int main(){
	int *numbers;
	int x;
	printf("%p\n", numbers);
	numbers = (int *) malloc(5 * sizeof(int));
	printf("%p\n", numbers);
	if (numbers == NULL)
	return;
	numbers[0]= 100;
	numbers[1] = 200;
	numbers[2] = 300;
	numbers[3] = 400;
	numbers[4] = 500;
	for(x = 0; x <5; x++)
	printf("numbers[%d] = %d , %p\n", x, numbers[x], numbers[x]);
free(numbers);
printf("%p", numbers);
}
