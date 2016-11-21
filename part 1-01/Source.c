#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int choose = 0;
	float cm, inch, feet, m, yard;


	printf("1. 변환할 단위를 선택해주세요.");

	while (1)
	{
		printf("\n[1]미터(m) [2]인치(in) [3]피트(ft) [4]야드(yd) [0]또는 다른번호 입력 시 종료 됩니다.\n");
		scanf("%d", &choose);

		if (choose == 1) {
			printf("2. 변환할 값(센티미터)을 입력해주세요. ==> ");
			scanf("%f", &cm);
			m = cm * 0.01;
			printf("입력된 값은 %3.2f이며 변환된 값은 %3.3f (미터)입니다.", cm, m);
			continue;
		}
		else if (choose == 2) {
			printf("2. 변환할 값(센티미터)을 입력해주세요. ==>  ");
			scanf("%f", &cm);
			inch = cm * 0.393701;
			printf("입력된 값은 %3.2f이며 변환된 값은 %3.3f (인치)입니다.", cm, inch);
			continue;
		}
		else if (choose == 3) {
			printf("2. 변환할 값(센티미터)을 입력해주세요. ==> ");
			scanf("%f", &cm);
			feet = cm * 0.032808;
			printf("입력된 값은 %3.2f이며 변환된 값은 %3.3f(피트)입니다.", cm, feet);
			continue;
		}
		else if (choose == 4) {
			printf("2. 변환할 값(센티미터)을 입력해주세요. ==> ");
			scanf("%f", &cm);
			yard = cm * 0.010936;
			printf("입력된 값은 %3.2f이며 변환된 값은 %3.3f(야드)입니다.", cm, yard);
			continue;
		}
		else {
			printf("프로그램을 종료합니다.");
			break;
		}
	}
	return 0;
}
