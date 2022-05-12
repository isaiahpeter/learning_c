#include <stdio.h>
#include <string.h>
#define MAXLINE 1000 

int main(){
char c[MAXLINE];
void reverse(char m[] );
while((fgets(c, MAXLINE,stdin)) != 0)
//fgets(c, MAXLINE, stdin);  
reverse(c);
printf("\n");
return 0;

}

void reverse(char s[]){
s[MAXLINE];
int i ;
for(i= strlen(s); i >= 0; --i){
printf("%c", s[i]);
}
}
