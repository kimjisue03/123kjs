
#include <string.h>
#include <stdio.h>
void output_2(int mon) {
	int sum[5] = { 845709,3134456,13095631,17237878,18103638 };            //[���׸�3]:�迭 ���             //������ Ȱ��: �迭 ������
	int(*psum)[5];                                                         //[���׸�4]:������ ���
	psum = &sum;
	printf("2022�� %d�������� ���� �ڷγ� Ȯ���ڼ�:%10d�� \n\n", mon, (*psum)[mon-1]);
}
