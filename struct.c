#include <stdio.h>
#include <string.h>

int main()
{
int x;
float f;
double d;
char c;


	typedef struct player{
		char name[15];
		float score;
    int id;
	}p;
	p aPlayer = {0,0,0}; // create instance of structur
	p *ptrPlayer; // create a pointer of structure type;
 ptrPlayer = &aPlayer;
 strcpy(ptrPlayer -> name, "Pinball Wizard");
 ptrPlayer->score = 1000000.00; // same as ptrPlayer.score but for pointer
 printf("\nPlayer: %s\n", ptrPlayer->name);
 //printf("%s", ptrPlayer.name);
 printf("Score: %.0f\n", ptrPlayer->score);
 printf("\nSize of integer: %d bytes\n", sizeof(x));
 printf("Size of float: %d bytes\n", sizeof(f));
 printf("Size of double %d bytes\n", sizeof(d));
 printf("Size of char %d byte\n", sizeof(c));
 printf("Size of player structure: %d bytes\n", sizeof(p));
}
