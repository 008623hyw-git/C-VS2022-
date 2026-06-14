#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	int flag1 = 0;//升序，如果前面数字小于后面的数字，flag1=1
	int flag2 = 0;//降序，如果前面数字大于后面的数字，flag2=1
	int arr[50] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i > 0) {
			if (arr[i] > arr[i - 1])
				flag1 = 1;
			else if (arr[i] < arr[i - 1])
				flag2 = 1;
			else
				;
		}
	}
	if (flag1 + flag2 <= 1)
		printf("sorted\n");
	else
		printf("unsorted\n");//循环走完后，如果flag1+flag2==1，那么这个数列是有序的
	return 0;
}