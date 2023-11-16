#include <stdio.h>
//2019203102
//유지성

typedef struct student {
	int name;
	int zero;
	int one;
	int two;
}Student;

void sort(Student s[]);
void print(Student s[]);

int main()
{
	Student s[50];
	
	for (int i = 0; i < 50; i++)
	{
		s[i].name = i + 1;
		s[i].zero = rand() % 101;
		s[i].one = rand() % 101;
		s[i].two = rand() % 101;
	}
	print(s);

    sort(s);
	
	print(s);

	return 0;
}


void sort(Student s[])
{
	struct student temp;
	int num;

	while (1)
	{
		printf("과목 입력: ");
		scanf("%d", &num);
		printf("=========================================\n");
		
		if (num == 0)
		{
			for (int i = 0; i < 50; i++)
			{
				for (int j = 0; j < 50 - 1; j++)
				{
					if (s[j].zero > s[j + 1].zero)
					{
						temp = s[j];
						s[j] = s[j + 1];
						s[j + 1] = temp;
					}
				}
			}
			break;
		}

		else if (num == 1)
		{
			for (int i = 0; i < 50; i++)
			{
				for (int j = 0; j < 50 - 1; j++)
				{
					if (s[j].one > s[j + 1].one)
					{
						temp = s[j];
						s[j] = s[j + 1];
						s[j + 1] = temp;
					}
				}
			}
			break;
		}

		else if (num == 2)
		{
			for (int i = 0; i < 50; i++)
			{
				for (int j = 0; j < 50 - 1; j++)
				{
					if (s[j].two > s[j + 1].two)
					{
						temp = s[j];
						s[j] = s[j + 1];
						s[j + 1] = temp;
					}
				}
			}
			break;
		}
		
		else
			printf("0, 1, 2 중 입력\n\n");
	}
}

void print(Student s[])
{
	int average;
	
	printf("\n학번\t 0\t 1\t 2\t 평균\n");
	printf("------------------------------------------\n");

	for (int i = 0; i < 50; i++)
	{
		average = (s[i].zero + s[i].one + s[i].two) / 3;
		
		printf("%d\t %d\t %d\t %d\t %d\n", s[i].name, s[i].zero, s[i].one, s[i].two, average);
		
	}
	printf("\n=========================================\n");
}