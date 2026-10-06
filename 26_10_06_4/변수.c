#include <stdio.h>
#include <string.h>

int main(void)
{
	int a = 10;
	int b, c;
	double da;
	char ch;

	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n",a);
	printf("변수 b의 값 : %d\n",b);
	printf("변수 c의 값 : %d\n",c);
	printf("변수 da의 값 : %.1lf\n",da);
	printf("변수 ch의 값 : %c\n\n",ch);

	//정수 자료형 

	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch2);
	printf("아스키 코드 값이 %d인 문자 : %c\n\n",ch2,ch1);

	// unsigned 자료형

	unsigned int ab;
	ab = 4294967295;
	printf("%d\n", ab);
	ab = -1;
	printf("%u\n\n", ab);
	/*
		unsigned 자료형을 사용할 때는 항상 양수만 저장하고 %u로 출력하기를 권장 
		음수로 저장시에 항상 양수로 처리하므로 예상결과가 다를 수 있다. 
	*/

	// 실수 자료형 
	/*
		float = 유효숫자 7자리
		double = 유효숫자 15자리
		long double = 유효숫자 15 이상 하지만 컴파일러마다 달라서 코드의 호환성을 보장할 수 없으니 주위

		유효숫자 범위 내에서 사용하는것이 좋음. 그 이상 넘어가면 오차 발생 
	*/

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 %.20f\n", ft);
	printf("double형 변수의 값 %.20lf\n\n", db);

	// 문자열 저장 
	/*
		프로그램을 작성하다 보면 숫자뿐 아니라 apple 같은 문자열도 변수에 담아야 할 때가 있다. 
		이런 경우 char형 배열 형태로 만들어 거기에 문자열을 저장한다. 
	*/

	char arr[10] = "apple"; // 길이는 문자열 보다 +1
	printf("%s %s\n", arr,"맛있다");
	/*
		왜 문자열의 길이보다 배열의 크기를 하나 더 크게 잡을까? 
		이유는 바로 컴파일러가 문자열의 끝에 \0 널 문자를 자동으로 추가하기 때문이다. 
		널 문자는 문자열의 끝을 표시하는 특별한 문자이다. 

	*/

	/*
		char 배열에 새로운 문자열을 저장하려면 어떻게 해야할까? 
		strcpy 함수를 사용해야 하고 사용하려면 헤더에 string.h를 포함시켜야 한다. 
	*/
	strcpy(arr, "banana"); 
	// 사용할때 배열 길이 확인 
	printf("%s\n", arr);


	// const를 사용한 변수 
	/*
		const를 사용한 변수는 선언할 때 그 앞에 const를 붙이면 초기화된 값을 바꿀 수 없다. 
		사용하는 이유는 값에 의미 있는 이름을 붙여 쓸 수 있고 값이 바뀌지 않음을 보장 받을 수 있다 
		예를 들면 세금 % 등등 
	*/



	return 0;
}