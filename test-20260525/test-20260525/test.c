#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_left_move(char arr1[], char arr2[]) {
	int len = strlen(arr1);
	int len1 = strlen(arr2);
	if (len != len1)
		return 0;
	strncat(arr1, arr1, len);
	char* ret = strstr(arr1, arr2);//将两个相同的字符串叠加，这个叠加后的字符串包含所有旋转排序后的结果
	if (ret == NULL)
		return 0;
	else
		return 1;
}

int main() {
	char arr1[40] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("have\n");
	else
		printf("doesn't have\n");
	return 0;
}