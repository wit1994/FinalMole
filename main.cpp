#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <Time.h>

#define TRUE 1
using namespace std;

/*int main()
{
int time;
int re = 1;

do
{
cout << "Ÿ�̸��Է�" << endl;
cin >> time;

while (time > 0)
{
cout << time << "sec" << endl;
Sleep(1000);
time--;

}
cout << "re?" << endl;
cin >> re;

} while (re > 0);


system("cls");

do
{
cout << "Ÿ�̸��Է�" << endl;
cin >> time;

while (time > 0)
{
cout << time << "sec" << endl;
Sleep(1000);
time--;

}
cout << "re?" << endl;
cin >> re;

} while (re > 0);

return 0;
}
*/
void gotoxy(int x, int y) // �ܼ� ȭ�� Ŀ�� �̵�
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void setcolor(int color, int bgcolor) //�ܼ� ȭ�� ���� �� ����
{
	color &= 0xf;
	bgcolor &= 0xf;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}
void hole(){
	int j = 10;
	int a = 0;
	for (int i = 0; i < 9; i++){
		a += 20;
		gotoxy(a, j);
		cout << "(       )" << endl;
		if (a % 3 == 0) {
			j += 3;
			a = 0;
		}
	}
	Sleep(100);
}
void mole(int *rn1)
{
	int a = rn1[0];
	int b = rn1[1];
	cout << a <<endl;
	cout << b <<endl;
}
int* TwoReturn()
{
	int a[2] = { 0, };
	void* ar = (int*)malloc(sizeof(int)*2);
	int *ip = (int*)ar;

	while (TRUE){
		ip[0] = rand() % 100;
		ip[1] = rand() % 100;
		
		a[0] = ip[0];
		a[1] = ip[1];
		

	}

	return ip;
}
int main()
{

	/*int key = 0;
	int random = 0;
	int sec = 5;

	setcolor(10, 0);                //10 :�ʷ�

	gotoxy(50, 13);
	cout << "    �δ��� ���" << endl;
	gotoxy(50, 14);
	cout << "�ƹ� Ű�� ���� �ּ���" << endl;

	cin >> key;
	if (key >= 0 && key <= 127)
	{
		system("cls");
		for (int i = 0; i < 5; i++) // ���� 5�� ���
		{
			setcolor(10, 0);                //10 :�ʷ�
			gotoxy(60, 13);
			cout << sec << endl;
			sec--;
			Sleep(1000);
		}
	}
	*/
	srand((unsigned)time(NULL));
	int *a = TwoReturn();
	mole(a);
	
	free(a);

	return 0;
}