#include<stdio.h>
int main()
{
	int n,b,a[200],i,j,sum=0,count=0;
	scanf("%d %d",&n,&b);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sum+a[i]>b)
    {  
		  sum=0;
			i=i-1;
			count++;
			
	    }
		else
		{
			sum=sum+a[i];
		}	
	}

	  printf("%d",(sum<=b)?count+1:count);
   
}
