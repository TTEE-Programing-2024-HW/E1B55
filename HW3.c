#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

#define ROWS 9  // 定義座位表的行數
#define COLS 9  // 定義座位表的列數

// 函數聲明
void initializeSeats(char seats[ROWS][COLS]);
void randomlyBookSeats(char seats[ROWS][COLS], int numberOfBookings);
void displaySeats(char seats[ROWS][COLS]);

int main() {
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;//宣告count1=0,count2=0,count3=0,count4=0,count5=0
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
    while (count5 == 0)
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
    printf("請輸入選單字元\n");
    fflush(stdin);
    char option = getche();//打出一個字元，會顯示在螢幕上     
    switch(option)
    {
        case 'A'://顯示A的選單 
        case 'a'://顯示a的選單 
            count1=0;
            while(count1==0)
            {
                char seats[ROWS][COLS];  // 定義座位表數組
                initializeSeats(seats);  // 初始化座位表
                randomlyBookSeats(seats, 10);  // 隨機預訂十個座位
                displaySeats(seats);  // 顯示座位表

                printf("請按任意鍵回到主選單");
                getch();
                count1++;
            }
            break;
    }
    }
    return 0;
}

// 初始化座位表函數
void initializeSeats(char seats[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = ' ';  // 將所有座位初始化為空位
        }
    }
}

// 隨機預訂座位函數
void randomlyBookSeats(char seats[ROWS][COLS], int numberOfBookings) {
    srand(time(NULL));  // 使用當前時間作為隨機數種子
    int booked = 0;  // 已預訂的座位數
    while (booked < numberOfBookings) {
        int row = rand() % ROWS;  // 隨機生成行號
        int col = rand() % COLS;  // 隨機生成列號
        if (seats[row][col] != '*') {  // 如果該座位未被預訂
            seats[row][col] = '*';  // 預訂該座位
            booked++;  // 已預訂座位數加1
        }
    }
}

// 顯示座位表函數
void displaySeats(char seats[ROWS][COLS]) {
    printf(" \\123456789\n");  // 顯示列號
    for (int i = ROWS; i > 0; i--) {
        printf("%d", i);  // 顯示行號
        for (int j = 0; j < COLS; j++) {
            printf("%c", seats[ROWS - i][j]);  // 顯示每個座位的狀態
        }
        printf("\n");  // 換行
    }
}

