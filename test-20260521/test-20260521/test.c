#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int n = 0;
	int sum = 0;
	int i = 0;
	scanf("%d", &n);
	while (n) {
		int bit = n % 10;
		if (bit % 2 == 1)
			bit = 1;
		else
			bit = 0;
		sum += bit * pow(10, i++);
		n /= 10;
	}
	printf("%d", sum);  //改数字：偶数改0，奇数改1

	int n = 0;
	while (scanf("%d", &n) == 1) {
		int i = 0;
		int j = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (i + j < n - 1)
					printf("  ");
				else
					printf("* ");
			}
			printf("\n");
		}
	}  //打印直角三角图案

	double price = 0;
	int m = 0;
	int d = 0;
	int v = 0;
	scanf("%lf %d %d %d", &price, &m, &d, &v);//v的意思是voucher
	if (m == 11 && d == 11) {
		price=price*0.7-v*50;
	}
	else if (m == 12 && d == 12) {
		price = price * 0.8 - v * 50;
	}
	else {
		
	}
	if (price < 0.0)
		printf("%.2lf\n", 0);
	else
		printf("%.2lf\n", price); // .2意思是保留两位小数  //购物

	//猜凶手：通过4个供词判断哪个是凶手，已知3个人说真话，一个人说了假话
	//A说：不是我
	//B说：是C
	//C说：是D
	//D说：C在胡说
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++) {
		if ((killer!='a') + (killer=='c') + (killer=='d') + (killer!='d') == 3) {
			printf("%c\n", killer);	
		}
	}  //猜凶手

	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1) {  //第三行第二列那里开始计算
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}//杨辉三角
	return 0;
}