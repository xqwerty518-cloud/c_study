#include <stdio.h>

int main(void) {

	//double height, weight;

	//printf("키를 입력해 주세요 : ");
	//scanf("%lf", &height);

	//printf("몸무게를 입력해 주세요 : ");
	//scanf("%lf", &weight);

	//if (height >= 187.5 && weight <= 80) {
	//	printf("OK!\n");
	//}
	//else if(height >= 187.5)
	//{
	//	printf("weight\n");
	//}
	//else
	//{
	//	printf("canselㅠㅠ\n");
	//}


	//switch 문 실습 

	int a, b;
	char op;

	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op) {
	case '+':
		printf("%d+%d = %d\n", a, b, a + b);
		break;
	case '-':
		printf("%d-%d = %d\n", a, b, a - b);
		break;
	case '*':
		printf("%d*%d = %d\n", a, b, a * b);
		break;
	case '/' :
		if (b == 0) {
			printf("0으로 나눌 수 없습니다.\n");
		}
		else {
			printf("%d/%d = %d\n", a, b, a / b);

		}
		break;
	default :
		printf("연산기호를 정확하게 작성해 주세요.\n");
	}

	return 0;
}