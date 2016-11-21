#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int swapA, swapB, choose, dump;

	printf("교환할 두 정수를 입력하세요. ==> \n");
	scanf("%d %d", &swapA, &swapB);
	printf("입력한 두 수: x = %d and y = %d ", swapA, swapB);
	printf("\n[1]임시저장장소 이용방법\n[2]덧셈과 뺄셈으로 교환방법 \n[3]곱셈과 나눗셈으로 교환방법 \n[4]XOR 연산자 ^ 이용방법 \n[0]또는 다른번호 입력 시 종료 됩니다.\n");
	scanf("%d", &choose);

	if (choose == 1) {
		dump = swapA;
		swapA = swapB;
		swapB = dump;
		printf("[임시저장소]교환한 두 수: x = %d and y = %d \n", swapA, swapB);
	}
	else if (choose == 2) {
		;
		swapA = swapA + swapB;
		swapB = swapA - swapB;
		swapA = swapA - swapB;
		printf("[덧셈과뺄셈]교환한 두 수: x = %d and y = %d \n", swapA, swapB);
	}
	else if (choose == 3) {
		swapA = swapA * swapB;
		swapB = swapA / swapB;
		swapA = swapA / swapB;
		printf("[곱셈과나눗셈]교환한 두 수: x = %d and y = %d \n", swapA, swapB);

	}
	else if (choose == 4) {
		swapA = swapA^swapB;
		swapB = swapA^swapB;
		swapA = swapA^swapB;
		printf("[XOR 연산자 ^]교환한 두 수: x = %d and y = %d \n", swapA, swapB);
	}
	else {
		printf("프로그램을 종료합니다.");
	}

	return 0;
}
