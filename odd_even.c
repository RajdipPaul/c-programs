#include<stdio.h>
int main ()
{
	int n;

	printf("Enter a number :\n");
	scanf("%d",&n);

	if(n % 2  == 0)
	{
		printf("Your Num is Even\n");
	} else {
		printf("Your Num is Odd\n");
	}
}