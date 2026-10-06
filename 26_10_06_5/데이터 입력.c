#include <stdio.h>

int main(void) {

	/*
		scanf 함수의 사용법 
	*/

	/*int a;
	scanf("%d", &a);
	printf("입력된 값 % : %d\n", a);*/

	/*
		scanf 함수에서 변수명을 지정할 때는 &를 붙여야 함. 

		scanf 함수에서 사용한 변환 문자와 맞는 형태의 데이터를 입력해야 함. 
	*/

	// scanf 함수를 사용한 연속 입력 

	/*int age;
	double height;
	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height); 
	
	아래 예제를 위해 주석 처리 


	printf("나이는 %d살, 키는 %.1lfcm입니다.\n\n", age, height);*/


	// 문자와 문자열의 입력 
	/*
		char형 변수에 문자를 입력할 때는 키보드로 입력하는 모든 문자가 대상이 된다. 
		즉 스페이스바 엔터도 하나의 문자로 전달된다. 
		문자열은 char형 배열에 %s 변환문자를 사용해 입력하는데 문자열을 입력할 때는 
		배열명에 &을 붙이지 않는다. 
		또한 스페이스나 엔터 탭등을 만나면 바로 전까지만 저장이 되므르 공백없이 연속으로 입력해야 한다. 
	*/
	
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name); // &을 붙이지 않는다. 
	printf("%s의 학점은 %c입니다. \n", name, grade);

	return 0;
}