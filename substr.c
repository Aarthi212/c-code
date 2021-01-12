#include <stdio.h>
#include <string.h>
int substr(char * str, char * sub);
int main()
{
	char str[100]={0};
	char check[10]={0};
	scanf("%s",str);
	scanf("%s",check);	
	if(substr(str,check))
		printf("Found The Substring - %s",check,str);
	else
		printf("Not Found The substring - %s",check,str);
		
	return 0;
}
int substr(char * str, char * sub)
{
	int flag = 0;
	int i=0,len1=0,len2=0;
	len1 = strlen(str);
	len2 = strlen(sub);
	while(str[i] != '\0')
	{
			if(str[i] == sub[0])
			{
					if((i+len2)>len1)
						break;
					if(strncmp(str+i,sub,len2)==0)
					{
						flag = 1;
						break;
					}
			}
			i++;
	}
	return flag;
}
