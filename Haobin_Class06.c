#include <stdio.h>
#include <stdlib.h>

int factorial(int);//�׳�
int arithmetic(int);//�Ȳ�
void hannuota(int, char, char, char);

int main(void) {
	int num = 3;

	printf("%d�Ľ׳��ǣ�%d\n", num, factorial(num));
	printf("%d���ۼ��ǣ�%d\n", num, arithmetic(num));

	//��ŵ��
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	int n;

	printf("������Ҫ�ƶ������Ӹ�����");
	scanf_s("%d", &n);

	hannuota(n, 'A', 'B', 'C');

	exit(0);
}

int factorial(int num){
	if (num == 1)
		return num;
	else
		return num * factorial(num - 1);
}

int arithmetic(int num) {
	if (num == 1)
		return num;
	else
		return num + arithmetic(num - 1);
}

void hannuota(int num, char A, char B, char C) {
	if (num == 1)
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", num, A, C);
	else {
		hannuota(num - 1, A, C, B);
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n", num, A, C);
		hannuota(num - 1, B, A, C);
	}
}
