#include<stdio.h>
#include<stdlib.h>
int main(void){
 	int count1=0,count2=0,count3=0,count4=0;//宣告count1=0,count2=0,count3=0,count4=0
	char option,anykey;//宣告字元option,anykey
	//步驟1: 
printf("55555555555555555555555555555555555555555555555YJJJJJJJJJJJJ\n");
printf("5555555555555555555555555555555555555555555555JJJJYJJJJJJJJJ\n");
printf("55555555555555555555555555555555555555555555YJJJJYJJJJJJJJY5\n");
printf("555555555555YJYY5PP555555555555555555555P5YJ?JJYJJJJJJJJJY5Y\n");
printf("555555555Y7!?YJ?77?Y555555555555555555YJ7!7J?7!7JJJJJJJJ55YJ\n");
printf("55555555J~JB##BBGPJ7!?5555555555555Y?!7YGBBB##P!~JJJJJY55JJJ\n");
printf("5555555J^P##5~^^^J##G7~YYYYYYYJJYJ!7YBB57~^~B###?^JJJY5YJJJJ\n");
printf("555555?:5##Y......7##BJYJYYYYYYJYJ5#B?:.....?####~7J55YJJJJJ\n");
printf("555555^!##5:.::::..~!7?JJY5555555PPY^..::::.~B###!?55JJJJJJJ\n");
printf("55555J~B#P:.:::::....................::::::.^B###7!YJJJJJJJJ\n");
printf("5555577#B^.:::....:^~!777777!!!!~:...::::::.:P###5.7JJJJJJJJ\n");
printf("55555^J#P..:..:!JPB##############BY!:..::::..5###G:!JJJJJJY5\n");
printf("55555:J#Y...:JG##G5?7!~~~~~~~~!!7J5BGY~.::::.~B###!~JJJJJ555\n");
printf("55555:J&J..!G##5!^:::::::::::::::::^?BB^.:::.^B###5^JJJY5P55\n");
printf("55555^J&J.~B#G!:^~^^^^^^^^^^^^^!!^:::~B5..::..5###B~7Y5P5555\n");
printf("55555~J&Y.Y#G~:~GB!:^^^^^^^^^:^B#Y^:^:J#^.:::.J####Y!7?Y5PP5\n");
printf("55555^J#Y.Y&J::J##Y:^^^^^^^^^^^G##P^^:7#7.:::.!####G55YJ!7J5\n");
printf("55555~J&J.!#?::~P#P:^^^^^^^^^^:5##B^:^G#~.:::.~####J^~7YG5?!\n");
printf("55555!J#7.:B?:^:J#5:^^^::::^^^:?PPY^^P&Y..:::.~####?~~~~!JBB\n");
printf("55555!J#7..5B?^~!7!:^^^!!!~^^^^^^^^7G#Y:.::::.~###B!~~~~~~!Y\n");
printf("5555577#J..?&#5~::::::^JJY7:::::^!5#B7..:::...7#BY!~~~~~~~~~\n");
printf("55555?!#P..:75BB57~~~~~^^^~!!7J5G##5^......:^YBP7~~~~~~~~~~~\n");
printf("55555^J#B:....^!JPGGBBBGGBBBBBGGP?~::^~~~~7JBB?~~~~~~~~~~~~~\n");
printf("5555J?GP#Y?JJ?!^^^~~!!!!!!!7!!!7??JY5PPPYYYP5!~~~~~??!~~~~~~\n");
printf("55557G?YB5PPGGGPPPP5YYJ?JJJJJYYYYYYJJJJJJJPG!~~~~!PY~~~~~~~~\n");
printf("5555!#?P#YJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ5GJJ?!!7P5J7!!!!!77\n");
printf("5555~G5G#5JJJJJJJJJJJJJJJJJJJJJJJYYY5P5JJB5JJJJ5B5JYYYYYYYYY\n");
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
	while(count4==0)
 	{	
	system("CLS");  // 清除螢幕
	//步驟2 
	printf("--------------------------\n");
	printf("|  a. 畫出直角三角形	 |\n");
	printf("|  b. 顯示乘法表	 |\n");
	printf("|  c. 結束		 |\n");
	printf("--------------------------\n");
	//步驟3 
	printf("請輸入選單字元\n");
	fflush(stdin);
	option=getche();//打出一個字元，會顯示在螢幕上 	
	switch(option)
	{
		case 'A'://顯示A的選單 
		case 'a'://顯示a的選單 
			count1=0;
			while(count1==0)
 		   {
				char n;
 			    system("cls");
  			    printf("請輸入一個a~n的字元:\n");
				fflush(stdin);//清除緩衝區 
				n=getch();    	
	 
 				if(n>='a'&& n<='n')
 				{	
					int h=n-'a'+1;
					int i,j,k;
					for(i=1;i<=h;++i){
						for(j=0;j<h-i;++j){
							printf(" ");
						}
						for(k=i;k>0;--k){
							printf("%c",n-k+1);
						}
					printf("\n");
    				}
    	
    			printf("請按任意鍵回到主選單");
    			anykey=getch();
    			count1++;
    			}
   				else
 			    {
    				printf("警告!請重新輸入");
    				system("pause");            
    			}
    		}		
    		break;
    		//步驟4 
    	case 'B'://顯示B的選單 
		case 'b'://顯示b的選單 
			count2=0;
			while(count2==0)
 		   {
				char n;
 			    system("cls");
  			    printf("請輸入一個1~9的整數:\n");
				fflush(stdin);//清除緩衝區 
				n=getch();    	
	 
 				if(n>='1'&& n<='9')
 				{	
 					int i,j;
 					for(i=1;i<=n-48;i++)
 					{
 						for(j=1;j<=n-48;j++)
 						printf("%-3d",i*j);
 						printf("\n");
					}
					
    	
    			printf("請按任意鍵回到主選單");
    			anykey=getch();
    			count2++;
    			}
   				else
 			    {
    				printf("警告!請重新輸入");
    				system("pause");            
    			}
    		}		
    		break;
    		//步驟5 
    	case 'C'://顯示C的選單 
		case 'c'://顯示c的選單
			count3=0; 
			int y_n;
			while( count3==0)
    {
     printf("\nContinue?(y/n):");
     fflush(stdin);
     y_n=getche();
     if(y_n=='Y'||y_n=='y')
      count3++;
     else if(y_n=='N'||y_n=='n')
     {
      count4++;
      count3++;
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
	return 0;
}//這次的程式作業，我前面利用了跟第一次作業相同作法印出圖片、輸入密碼跟顯示清單。 
//在第一個清單中，我第一次印的時候沒有考量到要靠右，之後我請教了我室友，他要我用算的算出空格格式， 於是在相對應的更改，才糾正好錯誤的地方。 
//在第二個清單中，我想說跟第一個清單一樣，按任意鍵回到清單，不在區間則顯示錯誤，但我沒有看清楚，忘記將count 1複製的地方改成count2， 一直在那邊按都按不出來，請教室友一起查看，才將其問題找到。 
//在第三個清單中是相較於其他較簡單的，之後我在檢查排版。
// 這次的作業利用到像是for 跟while 的迴圈，如果在某一個迴圈地方出錯，則結果會跟預想的不一樣，利用這次的作業也讓我更了解到迴圈怎麼用。 
