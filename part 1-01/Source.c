#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int choose = 0;
	float cm, inch, feet, m, yard;


	printf("1. ��ȯ�� ������ �������ּ���.");

	while (1)
	{
		printf("\n[1]����(m) [2]��ġ(in) [3]��Ʈ(ft) [4]�ߵ�(yd) [0]�Ǵ� �ٸ���ȣ �Է� �� ���� �˴ϴ�.\n");
		scanf("%d", &choose);

		if (choose == 1) {
			printf("2. ��ȯ�� ��(��Ƽ����)�� �Է����ּ���. ==> ");
			scanf("%f", &cm);
			m = cm * 0.01;
			printf("�Էµ� ���� %3.2f�̸� ��ȯ�� ���� %3.3f (����)�Դϴ�.", cm, m);
			continue;
		}
		else if (choose == 2) {
			printf("2. ��ȯ�� ��(��Ƽ����)�� �Է����ּ���. ==>  ");
			scanf("%f", &cm);
			inch = cm * 0.393701;
			printf("�Էµ� ���� %3.2f�̸� ��ȯ�� ���� %3.3f (��ġ)�Դϴ�.", cm, inch);
			continue;
		}
		else if (choose == 3) {
			printf("2. ��ȯ�� ��(��Ƽ����)�� �Է����ּ���. ==> ");
			scanf("%f", &cm);
			feet = cm * 0.032808;
			printf("�Էµ� ���� %3.2f�̸� ��ȯ�� ���� %3.3f(��Ʈ)�Դϴ�.", cm, feet);
			continue;
		}
		else if (choose == 4) {
			printf("2. ��ȯ�� ��(��Ƽ����)�� �Է����ּ���. ==> ");
			scanf("%f", &cm);
			yard = cm * 0.010936;
			printf("�Էµ� ���� %3.2f�̸� ��ȯ�� ���� %3.3f(�ߵ�)�Դϴ�.", cm, yard);
			continue;
		}
		else {
			printf("���α׷��� �����մϴ�.");
			break;
		}
	}
	return 0;
}
