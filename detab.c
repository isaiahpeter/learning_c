#include <stdio.h>
int main(){
int c;
char ch = ' ';
while((c =getchar()) != EOF){
if ( c == '\t'){
for(int i = 0; i < 3; i++)
putchar(ch);
}
else {

putchar(c);
}

}
putchar(c);
}
