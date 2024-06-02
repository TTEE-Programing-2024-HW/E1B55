#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0; // 宣告計數器變數
    char option; // 宣告選項
    int n = 0; // 宣告n初始值 
    char name[10][50]; // 儲存學生姓名的陣列
    int num[10]; // 儲存學生學號的陣列
    int math[10], physics[10], english[10]; // 儲存學生成績的陣列
    float average[10]; // 儲存學生平均成績的陣列
    int i, j; // 宣告i, j
    
    // 步驟1 
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
        printf("請輸入4個數字的密碼: "); // 顯示輸入密碼
        scanf("%d", &password); // 輸入密碼
        if (password == 2024) // 檢查密碼
        { 
            printf("密碼正確!進入\n"); // 顯示密碼正確
            system("pause"); // 暫停屏幕
            break; 
        } else 
        {
            printf("警告!密碼錯誤，請再次輸入\n"); // 顯示密碼錯誤
            a++; // 增加錯誤次數
        }
    }

    if (a == 3) // 錯誤次數是否達到三次
    { 
        printf("已輸入三次錯誤，程式即將結束\n"); // 顯示程式結束
        return 0; // 結束程式
    }

    while (count6== 0) 
    {
        system("CLS"); // 清除螢幕
        // 步驟2 
       printf("         ------------[Grade System]---------- \n");
        printf("         |  a. Enter student grades       | \n");
        printf("         |  b. Display student grades     | \n");
        printf("         |  c. Search for student grades  | \n");
        printf("         |  d. Grade ranking              | \n");
        printf("         |  e. Exit system                | \n");
		printf("         ------------------------------------ \n");

        printf("請輸入字元:"); // 提示輸入選項
        fflush(stdin); // 清除輸入緩衝區
        option = getchar(); // 讀取字元

        switch (option) 
        {
            case 'A': //顯示A的選單 
            case 'a': //顯示a的選單 
            //步驟3 
                count1 = 0;
                while (count1 == 0) 
                {
                    printf("\n請輸入5到10的整數: "); // 輸入5到10的整數
                    scanf("%d", &n);

                    if (n < 5 || n > 10) // 檢查範圍
                    { 
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

                        printf("輸入第%d學生的數學成績: ", i+1);
                        scanf("%d", &math[i]); // 輸入數學成績
                        if (math[i] < 0 || math[i] > 100) 
                        {
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 成績錯誤，返回重新輸入
                            continue;
                        }

                        printf("輸入第%d學生的物理成績: ", i+1);
                        scanf("%d", &physics[i]); // 輸入物理成績
                        if (physics[i] < 0 || physics[i] > 100) 
                        {
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 成績錯誤，返回重新輸入
                            continue;
                        }

                        printf("輸入第%d學生的英文成績: ", i+1);
                        scanf("%d", &english[i]); // 輸入英文成績
                        if (english[i] < 0 || english[i] > 100) 
                        {
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 成績錯誤，返回重新輸入
                            continue;
                        }

                        average[i] = (math[i] + physics[i] + english[i]) / 3.0; // 計算平均成績
                    }

                    count1 = 1; // 完成輸入，跳出循環
                }
                break;

            case 'B':  //顯示B的選單 
            case 'b':  //顯示b的選單 
            //步驟4 
                count2 = 0;
                while (count2 == 0) 
                {
                    system("CLS"); // 清除螢幕
                    printf("學生資訊:\n"); // 顯示學生資訊

                    for (i = 0; i < n; i++) 
                    {
                        printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均成績: %.1f\n",
                               name[i], num[i], math[i], physics[i], english[i], average[i]); // 顯示學生資訊
                    }
                    system("pause"); // 暫停屏幕
                    count2 = 1; // 完成顯示，跳出內部循環
                }
                break;
            
            case 'C':  //顯示C的選單 
            case 'c':  //顯示c的選單 
            //步驟5 
                count3 = 0;
                while (count3 == 0) 
                {
                    system("CLS"); // 清除螢幕
                    printf("請輸入要搜尋的姓名: "); //顯示要搜尋的姓名
                    char find_name[50];
                    scanf("%s", find_name); // 輸入要搜尋的姓名

                    int found = 0; 

                    for (i = 0; i < n; i++) 
                    {
                        if (strcmp(name[i], find_name) == 0) 
                        { 
                            found = 1; //找到學生
                            printf("姓名: %s, 學號: %d, 數學: %d, 物理: %d, 英文: %d, 平均成績: %.1f\n",
                                   name[i], num[i], math[i], physics[i], english[i], average[i]); // 顯示學生資訊
                            break;
                        }
                    }

                    if (!found) 
                    {
                        printf("資料不存在\n"); // 顯示資料不存在
                    }

                    system("pause"); // 暫停屏幕等待按鍵
                    count3 = 1; // 完成顯示，跳出循環
                }
                break;
                
            case 'D':  //顯示D的選單 
            case 'd':  //顯示d的選單 
            //步驟6
                count4 = 0;
                while (count4 == 0) 
                {
                    system("CLS"); // 清除螢幕

                    
                    for (i = 0; i < n - 1; i++) // 排序學生依據平均成績
					{
                        for (j = 0; j < n - i - 1; j++) 
						{
                            if (average[j] < average[j + 1]) 
							{
                                
                                char temp_name[50];// 交換姓名
                                strcpy(temp_name, name[j]);
                                strcpy(name[j], name[j + 1]);
                                strcpy(name[j + 1], temp_name);

                                
                                int temp_num = num[j];// 交換學號
                                num[j] = num[j + 1];
                                num[j + 1] = temp_num;

                                
                                int temp_math = math[j];// 交換數學成績
                                math[j] = math[j + 1];
                                math[j + 1] = temp_math;

                                
                                int temp_physics = physics[j];// 交換物理成績
                                physics[j] = physics[j + 1];
                                physics[j + 1] = temp_physics;

                                
                                int temp_english = english[j];// 交換英文成績
                                english[j] = english[j + 1];
                                english[j + 1] = temp_english;

                                
                                float temp_avg = average[j];// 交換平均成績
                                average[j] = average[j + 1];
                                average[j + 1] = temp_avg;
                            }
                        }
                    }

                   
                    printf("依平均成績高低順序列出學生資訊:\n"); // 顯示排序後資訊
                    for (i = 0; i < n; i++) 
                    {
                        printf("姓名: %s, 學號: %d, 平均成績: %.1f\n", name[i], num[i], average[i]); // 顯示學生資訊
                    }
                    system("pause"); // 暫停屏幕等待
                    count4 = 1; // 完成顯示，跳出循環
                }
                break;
                
                case 'E' :
                case 'e' :
				
				while( count5==0)
				{
					int y_n;
					printf("\nContinue?(y/n):");
				    fflush(stdin);
     				y_n=getche();
     				if(y_n=='Y'||y_n=='y')
      				count5++;
     				else if(y_n=='N'||y_n=='n')
     				{
      					count6++;
      					count5++;
     				}
     				else
        			{
         
      				printf(" 輸入錯誤，請再次輸入\n");
      				system("pause");
      				system("cls");   
					}
        		}
        		break;
    			default:
    			printf("輸入錯誤\n");
                
        }
    }

    return 0; // 程式正常結束
}


