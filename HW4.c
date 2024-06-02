#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;//宣告count1=0,count2=0,count3=0,count4=0,count5=0
	char option;//宣告選項 

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
	
	int password;//宣告密碼     
    int a = 0;//輸入的次數 
    while (a < 3) {

        printf("請輸入4個數字的密碼: ");//顯示輸入4個密碼 
        scanf("%d", &password);//輸入密碼 
        if (password == 2024)//密碼為2024 
        {
            printf("密碼正確!進入\n");//如果輸入正確，則進入下一個步驟
            system("pause"); // 螢幕畫面暫停，並等待使用者按任意鍵。 
            break;
        }
        else
        {
            printf("警告!密碼錯誤，請再次輸入\n");//密碼輸入錯誤,則顯示再次輸入 
            a++;
        }
    }
    if (a == 3)//如果輸入錯誤次數到達三次 
    {
        printf("以輸入三次錯誤，程式即將結束\n");//顯示輸入三次錯誤，程式將結束
        return 0; 
    }
    
    while(count5==0)
    {
    	 system("CLS");  // 清除螢幕
    //步驟2 
    printf("--------------------------\n");
    printf("|  a.  Available seats    |\n");
    printf("|  b. Arrange for you    |\n");
    printf("|  c. Choose by yourself |\n");
    printf("|  d. Exit               |\n");
    printf("--------------------------\n");
    //步驟3
	printf("請輸入字元:");
	fflush(stdin);
	option=getche();//打出一個字元，會顯示在螢幕上 	
	switch(option)
	{
		case 'A'://顯示A的選單 
		case 'a'://顯示a的選單 
		count1=0;
		while(count5==0)
		{
			 while (count1 == 0) 
			{
                    int n;
                   
                    printf("\n請輸入5到10的整數: "); // 輸入5到10的整數
                    scanf("%d", &n);

                    
                    if (n < 5 || n > 10) {// n是否在5到10之間
                        printf("錯誤: 請輸入5到10的整數。\n");
                        continue; // 回到輸入n的步驟
                    }

                    
                    char names[n][50];// 宣告儲存名字的陣列
                    int num[n];// 宣告儲存學號的陣列
                    int math[n], physics[n], english[n];// 宣告儲存成績的陣列

                    int i;
                    for (i = 0; i < n; i++)
					{
                        printf("輸入第%d個學生的姓名: ", i+1);
                        scanf("%s", names[i]); // 輸入學生姓名

                        printf("輸入第%d個學生的學號: ",i+1);
                        scanf("%d", &num[i]); // 輸入學生學號
                        if (num[i] < 100000 || num[i] > 999999)
						{
                            printf("錯誤!請修正。\n");
                            i--; // 學號錯誤，返回重新輸入
                            continue;
                        }

                        printf("輸入第%d學生的數學成績: ",i+1);
                        scanf("%d",&math[i]); // 輸入數學成績
                        if (math[i]<0||math[i]>100) 
						{
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 若成績錯誤，返回重新輸入該學生資料
                            continue;
                        }

                        printf("輸入第%d學生的物理成績: ",i+1);
                        scanf("%d",&physics[i]); // 輸入物理成績
                        if (physics[i]<0||physics[i]>100) 
						{
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 若成績錯誤，返回重新輸入該學生資料
                            continue;
                        }

                        printf("輸入第%d個學生的英文成績: ",i+1);
                        scanf("%d",&english[i]); // 輸入英文成績
                        if (english[i]<0||english[i]>100) 
						{
                            printf("錯誤!成績在0到100之間。\n");
                            i--; // 若成績錯誤，返回重新輸入該學生資料
                            continue;
    					  }
                    }

                    count1 = 1; // 完成輸入，跳出內部while循環
            }
            break ;
                
 		}
 	}
	}
}
