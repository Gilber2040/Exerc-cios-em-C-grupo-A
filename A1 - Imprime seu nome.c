#include <stdio.h>
#include <stdlib.h>

main(void)
{
	char nome[100];
	printf("\n Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("\nSeu nome: %s", nome);
	printf("\n\n");
	
	system("pause");
	return 0;
}
