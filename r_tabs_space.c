#include <stdio.h>

int main(){
int c;
while((c=getchar()) != EOF){
if ( c != ' ' && c  != '\t')
putchar(c);
}
 if (c !=  ' ' && c != '\n')
{
putchar(c);
}
//putchar(c);
return 0;
}

