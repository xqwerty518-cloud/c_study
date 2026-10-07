#include <stdio.h>

int main(void) {

	// 대입 더하기 배기 곱하기 음수 연산 (자바와 같음)

	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;

	sum = a + b;
	sub = a - b; 
	mul = a * b;
	inv = -a;

	printf("산술연산자\n");
	printf("a 의 값 : %d\nb 의 값 : %d\n",a,b);
	printf("덧셈 : %d\n",sum);
	printf("뺄셈 : %d\n",sub);
	printf("곱셈 : %d\n",mul);
	printf("a의 음수 버전 : %d\n\n",inv);


	// 나누기 연산자와 나머지 연산자 

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("나누기 및 나머지 연산자\n");
	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n\n", orange);

	// 증감 연산자

	int c = 10, d = 10;

	++c; 
	--d;

	printf("증감 연산자\n");
	printf("c : %d\n", c);
	printf("d : %d\n", d);

	c = 5, d = 5;
	int pre, post;

	pre = (++c) * 3; // 전위 표기법
	post = (d++) * 3; // 후위 표기법

	printf("증감 연산 후 초깃값 c = %d, d = %d\n",c, d);
	printf("전위형 : (++c) * 3 = %d , 후위형: (d++) * 3 = %d\n\n", pre, post);


	a = 10, b = 20, c = 10;
	int res;

	printf("관계 연산자\na = %d, b = %d, c = %d\n",a,b,c);

	res = (a > b); // 10 > 20 이므로 결과는 0 
	printf("a > b : %d\n",res);

	res = (a >= b); 
	printf("a >= b : %d\n", res);

	res = (a < b);
	printf("a < b : %d\n", res);

	res = (a <= b);
	printf("a <= b : %d\n", res);

	res = (a <= c);
	printf("a <= c : %d\n", res);

	res = (a == c);
	printf("a == c : %d\n", res);

	res = (a == b);
	printf("a == b : %d\n", res);

	res = (a != c);
	printf("a != c : %d\n\n", res);

	//논리연산자

	a = 30;
	printf("논리연산자\na = %d\n", a);

	// 둘다 참이여야 함
	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res);

	// 하나만 참이여도 참
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res);

	// 참과 거짓을 바꿈 
	res = !(a >= 30);
	printf("!(a>=30) : %d\n", res);

	/*
		&& || 연산은 숏 서킷룰 이 적용 좌항만으로 연산 결과를 판단하는 기능임 
		&& 연산 기준 좌항이 거짓이라면 우항은 볼 필요도 없다 라는 것. 
	*/




	return 0;
}