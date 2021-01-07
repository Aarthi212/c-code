#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,pos=-1,*a,element;
	scanf("%d",&n);
	a=calloc(sizeof(int),n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(*(a+i)==element)
		{
			pos=i;
			break;
		}
	}
	printf("%d is in %d",element,pos);
	return 0;
}