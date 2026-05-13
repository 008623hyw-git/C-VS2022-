#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	const char* sep = "@.";
	char email[] = "zhang@bitejiuyeke.com.net";
	char cp[40] = { 0 };
	strcpy(cp, email);
	char* ret = NULL;
	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
		printf("%s\n", ret);
	return 0;
}