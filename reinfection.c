#include <stdio.h>
#include "reinfection.h"                              //[���׸�8]:���߼ҽ����� ���

struct reinfection list_[] =                          //[���׸�5]:����ü ���
{                                                     //[���׸�3]:�迭 ��� 
	{1032,234},   //2021�� 12���簨���ڼ�, ���簨���ڼ�                              
	{1254 ,351},  //2022�� 1�� �簨���ڼ�, ���簨���ڼ�               
	{2446,453},   //2022�� 2�� �簨���ڼ�, ���簨���ڼ�             
	{3326,534},   //2022�� 3�� �簨���ڼ�, ���簨���ڼ�                
	{721,145},    //2022�� 4�� �簨���ڼ�, ���簨���ڼ�                 
	{345,129}     //2022�� 5�� �簨���ڼ�, ���簨���ڼ�              
};

void output_3(int mon)
{
	int i;
	i = mon;
	printf("2022�� %d�� �ڷγ� �簨���ڼ�: %4d�� , ���簨���ڼ�: %3d��\n\n", i, list_[i].first, list_[i].second);
	if ((list_[i - 1].first < list_[i].first) && (list_[i - 1].second < list_[i].second))
		printf("�簨�� ���� �� ���� ���� %d�� ��ŭ �����߽��ϴ�. ���簨���ڼ��� �� ���� ���� %d�� ��ŭ �����߽��ϴ�.\n\n", variation_1(i), variation_2(i));
	else
		printf("�簨�� ���� �� ���� ���� %d�� ��ŭ �����߽��ϴ�. ���簨���ڼ��� �� ���� ���� %d�� ��ŭ �����߽��ϴ�.\n\n", variation_1(i), variation_2(i));
	
	return 0;
}
                                                              //[���׸�2] �Լ����
int variation_1(int n)                                      //���� �ް� �簨�� ���� ��ȭ�� ������ִ� �Լ�
{
	return abs(list_[n].first - list_[n - 1].first);
}
int variation_2(int n) {                                    //���� �ް� ���簨���� ���� ��ȭ�� ������ִ� �Լ�
	return abs(list_[n].second - list_[n - 1].second);
}