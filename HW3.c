#include<Stdio.h>
#include<stdlib.h>
int main(){
	int count1=0,count2=0,count3=0,count4=0,count5=0;//宣告count1=0,count2=0,count3=0,count4=0,count5=0
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
    int a=0;//輸入的次數 
    while(a<3){
    	
    	printf("請輸入4個數字的密碼: ");//顯示輸入4個密碼 
    	scanf("%d",&password);//輸入密碼 
    	if(password==2024)//密碼為2024 
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
	if(a==3)//如果輸入錯誤次數到達三次 
	{
		printf("以輸入三次錯誤，程式即將結束\n");//顯示輸入三次錯誤，程式將結束
		return 0; 
	}
	while(count5==0)
 	{	
	system("CLS");  // 清除螢幕
	//步驟2 
	printf("--------------------------\n");
	printf("|  a.  Available seats	 |\n");
	printf("|  b. Arrange for you	 |\n");
	printf("|  c. Choose by yourself |\n");
	printf("|  d. Exit               |\n");
	printf("--------------------------\n");
	//步驟3 
	printf("請輸入選單字元\n");
	fflush(stdin);
	option=getche();//打出一個字元，會顯示在螢幕上 	
}
