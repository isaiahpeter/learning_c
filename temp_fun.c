#include <stdio.h>

#define LOWER 0    /* lower limit of table */
#define UPPER  300 /* upper limit */
#define STEP 20  /* step size */
/* print fahrenheit-celsius table */


float fahrenheit(float m);
int main(){
int i;
for(i = 0; i <= 300; ++i)
printf("%3d  %3.2f\n",i, fahrenheit(i));
return 0;
}

float fahrenheit(float x){

float celsius;
celsius = (5.0/9.0) * (x-32);
return celsius ;

}
