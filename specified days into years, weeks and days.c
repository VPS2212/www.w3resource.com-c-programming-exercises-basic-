#include<stdio.h>
int main()
{
    int nod,year,weeks,days;
    printf("Enter the number of days:");
    scanf("%d",&nod);
    year=nod/365;
    printf("Number of Year=%d\n",year);
    weeks=(nod%365)/7;
    printf("Number of weeks=%d\n",weeks);
    days=nod-((year*365)+(weeks*7));
    printf("Number of days=%d\n",days);
    return 0;

}
