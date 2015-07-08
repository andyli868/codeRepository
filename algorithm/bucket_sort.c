#include <stdio.h>
int main()
{
	int i,j,b[20],t;
	int a[20]={1,5,8,9,10,19,15,11,19,2,3,4,6,7,7,2,13,14,17,16};
	for(i=0;i<=19;i++)
	{
		printf("%d ",a[i]);
		b[i]=0;
		printf("%d ",b[i]);
	} 
	printf("\r\n");
	for(i=0;i<=19;i++)
	{
		t=a[i];
		b[t]++;
//		printf("%d ",t);

	}
	for(j=0;j<=19;j++)
		for(t=1;t<=b[j];t++)
			printf("%d ",j);
	getchar();
	return 0;		
}
