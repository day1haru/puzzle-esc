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
	printf("﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 0%%");
	Sleep(300);           
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 10%%");
	Sleep(800);          
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 20%%");
	Sleep(200);             
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 30%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 40%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 50%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 60%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤﹤ 70%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤﹤﹤﹤﹤ 80%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹤﹤﹤﹤ 90%%");
	Sleep(100);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥ 100%%");
	Sleep(500);
	gotoxy(24, 15);
	printf("﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥﹥ 100%% \n\n\n");
	printf("                               啗樓ж溥賊 嬴鼠酈釭 揚楝輿撮蹂...");
	getch();
	sboard();
}

int sboard()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf(" 弛                             WELCOME TO ESCAPE WORLD!!                        弛 \n");
	printf(" 弛式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式弛 \n");
	printf(" 弛 > 檜蝶馨檜Щ朝 僥薯蒂 ヴ橫 Щ煎斜極擊 驍轎ж朝 啪歜殮棲棻.                   弛 \n");
	printf(" 弛 > 僥薯朝 輿煎 襪鍔釭 懍��п唸 蛔曖 輿薯煎 掘撩腎橫氈蝗棲棻.                  弛 \n");
	printf(" 弛 > 僥薯曖 陪檜紫陛 雪雖朝 彊戲棲 檣攪喘擊 瞳斛瞳戲煎 霤堅п紫 惘雛蝗棲棻!!    弛 \n");
	printf(" 弛 > 賅萇 僥薯朝 3廓曖 薑港 殮溘 晦�萼� 輿橫餵棲棻.                             弛 \n");
	printf(" 弛 > 3廓曖 晦�� 賅舒 褒ぬ衛 褻旎擎 濰陪蝶楝遴 む割じ陛 嫦儅腌棲棻.              弛 \n");
	printf(" 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
	getch();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf(" 弛                                   晦獄撮た                                   弛 \n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
	printf(" 弛 アお. D2CODING アお縑 譆瞳�音Ц轃祧懂炴�.                                    弛 \n");
	printf(" 弛 夔樂. 衛濛瞪 夔樂撲薑擎 �飛暺� = 匐擎儀, 旋濠儀 = default戲煎 場嬴輿撮蹂.    弛 \n");
	printf(" 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf(" 弛                                  む割じ 橾塋                                 弛 \n");
	printf(" 戍式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式扣 \n");
	printf(" 弛 翱蝗僥薯. 詭檣�飛橉虞� 釭骨棲棻.                                             弛 \n");
	printf(" 弛 蝶纔檜雖 1. 詭檣�飛橉虞� 釭骨棲棻. 詭賅濰擊 5廓 褒чм棲棻.                  弛 \n");
	printf(" 弛 蝶纔檜雖 2. Щ煎斜極檜 謙猿腌棲棻.                                           弛 \n");
	printf(" 弛 蝶纔檜雖 3. 1碟 菴 闡У攪陛 謙猿腌棲棻. 夔樂擊 麵憮 鏃模貲滄橫蒂 殮溘ж撮蹂! 弛 \n");
	printf(" 弛 蝶纔檜雖 4. 鼠樹陛陛 釭褫棲棻! 楠渾檜貊 譆渠 10廓 釭褫棲棻.                  弛 \n");
	printf(" 弛 譆謙 蝶纔檜雖 . 陪檜紫陛 衙辦 堪嬴 ヰ朝啪 橫溥錶 む割じ陛 橈蝗棲棻.          弛 \n");
	printf(" 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
	getch();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                    嬴鼠酈釭 援腦賊 僥薯蒂 衛濛м棲棻! ARE YOU READY?! ");
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
	printf("                                   忙式式式式式式式式式忖 \n");
	printf("                                   弛 Stage 0 弛 \n");
	printf("                                   戌式式式式式式式式式戎 \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                  << 擠撩晦�� >> \n");
	printf("                       ≦ 陪檜紫. 翱蝗僥薯 (陪檜紫. 偃檣離 氈擠) \n");
	printf("                       ≦ 輿曖餌о. 賅萇 僥薯朝 渠模僥濠蒂 掘碟м棲棻. \n");
	printf("                        忙式式式式式式式式式成式式式式式式式式式成式式式式式式式式式忖 \n");
	printf("                        弛  ALPHA  弛  BRAVO  弛 CHARLIE 弛 \n");
	printf("                        戍式式式式式式式式式托式式式式式式式式式托式式式式式式式式式扣 \n");
	printf("                        弛  _____  弛   ECHO  弛 FOXTROT 弛 \n");
	printf("                        戍式式式式式式式式式托式式式式式式式式式托式式式式式式式式式扣 \n");
	printf("                        弛   GOLF  弛  HOTEL  弛  INDIA  弛 \n");
	printf("                        戌式式式式式式式式式扛式式式式式式式式式扛式式式式式式式式式戎 \n\n");
	input0 = (char*)malloc(20);
	printf("\t\t 1ST. ANSWER : ");
	scanf("%s", input0);

	if (strcmp(ans0, input0) == 0)	//僥濠翮 綠掖
	{
		printf("\t\t 薑港殮棲棻! 檜薑紫 僥薯朝 蔣轄?");
		getch();
		stage1();
	}
	else
	{
		printf("\n\t\t ぎ溜蝗棲棻!. 檣攪喘擊 霤堅п紫 謠嬴蹂! \n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%s", input0);
		if (strcmp(ans0, input0) == 0)
		{
			printf("\t\t 薑港殮棲棻! 棻擠 僥薯蒂 遽綠醞檜縑蹂!");
			getch();
			stage1();
		}
		else
		{
			printf("\n\t\t ぎ溜蝗棲棻! и措橫煎 匐儀п紫 釭螢勘蹂? \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%s", input0);
			if (strcmp(ans0, input0) == 0)
			{
				printf("\t\t 薑港殮棲棻! 儅陝爾棻 蔣轄?");
				getch();
				stage1();
			}
			else
			{
				printf("\n\t\t ぎ溜蝗棲棻! 羅僥薯睡攪 號檜 橫溥錫釭蹂? \n\n");				
				printf("\t\t 嬴鼠 酈釭 殮溘п輿撮蹂.");
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
	printf("                                   忙式式式式式式式式式忖 \n");
	printf("                                   弛 stage 1 弛 \n");
	printf("                                   戌式式式式式式式式式戎 \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                << 殖溘婁 謝ル >> \n");
	printf("                       ≦ 陪檜紫. Level 2 (蓮遺) \n");
	printf("                       ≦ 輿曖餌о. 璋濠虜 晦殮п輿撮蹂. \n");
	printf("                      忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf("                      弛 橾 弛 錯 弛 �� 弛 熱 弛 跡 弛 旎 弛 饜 弛 \n");
	printf("                      戍式式式式托式式式式托式式式式托式式式式托式式式式托式式式式托式式式式扣 \n");
	printf("                      弛    弛    弛  ≠ 弛    弛    弛    弛  1 弛 \n");
	printf("                      戍式式式式托式式式式托式式式式托式式式式托式式式式托式式式式托式式式式扣 \n");
	printf("                      弛  2 弛  3 弛  4 弛  5 弛  6 弛  7 弛  8 弛 \n");
	printf("                      戍式式式式托式式式式托式式式式托式式式式托式式式式托式式式式托式式式式扣 \n");
	printf("                      弛  9 弛 10 弛 11 弛 12 弛 13 弛 14 弛 15 弛 \n");
	printf("                      戍式式式式托式式式式托式式式式托式式式式托式式式式托式式式式托式式式式扣 \n");
	printf("                      弛 16 弛 17 弛 18 弛 19 弛 20 弛 21 弛 22 弛 \n");
	printf("                      戍式式式式托式式式式托式式式式托式式式式托式式式式托式式式式托式式式式扣 \n");
	printf("                      弛 23 弛 24 弛 25 弛 26 弛 27 弛 28 弛 29 弛 \n");
	printf("                      戍式式式式托式式式式托式式式式托式式式式托式式式式托式式式式托式式式式扣 \n");
	printf("                      弛 30 弛    弛    弛    弛    弛    弛  Ⅷ 弛 \n");
	printf("                      戌式式式式扛式式式式扛式式式式扛式式式式扛式式式式扛式式式式扛式式式式戎 \n\n");
	printf("Q.橫替п曖 ?錯 殖溘檜棻. 棻擠 雖衛 陛腦酈堅 氈朝 橾曖 璋濠蒂 殮溘п塭.\n");
	printf("雖衛 1. ≠ 曖 雖薄縑憮 E2S5W4E3N2煎 檜翕ж塭. \n");
	printf("雖衛 2. Ⅷ 曖 雖薄縑憮 ∟ ∟ ⊿ ∠ ∠ ∠ ∠ ⊥ ∟ ⊥ ⊿ ∟ ∟ ∟ 戲煎 檜翕ж塭. \n");
	printf("雖衛 3. ≠曖 譆謙雖薄曖 熱諦 Ⅷ曖 譆謙雖薄曖 熱曖 濠葬蒂 瞪睡 渦ж塭. \n\n");

	printf("\t\t 1ST. ANSWER : ");
	scanf("%d", &input1);

	if (input1 == 16)
	{
		printf("\t\t 薑港殮棲棻! 雖衛 2諦 雖衛 1擎 ?錯婁 謙鬼橾檜奧棲棻! (2019. 06. 19.)");
		getch();
		stage2();
	}
	else
	{
		printf("\n\t\t ぎ溜蝗棲棻! 棻衛и廓 雖衛蒂 第第�� 檗橫爾撮蹂! \n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%d", &input1);
		if (input1 == 16)
		{
			printf("\t\t 薑港殮棲棻! 謙鬼橾縑 謙鬼鼠億朝 謙鬼謙鬼ж堅 選雖蹂! (2019. 06. 19.)");
			getch();
			stage2();
		}
		else
		{
			printf("\t\t ぎ溜蝗棲棻! 雖衛蒂 薯渠煎 檗橫輿撮蹂! \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%d", &input1);
			if (input1 == 16)
			{
				printf("\n\t\t 薑港殮棲棻! ч犒и 謙鬼腎撮蹂! (2019. 06. 19.)");
				getch();
				stage2();
			}
			else
			{
				printf("\n\t\t ぎ溜蝗棲棻! 衙辦 曖嘐氈朝 陳檣等 嬴蔣啻蹂. \n");
				printf("\t\t 嬴鼠酈釭 殮溘п輿撮蹂.");
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
	printf("                                   忙式式式式式式式式式忖 \n");
	printf("                                   弛 Stage 2 弛 \n");
	printf("                                   戌式式式式式式式式式戎 \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                            << 繭餌諦 學葆僥薯 (喱葬) >> \n");
	printf("                       ≦ 陪檜紫. Level 5 (爾鱔) \n");
	printf("                       ≦ 輿曖餌о. 檜 僥薯朝 欽 1廓曖 晦�虜� 輿橫餵棲棻. \n");
	printf(" 忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf(" 弛 Q. 欽 ж釭曖 剪騁橈檜 霞褒虜 蜓ж朝 餌塋擊 瓊戲衛螃.                         弛 \n");
	printf(" 弛式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式弛 \n");
	printf(" 弛 A. 釭朝 螃霜 霞褒虜擊 蜓ж堅氈橫. D朝 剪騁蜓爵檜撿.                          弛 \n");
	printf(" 弛 B. C諦 F朝 и貲擎 剪騁蜓擊 ж堅氈堅 и貲擎 霞褒擊 蜓ж堅氈橫.                弛 \n");
	printf(" 弛 C. B諦 E朝 霞褒虜擊 蜓ж朝 耀掘撿. 辦萼 賅舒 剪騁蜓擊 ж堅氈橫.              弛 \n");
	printf(" 弛 D. A諦 C朝 萃 棻 剪騁蜓虜 ж堅氈橫. F蒂 圖橫憮朝 寰腎.                       弛 \n");
	printf(" 弛 E. 釭朝 剪騁蜓爵檜撿. ж雖虜 B朝 螃霜 霞褒虜擊 蜓ж堅氈橫.                   弛 \n");
	printf(" 弛 F. 賅舒 霞褒虜擊 蜓ж堅氈橫. 斜楚憮 檜 僥薯縑 薑港擎 橈擠 檜撿.              弛 \n");
	printf(" 戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n");
	input2 = (char*)malloc(20);
	printf("  Who's only telling the truth? : ");
	scanf("%s", input2);

	if (strcmp(ans2, input2) == 0)
	{
		printf("\n\t\t 薑港殮棲棻! D蒂 薯諼и 釭該雖朝 賅舒 蜓縑 剪騁蜓檜 氈港棲棻.\n");
		printf("\t\t ぬ楝絮蝶 僥薯 虜萄朝啪 囀註爾棻 橫溥錶蹂...");
		getch();
		stage3();
	}
	else
	{
		printf("\n\t\t ぎ溜蝗棲棻! 僥薯 虜萇 獄檣紫 ⑩陞葬晦 衛濛ц蝗棲棻. \n\n");
		printf("\t\t 嬴鼠酈釭 殮溘п輿撮蹂.");
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
	printf("                                   忙式式式式式式式式式忖 \n");
	printf("                                   弛 Stage 3 弛 \n");
	printf("                                   戌式式式式式式式式式戎 \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                  << 懍��羹啗 >> \n\n");
	printf("                       ≦ 陪檜紫. Level 7 (橫溥遺) \n");
	printf("                       ≦ 輿曖餌о. 懍�ㄣ� 模僥濠 艙僥濠煎虜 檜瑞橫螳氈蝗棲棻.\n\n");
	printf("\t\t 懍�� : SDVVZRUG LV FSURJUDPPLQJ 3\n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	input3 = (char*)malloc(20);
	printf("\t\t HINT = 檜 懍��曖 檜葷擎 餌塋檜葷殮棲棻. \n");
	printf("\t\t 1ST. ANSWER : ");
	scanf("%s", input3);

	if (strcmp(ans3, input3) == 0)
	{
		printf("\t\t 薑港殮棲棻! и廓縑 蜃蹺棻棲 渠欽п蹂!");
		getch();
		stage4();
	}
	else
	{
		printf("\n\t\t ぎ溜蝗棲棻! ⑷渠 懍��羹啗朝 嬴棲縑蹂.\n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%s", input3);
		if (strcmp(ans3, input3) == 0)
		{
			printf("\t\t 薑港殮棲棻! 3欽啗檣等 覬 橫滑轄?");
			getch();
			stage4();
		}
		else
		{
			printf("\n\t\t ぎ溜蝗棲棻! 醞蹂и �爩�! 纂�紋珂ㄟ餈倣埭炴�. \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%s", input3);
			if (strcmp(ans3, input3) == 0)
			{
				printf("\t\t 薑港殮棲棻! 棻擠僥薯紫 晦渠п輿撮蹂?");
				getch();
				stage4();
			}
			else
			{
				printf("\n\t\t ぎ溜蝗棲棻! 懍��з擎 褻旎 橫溥錫釭蹂? \n\n");
				printf("\t\t 嬴鼠酈釭 殮溘п輿撮蹂. む割じ 梱詳雖 葆衛掘蹂?");
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
	printf("                                   忙式式式式式式式式式忖 \n");
	printf("                                   弛 Stage 4 弛 \n");
	printf("                                   戌式式式式式式式式式戎 \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                  << 樹橫諦 嶸�� >> \n\n");
	printf("                       ≦ 陪檜紫. Level 6 (褻旎 橫溥遺) \n");
	printf("                       ≦ 輿曖餌о 1. 懍�ㄧ� 賅腦賊 ぎ萵 衛 釭螃朝 �爩捂� 爾撮蹂. \n");
	printf("                       ≦ 輿曖餌о 2. 懍�ㄣ� 鼠褻勒 艙橫煎 濛撩ж貊 羅濠虜 渠僥濠殮棲棻. \n\n");
	printf("\t\t 懍�� : repeats on \n\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	input4 = (char*)malloc(20);
	ran_num = rand();

	printf("\t\t HINT = か薑 措陛曖 樹橫陛 嬴椎棲棻. \n");
	printf("\t\t 1ST. ANSWER : ");
	scanf("%s", input4);

	if (strcmp(ans4, input4) == 0)
	{
		printf("\t\t 薑港殮棲棻! 號擎 樹橫蒂 憲堅啗衛朝捱蹂! 檜薯 葆雖虞 僥薯縑蹂!");
		getch();
		stage5();
	}
	else
	{
		printf("\n\t\t ぎ溜蝗棲棻! 撮啗曖 樹橫 醞 ж釭縑蹂.\n");
		printf("\t\t 2ND. ANSWER : ");
		scanf("%s", input4);
		if (strcmp(ans4, input4) == 0)
		{
			printf("\t\t 薑港殮棲棻! �爩扇� 唸薑瞳檜歷釭蹂? 檜薯 譆謙僥薯蒂 紫瞪!");
			getch();
			stage5();
		}
		else
		{
			printf("\n\t\t ぎ溜蝗棲棻! 懍���� 寞衝擎 擁傘斜極檜縑蹂. 檜薑紫賊 �爩� 棻鍍棻. \n");
			printf("\t\t 3RD. ANSWER : ");
			scanf("%s", input4);
			if (strcmp(ans4, input4) == 0)
			{
				printf("\t\t 薑港殮棲棻! 棻擠擎 譆謙僥薯奧棲棻?");
				getch();
				stage5();
			}
			else
			{
				printf("\n\t\t ぎ溜蝗棲棻! 檜 樹橫蒂 寡錶爾賊 營塹擊剪縑蹂. \n\n");
				printf("\t\t 嬴鼠酈釭 殮溘п輿撮蹂.");
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
	printf("                                 忙式式式式式式式式式式式式式忖 \n");
	printf("                                 弛 Final Stage 弛 \n");
	printf("                                 戌式式式式式式式式式式式式式戎 \n\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                 << 擎橫	 >> \n\n");
	printf("                     ≦ 陪檜紫. Level 10 檜鼻 (衙辦 橫溥遺) \n");
	printf("                     ≦ 輿曖餌о 1. 薑港擎 璋濠煎虜 殮溘п撿м棲棻.\n");
	printf("                     ≦ 輿曖餌о 2. �爩挫� 薑�旁炾� 檗戲撮蹂. 檣攪喘擊 餌辨擊 衙辦 掏濰м棲棻.\n");
	printf("                     ≦ 輿曖餌о 3. 晦�葩� 2廓虜 輿橫雖貊 識 18濠葬 殮棲棻. \n\n");
	printf("式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式 \n");
	printf("1 Cipher Hint (KR) : 80 ~ 90喇渠 瞪�降� 渠醞�� 腎雖 彊懊擊 衛瞰, '1CH'蒂 檜辨и 璋濠樹橫煎 鱔褐ц蝗棲棻. \n");	// 鞅鞅
	printf("2 Cipher Hint (JP) : 綠蝌и ⑽鷓曖 '2CH'朝 縑憮 餌辨腎貊 '1CH'諦 殖葬 ⑷營紫 �偎菙� 餌辨腎堅 氈蝗棲棻. \n");	// 堅煎嬴諦撮
	printf("3 Cipher Hint (CN) : '3CH'擎 撩褻曖 綠蝌л擊 檜辨ж艘蝗棲棻.  \n");		// 葬お
	printf("ALL Cipher Notice : 橾獄橫諦 醞措橫朝 嫦擠, и措橫朝 曖嘐曖 ⑽鷓煎 瞳⑵氈蝗棲棻. \n");		
	printf("式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式 \n");
	printf("\t Final Question : zhenxin(C) Heart(K) Ryokou(J) Best Friend(K)\n"); 
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("\t 1ST. ANSWER : ");
	scanf("%lf", &input5);

	if (input5 == 375147096356457179)
	{
		printf("\t 薑港殮棲棻! 檜 僥薯朝 薑蜓 號檜 橫溥錫朝等 堅儅ж樟蝗棲棻!");
		getch();
		stgresult();
	}
	else
	{
		printf("\n\t ぎ溜蝗棲棻! 餌褒 惜彰嬪и 褻餌釭 雖衝檜 橈戲賊 ぎ葬朝啪 薑鼻檜縑蹂! \n");
		printf("\t 2ND. ANSWER : ");
		scanf("%d", &input5);
		if (input5 == 375147096356457179)
		{
			printf("\t 薑港殮棲棻! 僥薯 虜萇 薯濛濠煎 檜薑紫梱雖 ヴ橫輿賊 銑蛭ж啻蹂. \n");
			printf("\t 唸婁�飛橉虞� 檜翕м棲棻. \n");
			getch();
			stgresult();
		}
		else
		{
			printf("\t ぎ葬朝啪 薑鼻殮棲棻. 棻擠縑 ヲ棻賊 棻擠 �爩挾橉� 霤堅ж撮蹂! \n");
			printf("\t и措懍�ㄣ� 鞅鞅廓��, 橾獄懍�ㄣ� 堅煎嬴諦撮, 醞措懍�ㄣ� 撩褻璋濠滲�素埭炴�! \n");
			printf("\t 嬴蔣雖虜 薑蜓 堅儅ж樟橫蹂! \n");
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
	printf("   忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖 \n");
	printf("   弛 橫溥遴 僥薯 ヰ替塭堅 堅儅號戲樟蝗棲棻!!                  弛 \n");
	printf("   弛 模馬擎 爾堅憮縑虜 瞳橫場堅 Щ煎斜極擎 檜虜 還檜啊蝗棲棻  弛 \n");
	printf("   弛 斜歲 20000!                                              弛 \n");
	printf("   戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎 \n\n");
	getch();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	return 0;
}

