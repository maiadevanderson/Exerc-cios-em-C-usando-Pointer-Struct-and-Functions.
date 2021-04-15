#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i = 15;
    int *ponteiroint = &i;

    float f = 2.9;
    float *ponteirofloat = &f;

    char c ='x';
    char  *ponteirochar = &c;

    printf("----Valor Antes---- \n");

    printf("Inteiro %i \n", *ponteiroint);
    printf("Real %f \n",  *ponteirofloat);
    printf("Char %c \n", *ponteirochar);

   *ponteiroint = 56;
   *ponteirofloat = 5.9;
   *ponteirochar = 'y';

    printf("----Valor Depois---- \n");

    printf("Inteiro %i \n", *ponteiroint);
    printf("n Real %f \n",  *ponteirofloat);
    printf("Char %c \n", *ponteirochar);

}
