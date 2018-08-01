#include<stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum+n%2;
		n=n/2;
	}

	printf("%d",sum);

	return 0;
}
