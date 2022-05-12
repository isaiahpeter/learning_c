#include <stdio.h>
int gcd(int m,int n){
while (n != 0){
int r = m % n;
m = n;
n = r;
if ( n == 0)
return m;
}
}
int main(int argc, char *argv[]){
int x, y;
sscanf(argv[1], "%d", &x);
sscanf(argv[2], "%d", &y);
printf("%d is the greatest common divisor of %d %d\n", gcd(x,y),x,y );

return 0;
}

