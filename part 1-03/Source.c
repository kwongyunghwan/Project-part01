#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int swapA, swapB, choose, dump;

	printf("��ȯ�� �� ������ �Է��ϼ���. ==> \n");
	scanf("%d %d", &swapA, &swapB);
	printf("�Է��� �� ��: x = %d and y = %d ", swapA, swapB);
	printf("\n[1]�ӽ�������� �̿���\n[2]������ �������� ��ȯ��� \n[3]������ ���������� ��ȯ��� \n[4]XOR ������ ^ �̿��� \n[0]�Ǵ� �ٸ���ȣ �Է� �� ���� �˴ϴ�.\n");
	scanf("%d", &choose);

	if (choose == 1) {
		dump = swapA;
		swapA = swapB;
		swapB = dump;
		printf("[�ӽ������]��ȯ�� �� ��: x = %d and y = %d \n", swapA, swapB);
	}
	else if (choose == 2) {
		;
		swapA = swapA + swapB;
		swapB = swapA - swapB;
		swapA = swapA - swapB;
		printf("[����������]��ȯ�� �� ��: x = %d and y = %d \n", swapA, swapB);
	}
	else if (choose == 3) {
		swapA = swapA * swapB;
		swapB = swapA / swapB;
		swapA = swapA / swapB;
		printf("[������������]��ȯ�� �� ��: x = %d and y = %d \n", swapA, swapB);

	}
	else if (choose == 4) {
		swapA = swapA^swapB;
		swapB = swapA^swapB;
		swapA = swapA^swapB;
		printf("[XOR ������ ^]��ȯ�� �� ��: x = %d and y = %d \n", swapA, swapB);
	}
	else {
		printf("���α׷��� �����մϴ�.");
	}

	return 0;
}
