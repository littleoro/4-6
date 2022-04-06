#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct book
{
	char name[20];

};
int main() {
	struct book a = {"11"};
	struct book* pa = &a;
	printf("%d ", pa->name);

	return 0;
}