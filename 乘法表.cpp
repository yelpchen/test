#include <stdio.h>
//九九乘法表
//ij循环，i从1-9循环，为第一列，j<i，1—i-1循环为第二乘数，依次循环，最后打印
//1.完整的乘法表
int main()
{
	int i = 0;
	int j = 0;
	int ji = 0;
	/*int ji = 0;*/
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %2d  ", i,j,i * j);
		}
		printf("\n");
	}
	return 0;
}

