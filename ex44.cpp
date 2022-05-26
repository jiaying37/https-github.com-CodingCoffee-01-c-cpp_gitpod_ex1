#include<stdio.h>

int main()
{
	int array[5] = {8,6,5,4,1};
	int begin = 0, end = 4;

	printf("之前的數列為：");
	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);
	printf("\n");

	while (begin < end)
	{
		int temp = array[begin];
		array[begin] = array[end];
		array[end] = temp;
		begin++;
		end--;
	}

	printf("之後的數列為：");
	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);
	printf("\n");
	return 0;
}
