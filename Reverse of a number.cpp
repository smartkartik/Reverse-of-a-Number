#include<stdio.h>
main()
{
	long int n,r,s=0;
	printf("Enter the number ");
	scanf("%ld",&n);
	while(n>0)
	{
	r=n%10;
	s=(s*10)+r;
	n=n/10;
}
	printf("Reverse number- %ld",s);
	
	return s;
}
