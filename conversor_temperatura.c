#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

	float conversor;
   	float temp_fahre;
	int contador;
    
	printf("Programa conversor de temperaturas!\n");
	printf("Informe uma temperatura em graus fahrenheit:");
	scanf("%f", &temp_fahre);
	conversor = (temp_fahre * 1.8) + 32;
	printf("\nA temperatura convertida em graus celsius: %.2f\n", conversor);

        return 0;

}
