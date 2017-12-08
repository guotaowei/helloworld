void array_swap(int a[],int i,int j)//数组交换
{
	int m=a[i];
	a[i]=a[j];
	a[j]=m;
}
/*
名称 ———————————————————— 归并排序
类别 ———————————————————— 内部比较排序
数据结构 ———————————————— 数组
最差时间复杂度 —————————— 
最优时间复杂度 —————————— 
平均时间复杂度 ——————————
所需辅助空间 ———————————— n
稳定性 —————————————————— 稳定
*/
int recursion_sort(int a[],int b[],int start,int end,int s)
{
	int middle=(start+end)/2;
	//设置返回条件
	if(middle>=end||middle<start)
		return 0;
	recursion_sort(a,b,start,middle,s);
	recursion_sort(a,b,middle+1,end,s);
	int m=middle+1,i=start,j=start;
	//分组比较，当任一组下标超出，结束循环
	while(j<=middle&&m<=end)
	{
		//判断s的值，0为升序，其他为降序
		if(s==0?a[i]>a[j]:a[i]<a[j])
		{
			b[i]=a[m];
			i++;
			m++;
		}
		else
		{
			b[i]=a[j];
			i++;
			j++;
		}
	}
	//剩下未作比较的值按顺序赋给数组b
	if(j<=middle)
	{
		for(j;j<=middle;j++)
		{
			b[i]=a[j];
			i++;
		}
	}
	else
	{
		for(m;m<=end;m++)
		{
			b[i]=a[m];
			i++;
		}
	}
	//把排好序的值重新赋给数组a
	for(j=start;j<=end;j++)
		a[j]=b[j];
}
/*
名称 ———————————————————— 选择排序
类别 ———————————————————— 内部比较排序
数据结构 ———————————————— 数组
最差时间复杂度 —————————— n^2
最优时间复杂度 —————————— n^2
平均时间复杂度 —————————— n^2
所需辅助空间 ———————————— 1
稳定性 —————————————————— 稳定
*/
int select_sort(int a[],int start,int end,int s)//选择排序法（复杂度：n^2）
{
	int i,j;
	for(i=start;i<end;i++)
		for(j=i+1;j<=end;j++)
		{
			//判断s的值，0为升序，其他为降序
			if(s==0?a[i]>a[j]:a[i]<a[j])
			{
				array_swap(a,i,j);
			}
		}
}
/*
名称 ———————————————————— 冒泡排序
类别 ———————————————————— 内部比较排序
数据结构 ———————————————— 数组
最差时间复杂度 —————————— n^2
最优时间复杂度 —————————— n^2
平均时间复杂度 —————————— n^2
所需辅助空间 ———————————— 1
稳定性 —————————————————— 稳定
*/
int bubble_sort1(int a[],int start,int end,int s)//冒泡排序法，小→大（复杂度：n^2）
{
	int i,j;
	for(i=end;i>start;i--)
		for(j=start;j<i;j++)
			//判断s的值，0为升序，其他为降序
			if(s==0?a[j]>a[j+1]:a[j]<a[j+1])
			{
				array_swap(a,j,j+1);
			}
}
int max(int x,int y)//返回最大值
{
	if(x>y)
		return x;
	else
		return y;
}
/*
名称 ———————————————————— 二分法
类别 ———————————————————— 内部查找数据
数据结构 ———————————————— 数组
最差时间复杂度 —————————— log2
最优时间复杂度 —————————— 1
平均时间复杂度 —————————— log2+1
所需辅助空间 ———————————— 1
稳定性 —————————————————— 稳定
*/
int dichotomy_lookup(int a[],int start,int end,int n,int s)//在有序数列中，查找指定数字
{
	//a[]为数列，start为开始下标，end为结束下标，n为指定数字，middle为中间下标
	int middle=-1;
	//当middle=end时，数列已查找完毕
	while(middle!=end)
	{
		middle=(start+end)/2;
		if(a[middle]==n)
		{
			printf("a[%d]=%d\n",middle,n);
			return 0;
		}
		else
		{
			//判断s的值，0为升序，其他为降序
			if(s==0?a[middle]>n:a[middle]<n)
				end=middle;
			else
				start=middle+1;
		}
	}
	printf("not find!");
}
/*
名称 ———————————————————— 二分法
类别 ———————————————————— 内部插入数据
数据结构 ———————————————— 数组
最差时间复杂度 —————————— log2
最优时间复杂度 —————————— 1
平均时间复杂度 —————————— log2+1
所需辅助空间 ———————————— n+1
稳定性 —————————————————— 稳定
*/
int dichotomy_insert(int a[],int start,int end,int n,int s)//在有序数列中，插入指定数字
{
	int i,k=start,j=end,middle;
	//a[]为数列，start为开始下标，end为结束下标，n为指定数字，middle为中间下标
	//判断s的值，0为升序，其他为降序；n是否为最大或最小
	if(s==0?n<a[start]:n>a[start])
	{
		for(i=end+1;i>start;i--)
			a[i]=a[i-1];
		a[i]=n;
		return 0;
	}
	if(s==0?n>a[end]:n<a[end])
	{
		a[end+1]=n;
		return 0;
	}
	//j-k=1时，找见位置
	while(j-k!=1)
	{
		middle=(k+j)/2;
		if(s==0?n<a[middle]:n>a[middle])
			j=middle;
		else
			k=middle;
	}
	//将所
	for(i=end+1;i>j;i--)
		a[i]=a[i-1];
	a[i]=n;
}
/*
名称 ———————————————————— 插入排序
类别 ———————————————————— 内部比较排序
数据结构 ———————————————— 数组
最差时间复杂度 —————————— 
最优时间复杂度 —————————— 
平均时间复杂度 —————————— 
所需辅助空间 ———————————— 1
稳定性 —————————————————— 稳定
*/
int insert_sort(int a[],int start,int end,int s)//插入排序
{
	//a[]为数列，start为开始下标，end为结束下标，m为中间变量
	int i=start+1,k,j=end,m;
	while(i<=end)
	{
		k=i;
		m=a[k];
		//把较大数一次向右移
		while(k>start&&s==0?m<a[k-1]:m>a[k-1])
		{
			a[k]=a[k-1];
			k--;
		}
		a[k]=m;
		i++;
	}
}
/*
名称 ———————————————————— 二分法排序
类别 ———————————————————— 内部比较排序
数据结构 ———————————————— 数组
最差时间复杂度 —————————— 
最优时间复杂度 —————————— 
平均时间复杂度 —————————— 
所需辅助空间 ———————————— 1
稳定性 —————————————————— 稳定
*/
int dichotomy_sort(int a[],int start,int end,int s)
{
	//start为开始下标，end为结束下标，s为升序降序标志
	//设置返回条件
	if(start>=end)
		return 0;
	int b[end+1],i,j=end,k=start,m;
	m=a[start];
	for(i=start+1;i<=end;i++)
	{
		if(s==0?m>a[i]:m<a[i])
		{
			b[k]=a[i];
			k++;
		}
		else
		{
			b[j]=a[i];
			j--;
		}
	}
	b[k]=m;
	for(i=start;i<=end;i++)
		a[i]=b[i];
	dichotomy_sort(a,start,k-1,s);
	dichotomy_sort(a,k+1,end,s);
}