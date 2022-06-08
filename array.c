#include <stdio.h>

int main(void)
{
	int val = 12567;
	char string[50] = "isaiah peter";
	sprintf (string, "The value of val is %d\n", val);
	printf("%s", string);
char string2[10] = "2569";
int val2;
printf("%d\n", sscanf(string2, "%d", &val2));
printf("The value in the string is %d\n", val2);


}
