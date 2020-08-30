#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d %d",&i,&n);
	if((n & 1<<(i-1))==0)
  {
		printf("not set");
	 }
	else
  {
		printf("set");
	}
	return (0);
}
