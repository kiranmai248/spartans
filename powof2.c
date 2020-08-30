#include<stdio.h>
void powfun(int n)
{
	if(n & (n-1)==0)
	{
		printf("power of 2");
	}
	else
	  printf("not the power of 2");
}
int main()
{
	int n;
	scanf("%d",&n);
	powfun(n);
	
}
