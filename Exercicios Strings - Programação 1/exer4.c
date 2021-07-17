//Autor: Victor Cesconetto De Pieri
//Revisão: Mike Igor Camilo Domingues


#include <stdio.h>

int str_len(char x[])
{
    int i=0;
    //printf ("Endereço de x é %p\n", x);
    while (x[i]!=0)
        i++;
    return i;
}

int str_ncmp(char string1[], char string2[], int n1, int n2)
{

    int i=0,j;
    char straux[n2-n1];

// É necessário verificar se o intervalo é válido, por isso foi adicionado a condição n1>n2,
// garantindo assim que o intervalo não seja negativo.
    if(n1 > str_len(string2) || n2 > str_len(string2) || n1<0 || n2<0 || n1 > n2){
        printf("Valor de tamanho excede tamanho da string 2 ou da string1 ou é invalido\n");
        return -1;
    }



    for (j=n1;j<n2;j++) {
        straux[i] = string2[j];//passando a substring para uma string aux
        i++;
    }



    for(j=0;j<n2;j++){
        if(straux[j]!=string1[j]){
            return -1; //verificando se a string aux é igual ao n2 caracteres da string1
        }
    }


    return 0;
}

int main()
{
    int i;
    char x[100]="XXXX";
    char y[100]="IFSC-SJ";

    i = str_ncmp(x,y,2,0);//compara ate o valor valido, se a string for igual ate o valor retorna 0, caso contrario retorna -1.
    printf("i - > %d\n", i);
}