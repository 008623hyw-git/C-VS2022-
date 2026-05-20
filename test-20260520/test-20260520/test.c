#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

void* my_memmove(void* dest, void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	if (dest < src) {
		while (num--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}//从前向后拷贝
	}
	else {
		while (num--)
			*((char*)dest + num)=*((char*)src + num);//num进来的时候已经是19个字节了，因为num--, src跳过19个字节；从后往前拷贝
	}
	return ret;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr+2, arr,20);
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}