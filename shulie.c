#include<stdio.h>
int foo(int i)
{
	if(i<=0)
		return 0;
	else if(i>0 && i<=2)
		return 1;
	int a=foo(i-1);
	int b=foo(i-2);
	return a+b;
}
int main()
{
	int d;
	scanf("%d",&d);
	printf("%d\n",foo(d));
}