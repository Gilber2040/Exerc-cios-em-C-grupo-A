#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float num;
	printf("Digite um numero: ");
	scanf("%f",&num);
	printf("Antecessor: %f e Sucessor: %f", num-1, num+1);
	printf("\n\n\n");

system("pause");
return 0;
}
