#include <stdio.h>
#include <stdlib.h>
#include "confirmed.h"                           //[���׸�8]:���߼ҽ����� ���


char output_1() {
	struct covid list[5] ;                    //[���׸�5]:����ü ���
	FILE* fp;                                 //[���׸�7]:���� �����
	fopen_s(&fp, "qab.txt","r");
	for (int i = 0; i <5; i++) {
		fscanf_s(fp, "%s %d %d",list[i].information , & list[i].con, & list[i].dead);
	}
	fclose(fp);
	for (int i = 0; i < 5; i++)
		printf("2022�� %s �ڷγ� Ȯ���ڼ�:%8d��   ����ڼ�:%6d��\n", list[i].information, list[i].con, list[i].dead);
	return 0;
}