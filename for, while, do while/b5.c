#include<stdio.h>
int main()
{
	long long n;
	scanf("%lld", &n);
	for(int i=1; i<=n; i++)
	{
		if(n % i == 0) printf("%d ", i);
	}
	return 0;
}
