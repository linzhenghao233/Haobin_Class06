#include <stdio.h>
#include <stdlib.h>

int factorial(int);//阶乘
int arithmetic(int);//等差
void hannuota(int, char, char, char);

int main(void) {
	int num = 3;

	printf("%d的阶乘是：%d\n", num, factorial(num));
	printf("%d的累加是：%d\n", num, arithmetic(num));

	//汉诺塔
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	int n;

	printf("请输入要移动的盘子个数：");
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
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", num, A, C);
	else {
		hannuota(num - 1, A, C, B);
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n", num, A, C);
		hannuota(num - 1, B, A, C);
	}
}
