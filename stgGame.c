#include "headEscape.h"

int loading()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	printf(" \n\n");
	printf("  #########    #########    #########     ########     ########     #########   ### \n");
	printf("  ###          ###          ###          ###     ###   ###    ###   ###          ### \n");
	printf("   ###          ###          ###          ###     ###   ###    ###   ###          ### \n");
	printf("    ##########    ########    ###          ###########   #########    ##########   ### \n");
	printf("     ###                 ###   ###          ###     ###   ###          ###              \n");
	printf("      ###                 ###   ###          ###     ###   ###          ###          ### \n");
	printf("        #########   #########     #########   ###     ###   ###           #########   ### \n");
	gotoxy(24, 15);
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□ 0%%");
	Sleep(300);           
	gotoxy(24, 15);
	printf("■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□ 10%%");
	Sleep(800);          
	gotoxy(24, 15);
	printf("■■■■■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□ 20%%");
	Sleep(200);             
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□ 30%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■□□□□□□□□□□□□□□□□□□□□□□□□ 40%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■□□□□□□□□□□□□□□□□□□□□ 50%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■□□□□□□□□□□□□□□□□ 60%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□□□□□□□□□□□ 70%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□□□□□□□ 80%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■□□□□ 90%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ 100%%");
	Sleep(500);
	gotoxy(24, 15);
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ 100%% \n\n\n");
	printf("                               계속하려면 아무키나 눌러주세요...");
	getch();
	sboard();
}

int sboard()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf(" ┌──────────────────────────────────────────────────────────────────────────────┐ \n");
	printf(" │                             WELCOME TO ESCAPE WORLD!!                        │ \n");
	printf(" │──────────────────────────────────────────────────────────────────────────────│ \n");
	printf(" │ > 이스케이프는 문제를 풀어 프로그램을 탈출하는 게임입니다.                   │ \n");
	printf(" │ > 문제는 주로 퀴즈나 암호해결 등의 주제로 구성되어있습니다.                  │ \n");
	printf(" │ > 문제의 난이도가 낮지는 않으니 인터넷을 적극적으로 참고해도 괜찮습니다!!    │ \n");
	printf(" │ > 모든 문제는 3번의 정답 입력 기회가 주어집니다.                             │ \n");
	printf(" │ > 3번의 기회 모두 실패시 조금은 장난스러운 페널티가 발생됩니다.              │ \n");
	printf(" └──────────────────────────────────────────────────────────────────────────────┘ \n");
	getch();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf(" ┌──────────────────────────────────────────────────────────────────────────────┐ \n");
	printf(" │                                   기본세팅                                   │ \n");
	printf(" ├──────────────────────────────────────────────────────────────────────────────┤ \n");
	printf(" │ 폰트. D2CODING 폰트에 최적화되어있습니다.                                    │ \n");
	printf(" │ 콘솔. 시작전 콘솔설정은 화면색 = 검은색, 글자색 = default으로 놓아주세요.    │ \n");
	printf(" └──────────────────────────────────────────────────────────────────────────────┘ \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf(" ┌──────────────────────────────────────────────────────────────────────────────┐ \n");
	printf(" │                                  페널티 일람                                 │ \n");
	printf(" ├──────────────────────────────────────────────────────────────────────────────┤ \n");
	printf(" │ 연습문제. 메인화면으로 나갑니다.                                             │ \n");
	printf(" │ 스테이지 1. 메인화면으로 나갑니다. 메모장을 5번 실행합니다.                  │ \n");
	printf(" │ 스테이지 2. 프로그램이 종료됩니다.                                           │ \n");
	printf(" │ 스테이지 3. 1분 뒤 컴퓨터가 종료됩니다. 콘솔을 켜서 취소명령어를 입력하세요! │ \n");
	printf(" │ 스테이지 4. 무언가가 나옵니다! 랜덤이며 최대 10번 나옵니다.                  │ \n");
	printf(" │ 최종 스테이지 . 난이도가 매우 높아 푸는게 어려워 페널티가 없습니다.          │ \n");
	printf(" └──────────────────────────────────────────────────────────────────────────────┘ \n");
	getch();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                    아무키나 누르면 문제를 시작합니다! ARE YOU READY?! ");
	getch();
	system("cls");
	stage0();
}

