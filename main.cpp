#include <iostream>

using namespace std;

int tam_cad(char *cadena)
{
    int tam=0;
    while(*cadena++!='\0'){
        tam++;
    }
    return tam;
}

void invertir(char *cad)
{
    char* fin = cad + tam_cad(cad)-1;
    char t;
    while(fin>cad)
    {
        t=*cad;
        *cad=*fin;
        *fin=t;
        fin--;
        cad++;
    }
}

int invertirR(char *cad, char *fin)
{
    if(cad>fin)
    {
        return 0;
    }
    swap(*cad,*fin);
    invertirR(++cad,--fin);

}

int tam_cad1(char *cadena)
{
    char *ini = cadena;
    while(*cadena++!='\0');
    return cadena-ini-1;
}

int rec(char* cadena)
{
    if(*cadena=='\0')
        return 0;
    return 1+rec(++cadena);
}
int main()
{
    char cad[] = "hola!!";
    int arr[]={1,2,3,4,5};
    char cadena1[]={'h','o','l','a','\0'};
    cout<< cad << endl;
    cout << tam_cad(cad) << endl;
    cout << tam_cad1(cad) << endl;
    invertir(cad);
    cout<< cad << endl;
    char *fin = cad+ tam_cad(cad)-1;
    invertirR(cad, fin);
    cout<< cad << endl;
}

/*
Palindrome iterativo y recursivo
*/
