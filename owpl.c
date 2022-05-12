#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* print one word per line in input */

int main(){
int c, nl, nw, state;
nl = nw = 0;
while(( c= getchar()) != EOF){
if ( c == ' ' || c == '\n')
c = '\n';
putchar(c);
if ( c == ' ' || c == '\n' || c == '\t')
state = OUT;

else if (state == OUT){
state= IN;
++nw;
}
}
printf("new word: %d\n", nw);
}
