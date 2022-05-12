#include <stdio.h>
/* a program to count newlines tabs blanks */

int main(){
int c;
int blanks=0;
int  newlines = 0;
int tabs =0;
while((c=getchar()) != EOF){
if (c == '\n')
{ ++newlines;}
if ( c == '\t'){
++tabs;
}
if (c == ' '){
++blanks;
}
}
printf("newlines: %d, tabs: %d, blanks: %d\n", newlines, tabs, blanks);
}
