#include <stdio.h>
#include <stdlib.h>


struct Book {
   int number;
   char title[10];
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   struct Book *p;
   p = (struct Book*)malloc(2*sizeof(struct Book));
   strcpy(p->title, "C programming");
   (p+1)->number = 2;
   strcpy((p+1)->title, "Electronics");
   
   
   free(p);

system("PAUSE");
	
	
	
	return 0;
}
