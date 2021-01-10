#include <stdio.h> 
int main() 
{ 
int matrix[20][20],i,j,sum=0,sumofnondiagonal=0,sumoftriangle=0; 
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{ 
	scanf("%d",&matrix[i][j]);
	} 
}
printf("The Entered Matrix:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("%d ",matrix[i][j]);
}
printf("\n");
	}	
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		sum=sum+matrix[i][j];
	}
}

printf("Sum of all Matrix    :%d\n",sum); 
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(i==j)
		{ 
			} 
	else sumofnondiagonal=sumofnondiagonal+matrix[i][j];
	}
}
printf("Sum of nondiagonal   :%d\n",sumofnondiagonal);
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(j<i)
		{
			sumoftriangle=sumoftriangle+matrix[i][j];
	} 
} 
}
printf("Sum of Lower Triangle:%d",sumoftriangle); 
return 0;
}
