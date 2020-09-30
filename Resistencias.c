#include <stdio.h>
#include <stdlib.h>

int main()
{
    float res1,res2,res3,res10,res11,res12;
    float i1,i2,i3,i10,i11,i12;
    float volt1,volt10,volt2,volt11,volt3,volt12;

    printf("Para saber el valor del voltaje de R1 introdusca el valor de la resistencia R1:\n");
    scanf("%f",&res1);

    printf("inserte el valor de la Corriente:\n");
    scanf("%f",&i1);

    volt1= res1 * i1;
    printf("\n el valor del voltaje en R1 es:%2.f\a\n",volt1);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Para saber el valor de la corriente de R1 introdusca el valor del voltaje de R1:\n");
    scanf("%f",&volt10);

    printf("inserte el valor de la resistencia:\n");
    scanf("%f",&res10);

    i10= volt10 / res10;
    printf("\n el valor de la corriente en R1 es:%2.f\a\n",i10);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7

    printf("Para saber el valor del voltaje de R2 introdusca el valor de la resistencia R2:\n");
    scanf("%f",&res2);

    printf("inserte el valor de la Corriente:\n");
    scanf("%f",&i2);

    volt2= res2 * i2;
    printf("\n el valor del voltaje en R2 es:%2.f\a\n",volt2);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Para saber el valor de la corriente de R2 introdusca el valor del voltaje de R2:\n");
    scanf("%f",&volt11);

    printf("inserte el valor de la resistencia:\n");
    scanf("%f",&res11);

    i11= volt11 / res11;
    printf("\n el valor de la corriente en R2 es:%2.f\a\n",i11);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////7

    printf("Para saber el valor del voltaje de R3 introdusca el valor de la resistencia R3:\n");
    scanf("%f",&res3);

    printf("inserte el valor de la Corriente:\n");
    scanf("%f",&i3);

    volt3= res3 * i3;
    printf("\n el valor del voltaje en R3 es:%2.f\a\n",volt3);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("Para saber el valor de la corriente de R3 introdusca el valor del voltaje de R3:\n");
    scanf("%f",&volt12);

    printf("inserte el valor de la resistencia:\n");
    scanf("%f",&res12);

    i12= volt12 / res12;
    printf("\n el valor de la corriente en R3 es:%2.f\a\n",i12);

    return 0;
}

