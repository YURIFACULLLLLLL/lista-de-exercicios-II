#include <stdio.h>

int main (){
	int n;
	int dado = 0;
	
	while (dado < 20){
		printf("Jogue os dados ate a soma ser 20\n");
		printf("Insira o numero: ");
		scanf("%d", &n);
		dado+=n;
	}
	
	printf("parabens vc ganhou soma deu : %d", dado);
		 
	return 0;
}