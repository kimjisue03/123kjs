
#include <string.h>
#include <stdio.h>
void output_2(int mon) {
	int sum[5] = { 845709,3134456,13095631,17237878,18103638 };            //[평가항목3]:배열 사용            
	int(*psum)[5];                                                         //[평가항목4]:포인터 사용    //[평가항목6]포인터 활용: 배열 포인터
	psum = &sum;
	printf("2022년 %d월까지의 누적 코로나 확진자수:%10d명 \n\n", mon, (*psum)[mon-1]);
}
