// chp1/nums.c
#include <stdio.h>
#include <limits.h> // 최대값,최소값 볼 때

int main(void) {
	// char
	char ch = 'A';
	printf("char:\n");
	printf("value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); //limit의 상수 사용
	printf("Min: %d\n", CHAR_MIN);

	//signed short int
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit의 상수 사용
	printf("Min: %d\n", SHRT_MIN);
	
	//unsigned short int
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("value: %u\n", ushort);
	printf("Max: %u\n", USHRT_MAX); //limit의 상수 사용

	//signed int
	signed int sint = 12345;
	printf("\nsigned sint:\n");
	printf("value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); //limit의 상수 사용
	printf("Min: %d\n", INT_MIN);

	//unsigned int
	unsigned int uint = 12345U;
	printf("\nunsigned short int:\n");
	printf("value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX); //limit의 상수 사용

	//signed long int
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("value: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX); //limit의 상수 사용
	printf("Min: %ld\n", LONG_MIN);

	//unsigned long int
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("value: %lu\n", ulong);
	printf("Max: %lu\n", ULONG_MAX); //limit의 상수 사용

	return 0;
}