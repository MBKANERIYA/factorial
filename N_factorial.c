#include<stdio.h>

main()
{
	int i = 1,n,f = 1;
	
	printf("Enter value = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f = f * i;
		i++;
	}
	
	printf("factorial of %d is %d\n",n,f);
}