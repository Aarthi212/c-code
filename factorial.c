#include <stdio.h>
int findFact(int,int*);
int main()
{
  int fact,num;
  scanf("%d",&num);
  findFact(num,&fact);
  printf("%d",fact);
  return 0;
}
int findFact(int n,int *f)
{
  int i;
  *f =1;
  for(i=1;i<=n;i++)
  *f=*f*i;
}
