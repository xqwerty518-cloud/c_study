#include <stdio.h>

int main(void) {
	
	printf("%d\n", 10);

	printf("%lf\n", 3.4);


	printf("%.1lf\n", 3.45);
	// 잘리는 값은 반올림 해서 출력 소수점 첫째 자리까지 출력하겠다고 했는데 
	// 출력할 실수는 3.45 

	printf("%.10lf\n", 3.4);


	printf("%d과 %d의 합은 %d 입니다.\n",10,20,10+20);
	printf("%.1lf - %.1lf = %.1lf",3.4,1.2,3.4-1.2);


	return 0; 
}