int stage0()
{
	system("cls");
	char *ans0 = "DELTA";
	char *input0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n");
	printf("                                   ┌─────────┐ \n");
	printf("                                   │ Stage 0 │ \n");
	printf("                                   └─────────┘ \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                  << 음성기호 >> \n");
	printf("                       ※ 난이도. 연습문제 (난이도. 개인차 있음) \n");
	printf("                       ※ 주의사항. 모든 문제는 대소문자를 구분합니다. \n");
	printf("                        ┌─────────┬─────────┬─────────┐ \n");
	printf("                        │  ALPHA  │  BRAVO  │ CHARLIE │ \n");
	printf("                        ├─────────┼─────────┼─────────┤ \n");
	printf("                        │  _____  │   ECHO  │ FOXTROT │ \n");
	printf("                        ├─────────┼─────────┼─────────┤ \n");
	printf("                        │   GOLF  │  HOTEL  │  INDIA  │ \n");
	printf("                        └─────────┴─────────┴─────────┘ \n\n");
	input0 = (char*)malloc(20);
	printf("\t\t 1ST. ANSWER : ");
	scanf("%s", input0);

	if (strcmp(ans0, input0) == 0)	//문자열 비교
	{
		printf("\t\t 정답입니다! 이정도 문제는 쉽죠?");
		getch();
		stage1();
	}
	else
	{
		printf("\n\t\t 틀렸습니다!. 인터넷을 참고해도 좋아요! \n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%s", input0);
		if (strcmp(ans0, input0) == 0)
		{
			printf("\t\t 정답입니다! 다음 문제를 준비중이에요!");
			getch();
			stage1();
		}
		else
		{
			printf("\n\t\t 틀렸습니다! 한국어로 검색해도 나올걸요? \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%s", input0);
			if (strcmp(ans0, input0) == 0)
			{
				printf("\t\t 정답입니다! 생각보다 쉽죠?");
				getch();
				stage1();
			}
			else
			{
				printf("\n\t\t 틀렸습니다! 첫문제부터 많이 어려웠나요? \n\n");				
				printf("\t\t 아무 키나 입력해주세요.");
				getch();
				main();
			}
		}
	}
	return 0;
}

