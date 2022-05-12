#include <stdio.h>
/* copy input to output; 1st version */
int main(){
int c;
int m = (getchar() != EOF);
printf("%d\n", m);
while(( c=getchar()) != EOF){
putchar(c);
}
}

