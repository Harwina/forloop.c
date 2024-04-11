#include<stdio.h>
main()
{
	int n,f,l,sum;
	printf("enter any number=");
	scanf("%d",&n);
	 
	 l=n%10;
	 
	 while(n>=10)
	 {
		 n=n/10;
	 }
	 f=n;
	 sum=f+l;
	 printf("sum=%d",sum);
}