int stage1()
{
	system("cls");
	int input1;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n");
	printf("                                   ┌─────────┐ \n");
	printf("                                   │ stage 1 │ \n");
	printf("                                   └─────────┘ \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                << 달력과 좌표 >> \n");
	printf("                       ※ 난이도. Level 2 (쉬움) \n");
	printf("                       ※ 주의사항. 숫자만 기입해주세요. \n");
	printf("                      ┌──────────────────────────────────┐ \n");
	printf("                      │ 일 │ 월 │ 화 │ 수 │ 목 │ 금 │ 토 │ \n");
	printf("                      ├────┼────┼────┼────┼────┼────┼────┤ \n");
	printf("                      │    │    │  ★ │    │    │    │  1 │ \n");
	printf("                      ├────┼────┼────┼────┼────┼────┼────┤ \n");
	printf("                      │  2 │  3 │  4 │  5 │  6 │  7 │  8 │ \n");
	printf("                      ├────┼────┼────┼────┼────┼────┼────┤ \n");
	printf("                      │  9 │ 10 │ 11 │ 12 │ 13 │ 14 │ 15 │ \n");
	printf("                      ├────┼────┼────┼────┼────┼────┼────┤ \n");
	printf("                      │ 16 │ 17 │ 18 │ 19 │ 20 │ 21 │ 22 │ \n");
	printf("                      ├────┼────┼────┼────┼────┼────┼────┤ \n");
	printf("                      │ 23 │ 24 │ 25 │ 26 │ 27 │ 28 │ 29 │ \n");
	printf("                      ├────┼────┼────┼────┼────┼────┼────┤ \n");
	printf("                      │ 30 │    │    │    │    │    │  ♣ │ \n");
	printf("                      └────┴────┴────┴────┴────┴────┴────┘ \n\n");
	printf("Q.어느해의 ?월 달력이다. 다음 지시 가르키고 있는 일의 숫자를 입력해라.\n");
	printf("지시 1. ★ 의 지점에서 E2S5W4E3N2로 이동하라. \n");
	printf("지시 2. ♣ 의 지점에서 ↑ ↑ ↓ ← ← ← ← → ↑ → ↓ ↑ ↑ ↑ 으로 이동하라. \n");
	printf("지시 3. ★의 최종지점의 수와 ♣의 최종지점의 수의 자리를 전부 더하라. \n\n");

	printf("\t\t 1ST. ANSWER : ");
	scanf("%d", &input1);

	if (input1 == 16)
	{
		printf("\t\t 정답입니다! 지시 2와 지시 1은 ?월과 종강일이랍니다! (2019. 06. 19.)");
		getch();
		stage2();
	}
	else
	{
		printf("\n\t\t 틀렸습니다! 다시한번 지시를 꼼꼼히 읽어보세요! \n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%d", &input1);
		if (input1 == 16)
		{
			printf("\t\t 정답입니다! 종강일에 종강무새는 종강종강하고 울지요! (2019. 06. 19.)");
			getch();
			stage2();
		}
		else
		{
			printf("\t\t 틀렸습니다! 지시를 제대로 읽어주세요! \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%d", &input1);
			if (input1 == 16)
			{
				printf("\n\t\t 정답입니다! 행복한 종강되세요! (2019. 06. 19.)");
				getch();
				stage2();
			}
			else
			{
				printf("\n\t\t 틀렸습니다! 매우 의미있는 날인데 아쉽네요. \n");
				printf("\t\t 아무키나 입력해주세요.");
				system("notepad");
				system("notepad");
				system("notepad");
				system("notepad");
				system("notepad");
				getch();
				main();
			}
		}
	}
}

int stage2()
{
	system("cls");
	char* ans2 = "D";
	char* input2;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n");
	printf("                                   ┌─────────┐ \n");
	printf("                                   │ Stage 2 │ \n");
	printf("                                   └─────────┘ \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                            << 천사와 악마문제 (논리) >> \n");
	printf("                       ※ 난이도. Level 5 (보통) \n");
	printf("                       ※ 주의사항. 이 문제는 단 1번의 기회만 주어집니다. \n");
	printf(" ┌──────────────────────────────────────────────────────────────────────────────┐ \n");
	printf(" │ Q. 단 하나의 거짓없이 진실만 말하는 사람을 찾으시오.                         │ \n");
	printf(" │──────────────────────────────────────────────────────────────────────────────│ \n");
	printf(" │ A. 나는 오직 진실만을 말하고있어. D는 거짓말쟁이야.                          │ \n");
	printf(" │ B. C와 F는 한명은 거짓말을 하고있고 한명은 진실을 말하고있어.                │ \n");
	printf(" │ C. B와 E는 진실만을 말하는 친구야. 우린 모두 거짓말을 하고있어.              │ \n");
	printf(" │ D. A와 C는 둘 다 거짓말만 하고있어. F를 믿어서는 안되.                       │ \n");
	printf(" │ E. 나는 거짓말쟁이야. 하지만 B는 오직 진실만을 말하고있어.                   │ \n");
	printf(" │ F. 모두 진실만을 말하고있어. 그래서 이 문제에 정답은 없음 이야.              │ \n");
	printf(" └──────────────────────────────────────────────────────────────────────────────┘ \n");
	input2 = (char*)malloc(20);
	printf("  Who's only telling the truth? : ");
	scanf("%s", input2);

	if (strcmp(ans2, input2) == 0)
	{
		printf("\n\t\t 정답입니다! D를 제외한 나머지는 모두 말에 거짓말이 있답니다.\n");
		printf("\t\t 패러독스 문제 만드는게 코딩보다 어려워요...");
		getch();
		stage3();
	}
	else
	{
		printf("\n\t\t 틀렸습니다! 문제 만든 본인도 헷갈리기 시작했습니다. \n\n");
		printf("\t\t 아무키나 입력해주세요.");
		return 0;
	}
}

