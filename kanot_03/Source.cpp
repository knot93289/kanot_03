#include<stdio.h>
int main()
{
	int point;
	printf("Please enter points : ");
	scanf_s("%d", &point);
	if (point >= 95)
	{
		printf("Conratulations\n");
		printf("C Language programming subject\n");
		printf("You get grade A+\n");
	}
	else
		if (point >= 80)
			printf("You get grade A\n");
	else
		if (point >= 70)
			printf("You get grade B\n");
		else
			if (point >= 60)
				printf("You get grade C\n");
			else
				if (point >= 50)
					printf("You get grade D\n");
				else
					printf("You get grade F\n");
	printf("See you again! Next couse");


	return 0;
}