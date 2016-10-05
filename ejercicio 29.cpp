// ejercicio 29.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

unsigned long factorial(int x){
    int i;
    unsigned long resp=1;
    if(x==0){
        return 1;
    }
    else
    {
        i=x;
        while(i>1){
            resp = resp * i;
            i--;
        }
        return resp;
    }
}

unsigned long otrofactorial(int x){
	if(x==0)
	{
		return 1;
	} 
	else 
	{
		return otrofactorial(x-1)*x;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
    int valor=3;
    unsigned long resultado = 0;
    
	resultado = otrofactorial(valor);

    return 0;
}



