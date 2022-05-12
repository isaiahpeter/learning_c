#include <stdio.h>

int main(){
char ch;
FILE *in = fopen("reverse.c", "r");
int lineNo = 1;
printf("%2d. ", lineNo);
while((ch=getc(in)) != EOF && ch != '\0'){
putchar(ch);
if (ch == '\n'){
lineNo++;
printf("%2d. ", lineNo);
}
}
fclose(in);
}
