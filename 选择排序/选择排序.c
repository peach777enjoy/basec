// 选择排序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//如果数组作为函数参数，数组形参退化为指针，int a[1]或int a[10]相当于int*a
void sort_array(int a[], int n)
{
	//!!!这里a相当于指针用，指针类型32位，长度为4个字节。
	int t=sizeof(a)/sizeof(a[0]);
	printf("print_array:t=%d\n", t);

	//选择法排序
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[] = { 10,7,1,9,4,6,7,3,2,0 };
	//a本身数组类型，4*10字节
	int n = 0;
	int i = 0;
	n = sizeof(a) / sizeof(a[0]);//元素个数

	printf("排序前\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	sort_array(a, 10);

	printf("\n");
	system("pause");
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
