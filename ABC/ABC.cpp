#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
	int n[3], a, b, c,min,middle,max;
	char alphabet[4];
	if (scanf_s("%d %d %d", &n[0], &n[1], &n[2]))
	{
		getchar();
		scanf("%c%c%c", &alphabet[0], &alphabet[1], &alphabet[2]);
		if (n[0] > n[1] && n[0] > n[2]) //10 3 7 and 10 7 3
		{
			c = n[0];
			if (n[2] > n[1]) 
			{
				b = n[2];
				a = n[1];
			}
			else if (n[1] > n[2]) 
			{
				b = n[1];
				a = n[2];
			}
		}
		else if (n[1] > n[0] && n[1] > n[2]) //3 10 7 and 7 10 3
		{
			c = n[1];
			if (n[2] > n[0]) 
			{
				b = n[2];
				a = n[0];
			}
			else if (n[0] > n[2]) 
			{
				b = n[0];
				a = n[2];
			}

		}

		else if (n[2] > n[0] && n[2] > n[1]) //3 7 10 and 7 3 10
		{
			c = n[2];
			if (n[1] > n[0]) 
			{
				b = n[1];
				a = n[0];
			}
			if (n[0] > n[1])
			{
				b = n[0];
				a = n[1];
			}

		}
		min = a;
		middle = b;
		max = c;
		for (int loop = 0;loop < 3;loop++)
		{
			if (alphabet[loop] == 'A')
			{
				printf("%d ", min);
			}
			else if (alphabet[loop] == 'B')
			{
				printf("%d ", middle);
			}
			else if (alphabet[loop] == 'C')
			{
				printf("%d ", max);
			}
		}
	}
	else printf("Error");
	return 0;
}