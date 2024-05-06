#include<stdio.h>
#include<stdlib.h>
 int main(void){
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
    int a=0;//宣告輸入的次數 
    while(a<3){
    	printf("請輸入4個數字的密碼: ");//顯示輸入4個密碼 
    	scanf("%d",&password);//輸入密碼 
    	if(password==2024)
    	{
    		printf("密碼正確!\n");
    		break;
		}
		else
		{
			printf("密碼錯誤，請再次輸入\n");
			a++;
		}
	}
	if(a==3)
	{
		printf("以輸入三次錯誤，程式即將結束\n");
	}
	system("pause"); // 螢幕畫面暫停，並等待使用者按任意鍵。
	system("CLS");  // 清除螢幕
 }
