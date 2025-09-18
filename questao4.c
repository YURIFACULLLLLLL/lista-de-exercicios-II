#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int random, input;
	
	srand(time(NULL));
	
	random = (rand() % 50) + 1;
	
	do{
		printf("Tente advinhar o numeeo secreto :");
			scanf("%d", &input);
			
			if (input > random){
				printf("tente um numero menor\n");
			} else if (input < random){
				printf("tente um numero maior\n");
				}else {
					printf("parabens, voce ganhou");
				}
	} 
	
	while (input != random);
	
	
	
	return 0;
}