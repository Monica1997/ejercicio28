// matriz.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int matriz[5][7];

	//llenar la matriz con numeros consecutivos (1,2,3,...)

	int i;
	int j;
	int contador=1;

	for (i=0;i<5;i++)
	{
		for (j=0;j<7;j++)
		{
			matriz[i][j]= contador;
			contador ++;
		}
	
	}


	//imprimir los valores de la matriz

	for (i=0;i<5;i++)
	{
		for (j=0;j<7;j++)
		{
			printf("%i\t",matriz[i][j]);
	
		}
	printf("\n");
	}


	return 0;
}

