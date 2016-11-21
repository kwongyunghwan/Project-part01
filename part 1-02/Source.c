#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int choose;
	int a, b, result;

	while (1)
	{
		printf(" [1] 비트 AND(&)\n [2] 비트 OR(|)\n [3] 비트 XOR(^)\n [4] 비트 COMPLEMENT(~)\n [0] 또는 다른 번호는 종료\n");
		printf("하나를 선택해주세요.");
		scanf("%d", &choose);

		if (choose == 1) {
			printf("비트 연산 할 두 정수 입력 ==>\n");
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
			printf("비트 연산 할 두 정수 입력 ==>\n");
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
			printf("비트 연산 할 두 정수 입력 ==>\n");
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
			printf("비트 보수(~)연산 할 하나의 정수 입력 ==>\n");
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
			printf("프로그램을 종료합니다.");
			break;
		}
	}
}