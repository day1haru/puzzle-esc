/* ����� */
#include "headEscape.h"
#define UP 72
#define DOWN 80
#define SPACE 32

/* �����Լ� ���Ǻ� */

int cursor();			// Ŀ���̵��Լ�
void screen_size();		// ȭ��ũ�⼳��
void draw_title();		// Ÿ��Ʋ �׸�
int draw_menu();		// ���θ޴�	
void gotoxy(int, int);	// ��ǥ����
void info_make();		// ���� ����
void animation_intro();	// ��Ʈ�� �ִϸ��̼� �����

/* �������� �Լ� */
int loading();
int sboard();
int stage0();			// ���� ��ȣ ��������.
int stage1();			// �޷��� �̿��� ��ǥ���� LV2
int stage2();			// �з����� ���� LV5
int stage3();			// ī�̻縣 ��ȣ ���� LV7
int stage4();			// �Ƴ��׷� ���� LV6
int stage5();			// �������� LV 10
int stgresult();		// 

/* �����Լ� */
int main(void)
{
	screen_size();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // �Ͼ�
	while (1)
	{
		draw_title();
		int num_menu = draw_menu();
		if (num_menu == 0)

		{
			animation_intro();	// ���ӽ���
			break;				// ����Ż��
		}
		else if (num_menu == 1)
		{
			info_make();		// ������
		}
		else if (num_menu == 2)
		{
			return 0;			// ����
		}
		system("cls");
	}
	loading();
	return 0;
}

/* �����Լ� */
int cursor()
{
	int code = getch();

	if (code == 72)
	{
		return UP;
	}
	else if (code == 80)
	{
		return DOWN;
	}
	else if (code == 32)
	{
		return SPACE;
	}
}

void screen_size()
{
	system("mode con cols=95 lines=30 | title �̽�������!");
}

void draw_title()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // �Ͼ�
	printf(" \n\n");
	printf("  #########    #########    #########     ########     ########     #########   ### \n");
	printf("  ###          ###          ###          ###     ###   ###    ###   ###          ### \n");
	printf("   ###          ###          ###          ###     ###   ###    ###   ###          ### \n");
	printf("    ##########    ########    ###          ###########   #########    ##########   ### \n");
	printf("     ###                 ###   ###          ###     ###   ###          ###              \n");
	printf("      ###                 ###   ###          ###     ###   ###          ###          ### \n");
	printf("        #########   #########     #########   ###     ###   ###           #########   ### \n");
	printf(" \n");
	printf("                                ��,�� : Ŀ���̵�     Space : ����                           \n\n");	
}

void gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, Pos);
}

int draw_menu()
{
	int x = 40;
	int y = 13;
	gotoxy(x - 2, y);
	printf("> �� �� �� ��");
	gotoxy(x, y + 1);
	printf("�� �� ��");
	gotoxy(x, y + 2);
	printf("�� �� �� ��");
	
	while (1)
	{
		int key = cursor();
		switch (key)
		{
			case UP:
			{
				if (y > 13)
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, --y);
					printf(">");
				}
			}
			break;

			case DOWN:
			{
				if (y < 15)
				{
					gotoxy(x - 2, y);
					printf(" ");
					gotoxy(x - 2, ++y);
					printf(">");
				}
			}
			break;

			case SPACE:
			{
				return y - 13;
			}
		}
	}
}

void info_make()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // ���ڻ� �Ͼ��
	printf("\n");
	printf(" ���������������������������������������������������������������������������������������������������������������������������������������������������������������� \n");
	printf(" ��                                    ���� ����                                 �� \n");
	printf(" ���������������������������������������������������������������������������������������������������������������������������������������������������������������� \n");
	printf(" �� ����. �̵���                                                                 �� \n");
	printf(" �� �Ҽ�. �鼮���б� ICT�к� ������ȣ����                                        �� \n");
	printf(" �� �й�. 19�й�                                                                 �� \n");
	printf(" �� �б�. 1�г� 1�б�                                                            �� \n");
	printf(" �� ������. 2019�� 6��                                                           �� \n");
	printf(" �� ���Ǹ�. C��� ���α׷���                                                     �� \n");
	printf(" �� �Ѹ���. ��.��.��.��!                                                         �� \n");
	printf(" ���������������������������������������������������������������������������������������������������������������������������������������������������������������� \n\n\n");
	printf("                     �����̽��� �Է� �� ����ȭ������ �����մϴ�.");
	

	while (1)
	{
		if(cursor() == SPACE)
		{
			break;
		}
	}
}