#include<stdio.h>
int main() {
	int m, n, i, j;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	if (m >= 0 && n >= 0)
	{
		for (i = 1;n >= i;i++)
		{
			for (j = 1;m >= j;j++)
			{
				printf("%d%d ", i, j);
			}
			printf("\n");
		}
	}

}