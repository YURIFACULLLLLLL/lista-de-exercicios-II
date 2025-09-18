#include <stdio.h>

int main (){
	
	int n;
	int soma = 0;
	
	printf("Soma dos quadrados dos primeiros N numeros\n");
	printf("Insira N: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n ; i++){
		soma += i * i;
	}
	
	
	printf("%d", soma );
	
	
	
	return 0;
}