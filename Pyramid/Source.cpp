#include <stdio.h>
int main()
{
	int i, j, x;
	scanf_s("%d", &x);
	if (x >= 0)
	{
		for (i = 1; i <= x; i++)
		{
			for (j = 1; j <= (x * 2) - 1; j++)
			{
				if (j + i > x && j - i <= x - 1) printf("*");
				else printf(" ");
			}
			printf("\n");
		}
	}
	else printf("Error");
	return 0;
}