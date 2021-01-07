#include<stdio.h> 
int main() 
{ 
 int i, j, k;
 char str[100];
 char rev[100];
 scanf("%s", str);
 for(i = 0; str[i] != '\0'; i++);
  {
    k = i-1;
  }
  for(j = 0;j <= i-1; j++)
  {
    rev[j] = str[k]; k--;
  }
 printf("%s\n", rev);
}
