#include <stdio.h>
#include <stdlib.h>


int main()


{


float vfam_b,vfaz_b,vfb;
float ifam_b,ifaz_b,ifb;
float res1, res2, res3;
float voltaje,corriente,resistencia;

vfam_b= 2;
vfaz_b= 3;
vfb= 2.8;
ifam_b= 0.02;
ifaz_b= 0.02;
ifb=0.02;


  printf("Inserta el valor de la fuente para calcular la resistencia\n");
  scanf("%f",&voltaje);

  printf("Inserta el valor de la corriente\n");
  scanf("%f",&corriente);

  resistencia= voltaje / corriente;
  printf("El valor de la resistencia de la fuente del circuito es:%2.f\a\n",resistencia);
  printf("\n Acontinuacion se muestran los valores de mis leds seleccionados\n");

  res1= vfam_b / ifam_b;
  res2= vfaz_b / ifaz_b;
  res3= vfb / ifb;

  printf("\n El valor de la resistencia del led amarillo brillante es:,%2.f\a\n",res1);
  printf("\n El valor de la resistencia del led azul brillante es:,%2.f\a\n",res2);
  printf("\n El valor de la resistencia del led Blanco es:,%2.f\a\n",res3);


  scanf("%f",&vfam_b);


    return 0;
}
