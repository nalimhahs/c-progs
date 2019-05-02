#include <stdio.h>

int mode(int a[], int n)
{
	int maxValue = 0, maxCount = 0, i, j;

	for (i = 0; i < n; i++)
	{
		int count = 0;

		for (j = 0; j < n; j++)
		{
			if (a[j] == a[i])
				count++;
		}

		if (count > maxCount)
		{
			maxCount = count;
			maxValue = a[i];
		}
	}

	return maxValue;
}

int counter(int a[], int n, int s)
{
	int j, count = 0;

	for (j = 0; j < n; j++)
	{
		if (a[j] == s)
			count++;
	}

	return count;
}

void multimode(int a[], int n)
{
	int cache[20], count = 0, j, i, k = 0, maxCount, m;

	// for (j = 0; j < k; j++)
	// {
	// 	if (cache[j] == a[i])
	// 	{
	// 		goto cont;
	// 	}
	// }

	for (i = 0; i < n; i++)
	{
		m = mode(a, n);
		if (counter(a, n, m) == maxCount)
		{
			cache[k] = m;
			k++;
			for (i = 0; i < n; i++)
			{
				if (a[i] == cache[k])
				{
					a[i] = NULL;
					break;
				}
			}
		}
		//cont:
	}

	printf("\nMode is: ");

	for(i = 0; i < k; i++)
	{
		printf("%d, ", cache[i]);
	}
	
}

float median(int a[], int n)
{
	int i, j, pos, small, temp;

	for (i = 0; i < n - 1; i++)
	{
		small = a[i];
		pos = i;
		for (j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				small = a[j];
				pos = j;
			}
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp;
		}
	}

	if (n % 2 == 1)
	{
		return (float)a[n / 2];
	}
	else
	{
		return (float)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
	}
}

void main()
{
	int nos[100], i, n;

	printf("Enter no of numbers: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &nos[i]);
	}

	//printf("\nMode is %d.\n", mode(nos, n));
	printf("\nMedian is %f.\n", median(nos, n));
	multimode(nos, n);
}
