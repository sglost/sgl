#include<stdio.h>
#include<string.h>

char* my_gets(char *str,int len)
{
	fgets(str,len,stdin);
	
	int length = strlen(str);
	if(str[length-1] == '\n')
	{
		str[length-1] = '\0';
	}
	return str;
}
