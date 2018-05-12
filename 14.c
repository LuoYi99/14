/*
题目：
请编写一个程序，输入三个整数，要求实现对这三个整数进行排序
*/
/*
思路：
用三个变量存储这三个整数，让后通过一一比较，交换，从而排序
*/
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void main()
{

	int x[3],i,j,t;
	for(i=0;i<3;i++)
		scanf("%d",&x[i]);
	for(i=0;i<2;i++)
		for(j=i+1;j<3;j++)
			if(x[i]<x[j])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
	for(i=0;i<3;i++)
		printf("%d ",x[i]);
}