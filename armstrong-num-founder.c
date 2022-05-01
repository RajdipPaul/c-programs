#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool isArmsstrong(int );

void main() {
	int lo, hi, i;

	printf("\nEnter the lower limit: ");
	scanf("%d", &lo);


	printf("\nEnter the higer limit: ");
	scanf("%d", &hi);

	if (hi < lo) {
		printf("\nWrong Limit");
		exit(0);
	}

	for (i = lo; i <= hi; i++) {
		if (isArmsstrong(i)) {
			printf("%d\n", i);
		}
	}
}

bool isArmsstrong(int num) {
	int bkp = num, dig, sum = 0;

	while (num != 0) {
		dig = num % 10;
		sum += pow(dig, 3);
		num = num / 10;
	}

	if (sum == bkp) return true;
	else return false;
}



// #include <stdio.h>
// void main ()
// {
// 	int m, n, i, a = 1,b;

// 	printf("Enter the Lower limit :\n");
// 	scanf("%d",&n);

// 	printf("Enter the Upper limit :\n");
// 	scanf("%d",&m);


// 	if(n > m)
// 	{
// 		printf("Lower limit cannot be bigger than Upper limit\n");
// 	}

// 	for(i=n; i <= m ; i++)
// 	{
// 		while(i != 0)
// 		{
// 			a = i % 10;
// 			b = b + (a*a*a);
// 			a = i / 10;
// 		}

// 		if (b == i)
// 			printf("%d",i);
// 	}

// }

