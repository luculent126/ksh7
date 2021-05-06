#include <stdio.h>
int main()
{
	int i, j, min, index, temp;
	int array[11] = {10, 8, 6, 20, 4, 3, 22, 1, 0, 15, 16};
	for (i = 0; i < 30; i++)
	{
		min = 100;
		for (j = i; j < 30; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for (i = 0; i < 30; i++)
	{
		printf("%d", array[i]);
	}
		return 0;
}