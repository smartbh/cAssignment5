#include <stdio.h>

int main()
{
	int price[3][5] = { {2,3,30000,50000,5000}, // 0,1,2,3,4 (�⺻, �ִ�,�����,������,�ʰ����)
						{4,7,70000,110000,10000},
						{8,12,120000,170000,15000}};

	int room_num, season, people;

	do {
		printf("�� ��ȣ�� �Է��� �ּ��� ( 1 ~ 3 )");
		scanf_s("%d", &room_num);

	} while (!(room_num >= 1 && room_num <= 3)); //1~3���� ���ڰ� �ȳ����� �ݺ�

	do {
		printf("�ñ⸦ �Է��� �ּ��� ( 1 ~ 2 )");
		scanf_s("%d", &season);
	} while (season>2 ||season<1); //1~2���� ���ڰ� �ȳ����� �ݺ�
	

	do {
		printf("�ο����� �Է��� �ּ��� (�ִ� �ο� : %d)", price[room_num-1][1]);
		scanf_s("%d", &people);
	} while (people > price[room_num - 1][1]); //�ִ� �ο��� ������ �ݺ�

	if (people > price[room_num - 1][0])
		printf("������ %d���Դϴ�.\n", price[room_num - 1][season + 1] + (people - price[room_num - 1][0])*price[room_num - 1][4]); //�ʰ��ο� ����
	else
		printf("������ %d�� �Դϴ�\n", price[room_num - 1][season + 1]); //�⺻�ο� ����

}
