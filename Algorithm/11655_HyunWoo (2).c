#include <stdio.h>
#include <string.h>
int main(void) {

	char string[100];

	scanf_s("%s", &string, sizeof(string));

	printf("%d", strlen(string));


	return 0;
}