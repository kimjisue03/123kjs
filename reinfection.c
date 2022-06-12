#include <stdio.h>
#include "reinfection.h"                              //[평가항목8]:다중소스파일 사용

struct reinfection list_[] =                          //[평가항목5]:구조체 사용
{                                                     //[평가항목3]:배열 사용 
	{1032,234},   //2021년 12월재감염자수, 재재감염자수                              
	{1254 ,351},  //2022년 1월 재감염자수, 재재감염자수               
	{2446,453},   //2022년 2월 재감염자수, 재재감염자수             
	{3326,534},   //2022년 3월 재감염자수, 재재감염자수                
	{721,145},    //2022년 4월 재감염자수, 재재감염자수                 
	{345,129}     //2022년 5월 재감염자수, 재재감염자수              
};

void output_3(int mon)
{
	int i;
	i = mon;
	printf("2022년 %d월 코로나 재감염자수: %4d명 , 재재감염자수: %3d명\n\n", i, list_[i].first, list_[i].second);
	if ((list_[i - 1].first < list_[i].first) && (list_[i - 1].second < list_[i].second))
		printf("재감염 수는 전 월에 비해 %d명 만큼 증가했습니다. 재재감염자수는 전 월에 비해 %d명 만큼 증가했습니다.\n\n", variation_1(i), variation_2(i));
	else
		printf("재감염 수는 전 월에 비해 %d명 만큼 감소했습니다. 재재감염자수는 전 월에 비해 %d명 만큼 감소했습니다.\n\n", variation_1(i), variation_2(i));
	
	return 0;
}
                                                              //[평가항목2] 함수사용
int variation_1(int n)                                      //이전 달과 재감염 수의 변화를 계산해주는 함수
{
	return abs(list_[n].first - list_[n - 1].first);
}
int variation_2(int n) {                                    //이전 달과 재재감염자 수의 변화를 계산해주는 함수
	return abs(list_[n].second - list_[n - 1].second);
}