#include <stdio.h>

int main(){
    int valor=5;
    unsigned long resultado = 0;
    
    resultado = factorial(valor);

    return 0;
}

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
