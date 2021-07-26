#include <stdio.h>

int main()
{
	int price[3][5] = { {2,3,30000,50000,5000}, // 0,1,2,3,4 (기본, 최대,비수기,성수기,초과요금)
						{4,7,70000,110000,10000},
						{8,12,120000,170000,15000}};

	int room_num, season, people;

	do {
		printf("방 번호를 입력해 주세요 ( 1 ~ 3 )");
		scanf_s("%d", &room_num);

	} while (!(room_num >= 1 && room_num <= 3)); //1~3사이 숫자가 안나오면 반복

	do {
		printf("시기를 입력해 주세요 ( 1 ~ 2 )");
		scanf_s("%d", &season);
	} while (season>2 ||season<1); //1~2사이 숫자가 안나오면 반복
	

	do {
		printf("인원수를 입력해 주세요 (최대 인원 : %d)", price[room_num-1][1]);
		scanf_s("%d", &people);
	} while (people > price[room_num - 1][1]); //최대 인원을 넘으면 반복

	if (people > price[room_num - 1][0])
		printf("가격은 %d원입니다.\n", price[room_num - 1][season + 1] + (people - price[room_num - 1][0])*price[room_num - 1][4]); //초과인원 가격
	else
		printf("가격은 %d원 입니다\n", price[room_num - 1][season + 1]); //기본인원 가격

}
