#include <stdio.h>

int main(void) {

	

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j || (i + j) == 4) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	
	}

	printf("\n\n\n");

	int sosu;

	printf("2 이상의 정수를 입력해 주세요 : ");
	scanf("%d", &sosu);


	int count = 0;

	if (sosu >= 2) {
		
		for (int i = 2; i <= sosu; i++) {
			int isprime = 1;
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					isprime = 0;
					break;
				}
			}
			if (isprime) {
				printf("%3d ", i);
				count++;
				if (count % 5 == 0) {
					printf("\n");
				}
			}
		}
		
	}
	else {
		printf("\n2 이상의 정수를 입력하셔야 합니다.\n다시 입력해 주세요 \n");

	}

	

	

	return 0;
}