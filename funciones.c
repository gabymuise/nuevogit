#include "cabecera.h"
#define A 5


void dibujo1()
{
    int i;
    for (i=0; i<A; i++)
    {
        printf("&");

    }
}


void dibujo2()
{
    int J;

    for (J=0; J<A; J++)
    {


        for (J=0; J<A; J++)
        {
            printf("&");
        }
        printf("\n");
           for (J=0; J<A; J++)
        {
            printf("&");
        }
      printf("\n");
           for (J=0; J<A; J++)
        {
            printf("&");
        }
    }
}

