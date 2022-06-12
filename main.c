/*[평가항목 1]:2022년 1월부터 현재까지 월별 코로나 감염자수를 알려주는 프로그램

  컴퓨터프로그래밍 평가과제 ( 배점 25점)
  학과: 컴퓨터 공학부
  학번:20200962
  이름:김지수

  과제 주제: 2022년 1월부터 현재까지 월별 코로나19 상황을 알려주는 프로그램
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include "confirmed.h"
#include "sum.h"
#include "reinfection.h"
int main(void)
{
	int n=0, mon=0;
	printf("해당 프로그램은 2022년 1월부터 현재까지 월별 대한민국의 코로나19 상황에 대해 알려주는 프로그램입니다.\n\n");
	printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("어떤 정보가 궁금하십니까? \n\n 1.2022년 월별 코로나 확진/사망자 수   2.2022년 월별 누적 코로나 확진자 수   3. 2022년 월별 재감염자 수\n\n");
	printf("원하시는 정보의 번호를 입력하시고 Enter를 눌러주세요 : \n");
	scanf_s("%d", &n);

	if (n==1) {
		printf("월별 코로나 확진/사망자 수를 선택하셨습니다.\n\n");
		output_1();
		printf("프로그램을 실행한 날짜 : %s", __DATE__);
	}
	else if(n == 2) {
		printf("월별 누적 코로나 확진자 수를 선택하셨습니다.\n\n");
		printf("알고싶은 월을 입력하세요(1~5): \n");
		scanf_s("%d", &mon);
		output_2(mon);
		printf("프로그램을 실행한 날짜 : %s", __DATE__);
	}
	else if (n == 3) {
		printf("월별 재감염자 수를 선택하셨습니다.\n\n");
		printf("알고 싶은 월을 입력하세요(1~5): \n");
		scanf_s("%d", &mon);
		output_3(mon);
	}
	else {
		printf("지원하지 않는 서비스입니다.");
		//처음으로 돌아가기
	}
	return 0;
}