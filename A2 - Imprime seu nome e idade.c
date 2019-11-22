#include <stdio.h>
#include <stdlib.h>

main(void)
{
	char nome[100];
	printf("\n Digite seu nome: ");
	scanf("%s",&nome);
	
	int idade[3];
	printf("\n Digite sua idade: ");
	scanf("%s",&idade);
	
	printf("\n Seu nome: %s", nome);
	printf("\n Sua idade: %s", idade);
	printf("\n\n");

	system("pause");
	return 0;
}
