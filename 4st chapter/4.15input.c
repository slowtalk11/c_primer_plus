#include <stdio.h>
int main(void) {
	int age;
	float assets;
	char pet[30];
	
	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%2d %f", &age, &assets);
	scanf("%3s",pet);
	printf("%d $%f %s\n", age, assets, pet);
	
	return 0;
}

