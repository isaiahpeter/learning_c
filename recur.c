/* recur.c -- recursion  illustration */

#include <stdio.h>
void up_and_down(int);

int main(void)
{
	up_and_down(1);
	return 0;
}

void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n); // 1
if(n < 5)
up_and_down(n+1);
printf("Level %d: n location %p\n", n, &n); // 2
}

