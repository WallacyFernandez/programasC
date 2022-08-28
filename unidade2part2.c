#include <stdio.h>
#include <stdlib.h>

int main()
{
	int op;
	float m, s, v, c;

	printf("Bem vindo ao controle de trafego\n");

	do
	{
		printf("\n1-Iniciar \n2-Sair\n");
		scanf("%i", &op);

		switch (op)
		{
		case 1:
			printf("\nO limite de velocidade dos radares e 80km/h, caso ultrapasse o limite ocorrera em multa\n");
			printf("informe os dados necessarios para verificacao de sua multa:\n");
			printf("Primeiro o tempo em segundos que voce percorreu entre os radares.\n");
			scanf("%f", &s);
			printf("Agora a distancia em metros entre os radares:\n");
			scanf("%f", &m);
			v = m / s;
			c = v * 3.6;

			printf("Voce passou a: %.1fKm/h nesse trajeto\n", c);
			if (c <= 80.0)
			{
				printf("Voce esta dentro do limite de velocidade.\a\n");
			}
			else
			{
				printf("Voce sera multado.\a\n");
			}

			system("pause");

			break;
		case 2:
			printf("\nObrigado por usar nossos servicos\n");
			break;

		default:
			printf("\nOpcao invalida.\n\n");
		}

	} while (op != 2);
	system("pause");
	return (0);
}