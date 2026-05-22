#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//方法1
void left_rotate(char* arr, int k) {
	int i = 0;
	int len = strlen(arr);
	k %= len;//防止输入的K大于字符串本身的长度
	for (i = 0; i < k; i++) {
		char tmp = arr[0];
		int j = 0;
		for (j = 0; j < len - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}

//方法2
void reverse(char* left, char* right) {
	assert(left && right);
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char arr[], int k) {
	int len = strlen(arr);
	k %= len;//防止越界
	reverse(arr,arr+k-1);//逆序左边
	reverse(arr+k,arr+len-1);//逆序右边部分
	reverse(arr,arr+len-1);//在逆序整个字符串，达到左旋转的目的
}

//主函数
int main() {
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr,k);
	printf("%s\n", arr);
	return 0;
}