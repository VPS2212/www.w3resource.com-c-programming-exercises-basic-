#include<stdio.h>
int main()
{
    float a,c,r,temp=0;
    printf("Enter the Radius of the circle:");
    scanf("%f",&r);
    temp=r;
    a=3.14*pow(r,2);
    printf("Area of the circle= %f\n",a);
    r=temp;
    c=2*3.14*r;
    printf("Perimeter of the circle= %f\n",c);
    return 0;
}
