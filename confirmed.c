#include <stdio.h>
#include <stdlib.h>
#include "confirmed.h"                           //[평가항목8]:다중소스파일 사용


char output_1() {
	struct covid list[5] ;                    //[평가항목5]:구조체 사용
	FILE* fp;                                 //[평가항목7]:파일 입출력
	fopen_s(&fp, "qab.txt","r");
	for (int i = 0; i <5; i++) {
		fscanf_s(fp, "%d %d %d",&list[i].information , & list[i].con, & list[i].dead);
	}
	fclose(fp);
	for (int i = 0; i < 5; i++)
		printf("2022년 %d월 코로나 확진자수:%8d명   사망자수:%6d명\n", list[i].information, list[i].con, list[i].dead);
	return 0;
}
