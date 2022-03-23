
#include <stdio.h>

int main()
{
	// 포인터

	//value라는 메모리 공간을 생성했습니다.


	int value = 10;

	int a = 50;

	printf("%p\n", &value);

	int* ptr = &value;

	printf("%d\n", *ptr);
	printf("포인터 변수의 값 : %d\n", *ptr);

	ptr = &a;

	*ptr = 1000;

	printf("포인터 변수의 값 : %d\n", *ptr);


	printf("int 포인터 사이즈 %d\n", sizeof(*ptr));


	double* cha;

	printf("cha 포인터 사이즈 : %d\n", sizeof(cha));

	//이중 포인터
	int x = 0;
	int * p = &x;
	int ** pp = &p;


	printf("%d\n", **pp);

	printf("변수 주소 %p\n", &x);
	printf("p 주소 %p\n", &p);
	printf("pp주소 %p\n", &pp);

	printf("이중 포인터로 x의 값 출력 %d\n", **pp);

	printf("pp주소 %p\n", pp);
	printf("**pp주소 %p\n", **pp);
	printf("**pp값 %d\n", **pp);

	scanf_s(" %d", &x);
	
	return 0;
}

