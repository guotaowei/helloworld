#include<stdio.h>
int foo(int i)
{
	printf("%d\n",i);
	if(i==1)
		return 1;
	return i*foo(i-1);
}
int main()
{
	int n;
	printf("n!,n=");
	scanf("%d",&n);
	printf("%d!=%d",n,foo(n));
}