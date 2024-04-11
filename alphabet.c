#include<stdio.h>
main()
{
	char i='a';
	
	do{
		printf("%c\t",i);
		i+=4;
	}
	while(i<='z');
}