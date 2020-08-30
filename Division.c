#include<stdio.h>
int main()
{
	long long  int divisor,div,val=0,quo=0,i;
	scanf("%lld %lld",&div,&divisor);
	for(i=31;i>=0;i--)
	{
		if(val+(divisor<<i)<=div)
		{
			val=val+(divisor<<i);
			quo=quo|(1<<i);
		}
	}
	printf("%lld",quo);
}
