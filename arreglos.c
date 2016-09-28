/*
INICIO
    unArregloDeCienEnteros[100]:ENTERO
    unArregloDeCienReales[100]:REAL
    unArregloDeCienCaracteres[100]:CARACTER

    //Guardar un cinco en el primer elemento de unArregloDeCienEnteros
    unArregloDeCienEnteros[1]:=5

    //Guardar un cero en el último elemento de unArregloDeCienEnteros
    unArregloDeCienEnteros[100]:=0

    unArregloDeCienReales[25]:=8.44

    //Estas dos instrucciones hacen lo mismo
    unArregloDeCienCaracteres[7]:='X'
    unArregloDeCienCaracteres[7]:=88


FIN
*/
    void arreglos()
    {
        int unArregloDeCienEnteros[100];
        float unArregloDeCienReales[100];
        char unArregloDeCienCaracteres[100];


        //Guardar un cinco en el primer elemento de unArregloDeCienEnteros
        unArregloDeCienEnteros[0]=5;

        //Guardar un cero en el último elemento de unArregloDeCienEnteros
        unArregloDeCienEnteros[99]=0;

        unArregloDeCienReales[24]=8.44;

        //Estas dos instrucciones hacen lo mismo
        unArregloDeCienCaracteres[6]='X';
        unArregloDeCienCaracteres[6]=88;

    }
