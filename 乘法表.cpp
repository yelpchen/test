#include <stdio.h>
//�žų˷���
//ijѭ����i��1-9ѭ����Ϊ��һ�У�j<i��1��i-1ѭ��Ϊ�ڶ�����������ѭ��������ӡ
//1.�����ĳ˷���
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