int stage3()
{
	system("cls");
	char* ans3 = "cprogramming";
	char* input3;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n");
	printf("                                   ┌─────────┐ \n");
	printf("                                   │ Stage 3 │ \n");
	printf("                                   └─────────┘ \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                  << 암호체계 >> \n\n");
	printf("                       ※ 난이도. Level 7 (어려움) \n");
	printf("                       ※ 주의사항. 암호는 소문자 영문자로만 이루어져있습니다.\n\n");
	printf("\t\t 암호 : SDVVZRUG LV FSURJUDPPLQJ 3\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	input3 = (char*)malloc(20);
	printf("\t\t HINT = 이 암호의 이름은 사람이름입니다. \n");
	printf("\t\t 1ST. ANSWER : ");
	scanf("%s", input3);

	if (strcmp(ans3, input3) == 0)
	{
		printf("\t\t 정답입니다! 한번에 맞추다니 대단해요!");
		getch();
		stage4();
	}
	else
	{
		printf("\n\t\t 틀렸습니다! 현대 암호체계는 아니에요.\n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%s", input3);
		if (strcmp(ans3, input3) == 0)
		{
			printf("\t\t 정답입니다! 3단계인데 좀 어렵죠?");
			getch();
			stage4();
		}
		else
		{
			printf("\n\t\t 틀렸습니다! 중요한 힌트! 치환암호계열입니다. \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%s", input3);
			if (strcmp(ans3, input3) == 0)
			{
				printf("\t\t 정답입니다! 다음문제도 기대해주세요?");
				getch();
				stage4();
			}
			else
			{
				printf("\n\t\t 틀렸습니다! 암호학은 조금 어려웠나요? \n\n");
				printf("\t\t 아무키나 입력해주세요. 페널티 까먹지 마시구요?");
				getch();
				system("shutdown -s -t 60");
				return 0;
			}
		}
	}
}

int stage4()
{
	system("cls");
	char* ans4 = "Esperanto";
	char* input4;
	srand((unsigned)time(NULL));
	int ran_num = 0;
	int rep = 0;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n");
	printf("                                   ┌─────────┐ \n");
	printf("                                   │ Stage 4 │ \n");
	printf("                                   └─────────┘ \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                  << 언어와 유희 >> \n\n");
	printf("                       ※ 난이도. Level 6 (조금 어려움) \n");
	printf("                       ※ 주의사항 1. 암호를 모르면 틀릴 시 나오는 힌트를 보세요. \n");
	printf("                       ※ 주의사항 2. 암호는 무조건 영어로 작성하며 첫자만 대문자입니다. \n\n");
	printf("\t\t 암호 : repeats on \n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	input4 = (char*)malloc(20);
	ran_num = rand();

	printf("\t\t HINT = 특정 국가의 언어가 아닙니다. \n");
	printf("\t\t 1ST. ANSWER : ");
	scanf("%s", input4);

	if (strcmp(ans4, input4) == 0)
	{
		printf("\t\t 정답입니다! 많은 언어를 알고계시는군요! 이제 마지막 문제에요!");
		getch();
		stage5();
	}
	else
	{
		printf("\n\t\t 틀렸습니다! 세계의 언어 중 하나에요.\n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%s", input4);
		if (strcmp(ans4, input4) == 0)
		{
			printf("\t\t 정답입니다! 힌트가 결정적이었나요? 이제 최종문제를 도전!");
			getch();
			stage5();
		}
		else
		{
			printf("\n\t\t 틀렸습니다! 암호화 방식은 애너그램이에요. 이정도면 힌트 다줬다. \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%s", input4);
			if (strcmp(ans4, input4) == 0)
			{
				printf("\t\t 정답입니다! 다음은 최종문제랍니다?");
				getch();
				stage5();
			}
			else
			{
				printf("\n\t\t 틀렸습니다! 이 언어를 배워보면 재밌을거에요. \n\n");
				printf("\t\t 아무키나 입력해주세요.");
				getch();
				for (int n = 0; n < 10; n++)
				{
					ran_num = rand() % 9 + 1;
					while(rep < ran_num)
					{
						system("start https://youtu.be/48rz8udZBmQ");
						rep++;
					}
				}
				return 0;
			}
		}
	}
	return 0;
}

int stage5()
{
	system("cls");
	/* double finans = 375147096356457179; */
	double input5;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("\n");
	printf("                                 ┌─────────────┐ \n");
	printf("                                 │ Final Stage │ \n");
	printf("                                 └─────────────┘ \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                 << 은어	 >> \n\n");
	printf("                     ※ 난이도. Level 10 이상 (매우 어려움) \n");
	printf("                     ※ 주의사항 1. 정답은 숫자로만 입력해야합니다.\n");
	printf("                     ※ 주의사항 2. 힌트을 정확하게 읽으세요. 인터넷을 사용을 매우 권장합니다.\n");
	printf("                     ※ 주의사항 3. 기회는 2번만 주어지며 총 18자리 입니다. \n\n");
	printf("─────────────────────────────────────────────────────────────────────────────────────────────── \n");
	printf("1 Cipher Hint (KR) : 80 ~ 90년대 전화가 대중화 되지 않았을 시절, '1CH'를 이용한 숫자언어로 통신했습니다. \n");	// 삐삐
	printf("2 Cipher Hint (JP) : 비슷한 형태의 '2CH'는 에서 사용되며 '1CH'와 달리 현재도 활발히 사용되고 있습니다. \n");	// 고로아와세
	printf("3 Cipher Hint (CN) : '3CH'은 성조의 비슷함을 이용하였습니다.  \n");		// 리트
	printf("ALL Cipher Notice : 일본어와 중국어는 발음, 한국어는 의미의 형태로 적혀있습니다. \n");		
	printf("─────────────────────────────────────────────────────────────────────────────────────────────── \n");
	printf("\t Final Question : zhenxin(C) Heart(K) Ryokou(J) Best Friend(K)\n"); 
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("\t 1ST. ANSWER : ");
	scanf("%lf", &input5);

	if (input5 == 375147096356457179)
	{
		printf("\t 정답입니다! 이 문제는 정말 많이 어려웠는데 고생하셨습니다!");
		getch();
		stgresult();
	}
	else
	{
		printf("\n\t 틀렸습니다! 사실 광범위한 조사나 지식이 없으면 틀리는게 정상이에요! \n");
		printf("\t 2ND. ANSWER : ");
		scanf("%d", &input5);
		if (input5 == 375147096356457179)
		{
			printf("\t 정답입니다! 문제 만든 제작자로 이정도까지 풀어주면 뿌듯하네요. \n");
			printf("\t 결과화면으로 이동합니다. \n");
			getch();
			stgresult();
		}
		else
		{
			printf("\t 틀리는게 정상입니다. 다음에 푼다면 다음 힌트들을 참고하세요! \n");
			printf("\t 한국암호는 삐삐번호, 일본암호는 고로아와세, 중국암호는 성조숫자변환입니다! \n");
			printf("\t 아쉽지만 정말 고생하셨어요! \n");
			getch();
			main();
		}
	}
	return 0;
}

int stgresult()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf("   ┌──────────────────────────────────────────────────────────┐ \n");
	printf("   │ 어려운 문제 푸느라고 고생많으셨습니다!!                  │ \n");
	printf("   │ 소감은 보고서에만 적어놓고 프로그램은 이만 줄이겠습니다  │ \n");
	printf("   │ 그럼 20000!                                              │ \n");
	printf("   └──────────────────────────────────────────────────────────┘ \n\n");
	getch();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	return 0;
}

