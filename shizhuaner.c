#include<stdio.h>
void main()
{
	int shi,zhong,jian,er=0;
	printf("ten to two\n");
	scanf("shu ru shi jin zhi %d",&shi);
	zhong=shi;
	while(zhong!=0)
	{
		jian=zhong%2;
		er=er*10+jian;
		zhong=zhong/2;
	}
	printf("%d,%d\n",shi,er);
}
	