#include<stdio.h>
void main()
{
	int a=0,b=1,c=0,g=0,n;			//a��bΪ�����N������ǰ��������cΪ�м������D,NΪFORѭ���Ŀ��Ʊ�����
	printf("�������и�����");
	scanf("%d",&n);
	for(g;g<n;g++)
	{
		printf("%d\t",b);
		c=a;
		a=b;
		b=a+c;
	}
}