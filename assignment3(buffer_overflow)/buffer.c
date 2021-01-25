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
	char str1[8], str2[8]; // str1와 str2 배열을 동시에 선언했지만 두 변수사이 공간이 16bytes가 된다.
						   // 따라서 buffer overflow를 성공시키기 위해서 16byte이상의 값을 데이터로 입력한다.
	next_tag(str1);
	gets(str2);
	if (strncmp(str1, str2, 8) == 0)
		valid = true;
	printf("%buffer1: str1(%s), str2(%s), valid(%d)\n", str1, str2, valid);
	return 0;
}