#include <stdio.h>

int main(void){
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n",sizeof(char));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	return 0;
}
