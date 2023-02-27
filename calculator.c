#include <stdio.h>
int main(){

	int num1, num2;
	double res;
	char ope;

	printf("Ingresa un numero: ");
	scanf("%d",&num1);
	printf("\nEl numero ingresado es: %d",num1);

	printf("\nIngresa otro numero: ");
	scanf("%d",&num2);
	printf("\nEl numero ingresado es: %d",num2);

	printf("\nIngresa una operacion (+ - * /): ");
	scanf(" %c",&ope);
	printf("\nLa operacion ingresada es: %c",ope);

	switch (ope) {

		case '+':
			res = num1 + num2;
			printf("\nEl resultado es %lf",res);
			break;
		case '-':
			res = num1 - num2;
			printf("\nEl resultado es %lf",res);
			break;
		case '*':
			res = num1 * num2;
			printf("\nEl resultado es %lf",res);
			break;
		case '/':
			res = num1 / num2;
			printf("\nEl resultado es %lf",res);
			break;
		default:
			printf("\nOperador invalido");
	}

	printf("\nFin del programa.");
}
