#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int choose;
	int a, b, result;

	while (1)
	{
		printf(" [1] ��Ʈ AND(&)\n [2] ��Ʈ OR(|)\n [3] ��Ʈ XOR(^)\n [4] ��Ʈ COMPLEMENT(~)\n [0] �Ǵ� �ٸ� ��ȣ�� ����\n");
		printf("�ϳ��� �������ּ���.");
		scanf("%d", &choose);

		if (choose == 1) {
			printf("��Ʈ ���� �� �� ���� �Է� ==>\n");
			scanf("%d", &a);
			scanf("%d", &b);
			result = a&b;

			printf("x=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (a & 1) ? '1' : '0', a);

			printf("y=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((b >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (b & 1) ? '1' : '0', b);

			printf("x&y=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((result >> i) & 1) ? '1' : '0');
			}
			printf("%c\n", (result & 1) ? '1' : '0');
			continue;
		}

		if (choose == 2) {
			printf("��Ʈ ���� �� �� ���� �Է� ==>\n");
			scanf("%d", &a);
			scanf("%d", &b);
			result = a | b;

			printf("x=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (a & 1) ? '1' : '0', a);

			printf("y=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((b >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (b & 1) ? '1' : '0', b);

			printf("x|y=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((result >> i) & 1) ? '1' : '0');
			}
			printf("%c\n", (result & 1) ? '1' : '0');
			continue;
		}

		if (choose == 3) {
			printf("��Ʈ ���� �� �� ���� �Է� ==>\n");
			scanf("%d", &a);
			scanf("%d", &b);
			result = a^b;

			printf("x=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (a & 1) ? '1' : '0', a);

			printf("y=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((b >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (b & 1) ? '1' : '0', b);

			printf("x^y=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((result >> i) & 1) ? '1' : '0');
			}
			printf("%c\n", (result & 1) ? '1' : '0');
			continue;
		}

		if (choose == 4) {
			printf("��Ʈ ����(~)���� �� �ϳ��� ���� �Է� ==>\n");
			scanf("%d", &a);
			result = ~a;

			printf("x=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((a >> i) & 1) ? '1' : '0');
			}
			printf("%c %d\n", (a & 1) ? '1' : '0', a);

			printf("~x=");
			for (int i = 31; i > 0; i--) {
				printf("%c", ((result >> i) & 1) ? '1' : '0');
			}
			printf("%c\n", (result & 1) ? '1' : '0');
			continue;
		}
		else
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}
}