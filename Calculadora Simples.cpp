#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	float num1, num2,result;
	
	printf ("Informe o primeiro número: ");
	scanf ("%f",&num1);
	printf ("\n");
	
	printf ("Informe o segundo número: ");
	scanf ("%f",&num2);
	printf ("\n");
	
	printf ("Escolha a operação matemática \n");
	printf ("[1] Soma   [2] Subtração   [3] Divisão   [4] Multiplicação\n");
	scanf ("%d",&opcao);
	
	switch (opcao){
		case 1 :
			result = num1 + num2;
			printf ("O resultado da soma eh: %.2f\n",result);
			break;
		case 2 :
			result = num1 - num2;
			printf ("O resultado da subtracao eh: %.2f\n",result);
			break;
		case 3 :
			result = num1 / num2;
			printf ("O resultado da divisao eh: %.2f\n",result);
			break;
		case 4 :
			result = num1 * num2;
			printf ("O resultado da multiplicacao eh: %.2f\n",result);
			break;
		default :
			printf ("Opcao nao valida\n");
	}
	system ("pause");
}
