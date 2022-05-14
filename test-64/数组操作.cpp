#define _CRT_SECURE_NO_WARNINGS 1

//array_operation

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

#include <stdio.h>

void print(int* arr, int sz)
{
	printf("[");
	for (int i = 0; i < sz; i++)
	{
		if (i != sz - 1)
		{
			printf("%d, ", arr[i]);
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
	printf("]\n");
}

void init(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("原本\n");
	print(arr, sz);
	printf("调换后\n");
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	printf("初始化后\n");
	print(arr, sz);
	return 0;
}
