#include <stdio.h>

void _initialize(int *lookup)
{
	int i;
	for(i=0;i<100;i++)
	{
		lookup[i] = -1;
	}

}

int fib(int n,int *lookup)
{
	if(lookup[n] == -1)
	{
		if(n <= 1)	
			lookup[n] = n;

		else	
			lookup[n] = fib(n-1,lookup) + fib(n-2,lookup);

	}
		
	return lookup[n]; 
	
}

int main()
{
	int t;
	scanf("%d",&t);
	int lookup[100];
	_initialize(lookup);
	while(t--)
	{
		int n;
		scanf("%d\n",&n);
		printf("%d\n",fib(n,lookup));

	}
}
