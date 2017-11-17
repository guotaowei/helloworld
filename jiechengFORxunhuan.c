#include<stdio.h>
#include<math.h>
int main()
{
	int n,start,sum=1;
	printf("n!,n=");
	scanf("%d",&n);
	start=n;
	for(n;n>1;n--)
	{
		printf("%d\n",n);
		sum=sum*n;
	}
	printf("%d!=%d",start,sum);
}