#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n = 0;
	//int m = 0;
	//scanf("%d %d", &n, &m);
	//int arr[10][10] = { 0 };//C99支持直接写arr[n][m];
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < n; i++) {
	//	for (j = 0; j < m; j++) {
	//		scanf("%d", &arr[i][j]);
	//	}
	//}

	//for (i = 0; i < m; i++) {
	//	for (j = 0; j < n; j++) {
	//		printf("%d ", arr[j][i]);//打印
	//	}
	//	printf("\n");
	//}
	scanf("%d", &n);
	int arr[10][10] = { 0 };//C99支持直接写arr[n][m];
	int i = 0;
	int j = 0;
	int flag = 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			if (arr[i][j] != 0) {
				flag = 0;//不是上三角矩阵
				goto end;
			}
		}
	}
	end:
	if (flag == 0)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}