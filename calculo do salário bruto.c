#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float HT, VH, PD, SB, TD, SL;
	
	printf("Programa para calculo do salário bruto \n \n");
	
	printf("Digite quantas foram as horas trabalhadas: ");
	scanf("%f", &HT);
	
	printf("Digite o valor da hora de trabalho: ");
	scanf("%f", &VH);
	
	printf("Digite o percentual de desconto do INSS: ");
	scanf("%f", &PD);
	
	SB= HT*VH;
	TD= SB*PD/100;
	SL=SB-TD;
	
	printf("\n O salário bruto é: %.2f, o total de desconto é: %.2f e o salário líquido é: %.2f \n ", SB, TD, SL);
	
	system("pause");
	
}
