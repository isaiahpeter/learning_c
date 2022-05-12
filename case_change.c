#include <stdio.h>

int main(){
void uppercase(char l );
char ch;
printf("Please enter a character \n");
scanf("%c", &ch);

uppercase(ch);
}


void uppercase( char m){
int ch = m;
ch -= 32;
printf("Uppercase  %c is %c \n",m,  ch);
}
