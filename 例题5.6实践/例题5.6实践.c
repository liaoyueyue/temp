//求100~200之间的不能被3整除的数，并按每行10个数的格式输出
#include"stdio.h"
int main()
{
	int n, i = 0;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3==0)
		{
			continue;
		}
		printf("%5d", n);
		i++;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
