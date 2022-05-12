#include <stdio.h>

/* a program to copy its input to its output, replacing each string of one or more blanks by a single blank */
int main(){
int c ;
c = getchar();
while(c != EOF){

if (c == ' '){
c = ' ';
c = getchar();
}

putchar(c);
c = getchar();
}
}
