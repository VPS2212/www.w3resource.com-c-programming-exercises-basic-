#include<stdio.h>
int main()
{
    int pre,ar,h,w;
    printf("Enter the Hight of Rectangle :");
    scanf("%d",&h);
    printf("Enter the Width of Rectangle :");
    scanf("%d",&w);
    pre=2*(h+w);
    printf("Perimeter of the Rectangel=%d\n",pre);
    ar=h*w;
    printf("Area of the Rectangel=%d\n",ar);
    return 0;
}
