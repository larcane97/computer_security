#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define false 0
#define true 1

void next_tag(char* str) {
	strcpy(str, "START");
	return;
}

int main(int argc, char* argv[]) {
	int valid = false;
	char str1[8], str2[8]; // str1�� str2 �迭�� ���ÿ� ���������� �� �������� ������ 16bytes�� �ȴ�.
						   // ���� buffer overflow�� ������Ű�� ���ؼ� 16byte�̻��� ���� �����ͷ� �Է��Ѵ�.
	next_tag(str1);
	gets(str2);
	if (strncmp(str1, str2, 8) == 0)
		valid = true;
	printf("%buffer1: str1(%s), str2(%s), valid(%d)\n", str1, str2, valid);
	return 0;
}