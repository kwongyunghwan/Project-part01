#include <stdio.h>

void main() {
	int i, j;
	int count, num = 2;

	for (i = 0; i<10; i++) {
		for (j = i; j<9; j++)
			printf("%c ", ' ');
		for (count = 0; count <= i; num++) {
			for (j = 2; j<num; j++) {
				if (num % j == 0)
					break;
			}
			if (j == num) {
				printf("%3d ", num);
				count++;
			}
		}
		printf("\n");
	}
}