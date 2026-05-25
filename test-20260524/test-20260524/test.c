#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Point {
	int i;
	int j;
};

struct Point find_num(int arr[3][3], int x, int y, int k) {
	int i = 0;
	int j = y - 1;
	struct Point p = { -1,-1 };
	while (i<=x-1&&j>-0) {
		if (k < arr[i][j])
			j--;
		else if (k > arr[i][j])
			i++;
		else {
			p.i = i;
			p.j = j;
			return p;
		}
	}//找右上角或者左下角
	return p;
}
int main() {
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int k = 0;
	scanf("%d", &k);
	 struct Point ret=find_num(arr, 3, 3, k);
	printf("%d %d\n", ret.i,ret.j);
	return 0;
}