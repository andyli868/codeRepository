#include <stdio.h>
int main()
{
	int i,j,t;
	int a[20]={11,15,18,22,13,6,17,27,12,2,0,11,2,3,4,9,18,7,6,15};
	for(i=0;i<=18;i++)
		for(j=i;j>=0;j--)
			if(a[j+1]>a[j])
				{
					t=a[j+1];
					a[j+1]=a[j];
					a[j]=t;	
				}
			else
				break;

	for(i=0;i<=19;i++)
		printf("%d ",a[i]);
	getchar();
	return 0;		
}
