/*
��Ŀ��
���дһ��������������������Ҫ��ʵ�ֶ�������������������
*/
/*
˼·��
�����������洢�������������ú�ͨ��һһ�Ƚϣ��������Ӷ�����
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