#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor, par = 0, imp = 0, pos = 0, neg = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &valor);

		if (valor % 2 == 0)
			par++;
		else
			imp++;

		if (valor > 0)
			pos++;
		else if(valor < 0)
			neg++;
	}

	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", imp);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);

	return 0;
}