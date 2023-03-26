#include<stdio.h>
int main()
{
	int  sec,h,m,s;
	printf("Enter the seconds:");//
	scanf("%d",&sec);
	h=(int)sec/60/60;
	sec=(int)sec-(h*60*60);
	m=(int)sec/60;
	sec=(int)sec-(m*60);
	s=(int)sec;
	printf("\n%dH:%dM:%dS\n",h,m,s);
	return 0;
}
