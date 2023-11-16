#include<stdio.h>

void turn(int x[][30], int degree);
int main()
{
	int arr[30][30] = { 0, };
	int x = 0, y = 0;
	int n, num = 1;
	int i = 0;
	int j, k;
	int angle;
	int one = 1;

	printf("30 이하 양의 정수 입력: ");
	scanf("%d", &n);

	while (i < n)
	{
		arr[x][y] = num;
		++num;

		if (i < n - 1)
			y++;

		++i;
	}

	j = n - 1;

	while (j > 0)
	{
		for (k = 0; k < j; k++)
		{
			x += one;
			arr[x][y] = num++;
		}

		one *= -1;

		for (i = 0; i < j; i++)
		{
			y += one;
			arr[x][y] = num;
			++num;
		}

		j--;
	}

	printf("달팽이 배열: \n");

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
			printf("%5d ", arr[i][k]);
		printf("\n");
	}

	printf("===========================================================");
	printf("===========================================================\n");

	printf("회전 각도(90, 180, 270): ");
	scanf("%d", &angle);

	turn(arr, angle);

	return 0;
}
void turn(int x[][30], int angle)
{
	int i = 0;
	int j, n = 0;
	int y[30][30];

	while (i < 30)
	{
		n++;
		if (x[i][30] == 0)
			break;
		i++;
	}

	if (angle == 90)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				y[i][j] = x[n - 1 - j][i];
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				printf("%5d ", y[i][j]);
			printf("\n");
		}
		return 1;
	}

	else if (angle == 180)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				y[i][j] = x[n - 1 - i][n - 1 - j];
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				printf("%5d ", y[i][j]);
			printf("\n");
		}
		return 1;
	}

	else if (angle == 270)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				y[i][j] = x[j][n - 1 - i];
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				printf("%5d ", y[i][j]);
			printf("\n");
		}
		return 1;
	}

	else
	{
		printf("90, 180, 270 중 선택하시오");
		return 0;
	}
}