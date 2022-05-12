#include <stdio.h>
int main(){
int c;
char ch;
c =getchar();
while(c != EOF){
if (c == '\t'){
ch = 't';
putchar(ch);
c = getchar();}
if (c == '\b'){
ch = 'b' ;
putchar(ch);
c = getchar();
}
if (c == '\\'){
ch = '\\';
putchar(ch);
c = getchar();
}
putchar(c);
c= getchar();
}
}
