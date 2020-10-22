#include <stdio.h>


int main(int argc, char** argv) {
	float a,b;
    char o;
        

        printf("Digite o primeiro valor ");
        scanf("%f", &a);

        printf("Digite um dos operadores (+,-,*,/) ");
        scanf(" %c", &o);

        printf("Digite o segundo valor ");
        scanf("%f", &b);

	printf("O operador escolhido foi %c", o);
	switch(o)
	{
		case '+':
			printf("%.2f + %.2f = %.2f\n", a, b, a + b );
		break;

		case '-':
			printf("%.2f - %.2f = %.2f\n", a, b, a - b );
		break;

		case '*':
			printf("%.2f * %.2f = %.2f\n", a, b, a * b );
		break;

		case '/':
			if(b == 0)
				printf("Número inválido");
			else
				printf("%.2f / %.2f = %.2f\n", a, b, a / b );
		break;

		default:
			printf("Operador invalido: \n");
	} 
	printf("opa");

	printf("opa novamente");
    return 0;    
} 

