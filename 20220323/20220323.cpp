
#include <stdio.h>

int main()
{
	// ������

	//value��� �޸� ������ �����߽��ϴ�.


	int value = 10;

	int a = 50;

	printf("%p\n", &value);

	int* ptr = &value;

	printf("%d\n", *ptr);
	printf("������ ������ �� : %d\n", *ptr);

	ptr = &a;

	*ptr = 1000;

	printf("������ ������ �� : %d\n", *ptr);


	printf("int ������ ������ %d\n", sizeof(*ptr));


	double* cha;

	printf("cha ������ ������ : %d\n", sizeof(cha));

	//���� ������
	int x = 0;
	int * p = &x;
	int ** pp = &p;


	printf("%d\n", **pp);

	printf("���� �ּ� %p\n", &x);
	printf("p �ּ� %p\n", &p);
	printf("pp�ּ� %p\n", &pp);

	printf("���� �����ͷ� x�� �� ��� %d\n", **pp);

	printf("pp�ּ� %p\n", pp);
	printf("**pp�ּ� %p\n", **pp);
	printf("**pp�� %d\n", **pp);

	scanf_s(" %d", &x);
	
	return 0;
}

