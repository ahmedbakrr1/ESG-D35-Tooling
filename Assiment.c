#include<stdio.h>
#define Max 10
#define Min 5
#define Bakr printf

typedef unsigned char BYTE;

void main(void)
{
    int number;
    int num_1=10;
    int num_2=15;
    int newnumber;
    float avg;
    int X;

    newnumber=0b1000;
    number=num_1+num_2;
    avg=(num_1+num_2)/2.0f;
    X=Max/Min;
    BYTE bb=240;

    Bakr("%d\n",number);
    Bakr("%d\n",newnumber);
    Bakr("%f\n",avg);
    /*
    Bakr("%d\n",Max);
    Bakr("%d\n",Min);
    */
    Bakr("%d\n",X);
    Bakr("%d\n",bb);








}
