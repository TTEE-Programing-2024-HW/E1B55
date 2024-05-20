#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

#define ROWS 9  // �w�q�y������
#define COLS 9  // �w�q�y����C��

// ����n��
void initializeSeats(char seats[ROWS][COLS]);
void randomlyBookSeats(char seats[ROWS][COLS], int numberOfBookings);
void displaySeats(char seats[ROWS][COLS]);

int main() {
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;//�ŧicount1=0,count2=0,count3=0,count4=0,count5=0
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
    int password;//�ŧi�K�X     
    int a = 0;//��J������ 
    while (a < 3) {
        
        printf("�п�J4�ӼƦr���K�X: ");//��ܿ�J4�ӱK�X 
        scanf("%d", &password);//��J�K�X 
        if (password == 2024)//�K�X��2024 
        {
            printf("�K�X���T!�i�J\n");//�p�G��J���T�A�h�i�J�U�@�ӨB�J
            system("pause"); // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��C 
            break;
        }
        else
        {
            printf("ĵ�i!�K�X���~�A�ЦA����J\n");//�K�X��J���~,�h��ܦA����J 
            a++;
        }
    }
    if (a == 3)//�p�G��J���~���ƨ�F�T�� 
    {
        printf("�H��J�T�����~�A�{���Y�N����\n");//��ܿ�J�T�����~�A�{���N����
        return 0; 
    }
    while (count5 == 0)
    {   
    system("CLS");  // �M���ù�
    //�B�J2 
    printf("--------------------------\n");
    printf("|  a.  Available seats    |\n");
    printf("|  b. Arrange for you    |\n");
    printf("|  c. Choose by yourself |\n");
    printf("|  d. Exit               |\n");
    printf("--------------------------\n");
    //�B�J3 
    printf("�п�J���r��\n");
    fflush(stdin);
    char option = getche();//���X�@�Ӧr���A�|��ܦb�ù��W     
    switch(option)
    {
        case 'A'://���A����� 
        case 'a'://���a����� 
            count1=0;
            while(count1==0)
            {
                char seats[ROWS][COLS];  // �w�q�y���Ʋ�
                initializeSeats(seats);  // ��l�Ʈy���
                randomlyBookSeats(seats, 10);  // �H���w�q�Q�Ӯy��
                displaySeats(seats);  // ��ܮy���

                printf("�Ы����N��^��D���");
                getch();
                count1++;
            }
            break;
    }
    }
    return 0;
}

// ��l�Ʈy�����
void initializeSeats(char seats[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = ' ';  // �N�Ҧ��y���l�Ƭ��Ŧ�
        }
    }
}

// �H���w�q�y����
void randomlyBookSeats(char seats[ROWS][COLS], int numberOfBookings) {
    srand(time(NULL));  // �ϥη�e�ɶ��@���H���ƺؤl
    int booked = 0;  // �w�w�q���y���
    while (booked < numberOfBookings) {
        int row = rand() % ROWS;  // �H���ͦ��渹
        int col = rand() % COLS;  // �H���ͦ��C��
        if (seats[row][col] != '*') {  // �p�G�Ӯy�쥼�Q�w�q
            seats[row][col] = '*';  // �w�q�Ӯy��
            booked++;  // �w�w�q�y��ƥ[1
        }
    }
}

// ��ܮy�����
void displaySeats(char seats[ROWS][COLS]) {
    printf(" \\123456789\n");  // ��ܦC��
    for (int i = ROWS; i > 0; i--) {
        printf("%d", i);  // ��ܦ渹
        for (int j = 0; j < COLS; j++) {
            printf("%c", seats[ROWS - i][j]);  // ��ܨC�Ӯy�쪺���A
        }
        printf("\n");  // ����
    }
}

