#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 1;
	int oct, hex, value, counts;
	int a = 0;
	int b = 0;
	int c = 0;

	while (num != 0)
	{
		printf("\n������ �ϳ� �Է��ϼ���. >> ");
		scanf("%d", &num);

		oct = num;
		hex = num;
		value = num;
		if (num == 0)
			break;

		printf("\n\n       ������: ");
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (num & (1 << i)) ? 1 : 0);
		}

		printf("\n\n       ������: %8o       ", oct);
		for (int count = 1; oct > 0; count = count * 10)
		{
			a += ((oct % 8)* count);
			oct = oct / 8;
		}
		printf("%d", a);
		a = 0;

		printf("\n\n       16����: %8X       ", hex);
		counts = 0;
		while (hex > 0)
		{
			b = hex % 16;
			hex = hex / 16;
			counts++;
		}

		for (int i = counts; i>0; i--)
		{
			value = num;

			for (int j = 0; j < i - 1; j++)
			{
				value = value / 16;
			}
			c = value % 16;
			if (c < 10)
			{
				printf("%d", c);
			}
			else
			{
				printf("%c", c + 55);
			}
		}
	}

	printf("�����մϴ�. \n");

	return 0;

}

