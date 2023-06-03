/* 선언부 */
#include "headEscape.h"
#define UP 72
#define DOWN 80
#define SPACE 32

/* 서브함수 정의부 */

int cursor();			// 커서이동함수
void screen_size();		// 화면크기설정
void draw_title();		// 타이틀 그림
int draw_menu();		// 메인메뉴	
void gotoxy(int, int);	// 좌표설정
void info_make();		// 제작 개요
void animation_intro();	// 인트로 애니메이션 만들기

/* 스테이지 함수 */
int loading();
int sboard();
int stage0();			// 음성 기호 연습문제.
int stage1();			// 달력을 이용한 좌표문제 LV2
int stage2();			// 패러독스 문제 LV5
int stage3();			// 카이사르 암호 문제 LV7
int stage4();			// 아나그램 문제 LV6
int stage5();			// 최종문제 LV 10
int stgresult();		// 

/* 메인함수 */
int main(void)
{
	screen_size();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // 하양
	while (1)
	{
		draw_title();
		int num_menu = draw_menu();
		if (num_menu == 0)

		{
			animation_intro();	// 게임시작
			break;				// 루프탈출
		}
		else if (num_menu == 1)
		{
			info_make();		// 제작자
		}
		else if (num_menu == 2)
		{
			return 0;			// 종료
		}
		system("cls");
	}
	loading();
	return 0;
}

/* 서브함수 */
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
	system("mode con cols=95 lines=30 | title 이스케이프!");
}

void draw_title()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // 하양
	printf(" \n\n");
	printf("  #########    #########    #########     ########     ########     #########   ### \n");
	printf("  ###          ###          ###          ###     ###   ###    ###   ###          ### \n");
	printf("   ###          ###          ###          ###     ###   ###    ###   ###          ### \n");
	printf("    ##########    ########    ###          ###########   #########    ##########   ### \n");
	printf("     ###                 ###   ###          ###     ###   ###          ###              \n");
	printf("      ###                 ###   ###          ###     ###   ###          ###          ### \n");
	printf("        #########   #########     #########   ###     ###   ###           #########   ### \n");
	printf(" \n");
	printf("                                ↑,↓ : 커서이동     Space : 선택                           \n\n");	
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
	printf("> 게 임 시 작");
	gotoxy(x, y + 1);
	printf("제 작 자");
	gotoxy(x, y + 2);
	printf("게 임 종 료");
	
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); // 글자색 하얀색
	printf("\n");
	printf(" ┌──────────────────────────────────────────────────────────────────────────────┐ \n");
	printf(" │                                    제작 개요                                 │ \n");
	printf(" │──────────────────────────────────────────────────────────────────────────────│ \n");
	printf(" │ 제작. 이동훈                                                                 │ \n");
	printf(" │ 소속. 백석대학교 ICT학부 정보보호전공                                        │ \n");
	printf(" │ 학번. 19학번                                                                 │ \n");
	printf(" │ 학기. 1학년 1학기                                                            │ \n");
	printf(" │ 제작일. 2019년 6월                                                           │ \n");
	printf(" │ 강의명. C언어 프로그래밍                                                     │ \n");
	printf(" │ 한마디. 종.강.좋.아!                                                         │ \n");
	printf(" └──────────────────────────────────────────────────────────────────────────────┘ \n\n\n");
	printf("                     스페이스바 입력 시 메인화면으로 복귀합니다.");
	

	while (1)
	{
		if(cursor() == SPACE)
		{
			break;
		}
	}
}