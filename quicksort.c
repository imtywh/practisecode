#include <stdio.h>
#include <stdlib.h>


int partition(int a[], int left, int right)
{
	int i = left;
	int j = right;
	int temp = a[i];
	while (i<j)
	{
		while (i<j && a[j] >= temp)
			j--;
		if (i<j)
			a[i] = a[j];
		while (i<j && a[i] <= temp)
			i++;
		if (i<j)
			a[j] = a[i];
	}
	a[i] = temp;
	return i;
}
void quickSort(int a[], int left, int right)
{
	int dp;
	if (left<right)
	{
		dp = partition(a, left, right);
		quickSort(a, left, dp - 1);
		quickSort(a, dp + 1, right);
	}
}

int main()
{
	int a[9] = { 5, 4, 9, 1, 7, 6, 2, 3, 8 };
	quickSort(a, 0, 8);
        int  i;
	for (i = 0; i<9; i++)
	{
		printf("%d ",a[i]);
	}
        printf("\n");
	return 0;
}
