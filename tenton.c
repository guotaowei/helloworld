#include<stdio.h>
#include<math.h>
void main()
{
	int n,a,i=0,k,m=0;
	printf("转换为n进制数，n=");
	scanf("%d",&n);
	printf(" 输入原数值：");
	scanf("%d",&a);
	k=a;
	while(k!=0)
	{
		if(k%n!=0)
		{
		m=m+(k%n)*pow(10,i);
		}
		k=k/n;
		i++;
	}
	printf("十进制数%d转换%d进制数为%d",a,n,m);
}