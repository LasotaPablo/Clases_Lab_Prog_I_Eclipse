/*
 ============================================================================
 Name        : Clase_02_02.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int max;
	int min;
	int num;
	char verificar='s';
	while(verificar == 's')
	{
		int aux;
		printf("Ingrese un numero: ");
		scanf("%d",&num);
		aux = num;
		if(num<aux)
		{
			min = num;
		}
		if(num>aux)
		{
			max = num;
		}
		printf("Desea contunuar?s/n");
		scanf("%s",&verificar);
	}
	printf("El numero maximo ingresado es: %d\n",max);
	printf("El numero minimo ingresado es: %d\n",min);
}


