#include <stdio.h> 
int main() 
{
 int i, j, rows;
 scanf("%d", &rows);
 for (i = 0; i < rows; i++)
 {
  for (j = 0; j < rows; j++)
  {
    if (j < i)
     {
	printf(" ");
     }
    else
     {
        printf("*");
     }
  }
  printf("\n");
 }
 return 0;
}
