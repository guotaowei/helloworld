#include<stdio.h>
void main()
{
	int a=0,b=1,c=0,g=0,n;			//a，b为输出第N个数的前两个数，c为中间变量，D,N为FOR循环的控制变量。
	printf("输入数列个数：");
	scanf("%d",&n);
	for(g;g<n;g++)
	{
		printf("%d\t",b);
		c=a;
		a=b;
		b=a+c;
	}
}