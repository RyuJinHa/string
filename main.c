#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char src[100]="programming course";
	
	
	int i=0;
	while(src[i]!='\0')
	{
		i++;
	}


	printf("%s (%i)\n",src, i);
	


	

	return 0;
}
