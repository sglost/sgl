#include<stdio.h>
#include "mygets.h"

int main(void)
{
	char str[20] = "\0";
//	printf("%d\n",sizeof(str));
	my_gets(str,sizeof(str));
	printf("%s\n",str);
}
