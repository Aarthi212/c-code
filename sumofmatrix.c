#include <stdio.h>
int main()
{
	int i, x[6], sum = 0;
	for(i = 0; i < 6; ++i)
	{
		scanf("%d", &x[i]);
		scanf("%d", x+i);
		sum += *(x+i);
	}
	printf("%d", sum);
	return 0;
}