#include <stdio.h>
int main()
{
	int i,j,t;
	int a[20]={1,5,8,2,3,6,7,7,2,2,0,1,2,3,4,9,8,7,6,5};
	for(i=0;i<=19;i++)
	{
		printf("%d ",a[i]);
	} 
	printf("\r\n");
	for(i=0;i<=18;i++)
	{
		for(j=0;j<=18-i;j++)
		{
			if(a[j]>a[j+1])
			{ t =a[j];a[j]=a[j+1];a[j+1]=t;}
		}
	}
	for(i=0;i<=19;i++)
		printf("%d ",a[i]);

	getchar();
	return 0;		
}
