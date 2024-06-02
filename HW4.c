#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0; // 宣告計數器變數
    char option; // 宣告選項變數
    int n = 0; // 初始化學生數量變數
    char name[10][50]; // 宣告儲存名字的陣列
    int num[10]; // 宣告儲存學號的陣列
    int math[10], physics[10], english[10]; // 宣告儲存成績的陣列
    int i; // 宣告迴圈計數變數
    
    // 顯示圖案
    printf("                    .^^:                                    \n");
    printf("                    !@@B^                                   \n");
    printf("                    !@@@B   ~PPP!     :~~:                  \n");
    printf("                    !@@@#~ !@@@@@?~~~Y&@@J                  \n");
    printf("                    !@@@@#:&@@@@@@@@@@@@@?                  \n");
    printf("                    !@@@@#?&@@@@@@@@@@@@@J                  \n");
    printf("                  .J#@@@@@@@@@@@@!B@@@?5@&7                 \n");
    printf("                 :5@@@@@@@@@@@@@@J#@@@YG@@J                 \n");
    printf("                ^P@@@@@@@@@@@@@@@@@@@@@@@@J                 \n");
    printf("                ?@@@@@@@@@@@@@@@@@@@@@@@&G~                 \n");
    printf("               ^G@@@@@@@@@@@@@@@@@@@@@@@B^                  \n");
    printf("               Y@@@@@&@@@@@@@@@@@@@@@@@@@G^                 \n");
    printf("              J@@@@#!^?Y#@@@@@@@@@&##@@@@@B~                \n");
    printf("              Y@@@B~    ^@@@@@@J??:..!P@@@@#!               \n");
    printf("              ^5#P^     ^@@@@@?        ~75#P~               \n");
    printf("                        :B@@@B.                             \n");
    printf("                         .!7!.                              \n");

    int password; // 宣告密碼變數
    int a = 0; // 輸入次數計數

    while (a < 3) 
	{
        printf("請輸入4個數字的密碼: "); // 提示輸入密碼
        scanf("%d", &password); // 輸入密碼
        if (password == 2024) 
		{ // 檢查密碼
            printf("密碼正確!進入\n"); // 密碼正確提示
            system("pause"); // 暫停屏幕
            break; // 跳出密碼驗證循環
        } else 
		{
            printf("警告!密碼錯誤，請再次輸入\n"); // 密碼錯誤提示
            a++; // 增加錯誤次數
        }
    }

    if (a == 3) 
	{ // 檢查錯誤次數是否達到三次
        printf("已輸入三次錯誤，程式即將結束\n"); // 顯示程式結束提示
        return 0; // 結束程式
    }

    while (count5 == 0) 
	{
        system("CLS"); // 清除螢幕
        // 顯示選單
        printf("--------------------------\n");
        printf("|  a.  Available seats    |\n");
        printf("|  b. Arrange for you    |\n");
        printf("|  c. Choose by yourself |\n");
        printf("|  d. Exit               |\n");
        printf("--------------------------\n");

        printf("請輸入字元:"); // 提示輸入選項
        fflush(stdin); // 清除輸入緩衝區
        option = getchar(); // 讀取字元

        switch (option) 
		{
            case 'A': // 處理選項 'A'
            case 'a': // 處理選項 'a'
                count1 = 0;
                while (count1 == 0) 
				{
                    printf("\n請輸入5到10的整數: "); // 輸入5到10的整數
                    scanf("%d", &n);

                    if (n < 5 || n > 10) 
					{ // 檢查範圍
                        printf("錯誤: 請輸入5到10的整數。\n");
                        continue; // 回到輸入步驟
                    }

                    for (i = 0; i < n; i++) 
					{
                        printf("輸入第%d個學生的姓名: ", i + 1);
                        scanf("%s", name[i]); // 輸入學生姓名

                        printf("輸入第%d個學生的學號: ", i + 1);
                        scanf("%d", &num[i]); // 輸入學生學號
                        if (num[i] < 100000 || num[i] > 999999) 
						{
                            printf("錯誤!請修正。\n");
                            i--; // 學號錯誤，返回重新輸入
                            continue;
                        }

                        printf("輸入第%d學生的數學成績: ", i + 1);
                        scanf("%d", &math[i]); // 輸入數學成績
                        if (math[i] < 0 || math[i] > 100) 
						{
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 成績錯誤，返回重新輸入
                            continue;
                        }

                        printf("輸入第%d學生的物理成績: ", i + 1);
                        scanf("%d", &physics[i]); // 輸入物理成績
                        if (physics[i] < 0 || physics[i] > 100) 
						{
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 成績錯誤，返回重新輸入
                            continue;
                        }

                        printf("輸入第%d個學生的英文成績: ", i + 1);
                        scanf("%d", &english[i]); // 輸入英文成績
                        if (english[i] < 0 || english[i] > 100) 
						{
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 成績錯誤，返回重新輸入
                            continue;
                        }
                    }

                    count1 = 1; // 完成輸入，跳出內部循環
                }
                break;

            case 'B': // 處理選項 'B'
            case 'b': // 處理選項 'b'
                count2 = 0;
                while (count2 == 0) 
				{
                    system("CLS"); // 清除螢幕
                    printf("學生資訊:\n"); // 顯示學生資訊

                    for (i = 0; i < n; i++) 
					{
                        float average = (math[i] + physics[i] + english[i]) / 3.0; // 計算平均成績
                        printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均成績: %.1f\n",name[i], num[i], math[i], physics[i], english[i], average); // 顯示學生資訊
                    }
                    system("pause"); // 暫停屏幕等待按鍵
                    count2 = 1; // 完成顯示，跳出內部循環
                }
                break;
        }
    }

    return 0; // 程式正常結束
}

