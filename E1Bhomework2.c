#include<stdio.h>
#include<stdlib.h>
int main(void){
 	int count1=0,count2=0,count3=0,count4=0;//�ŧicount1=0,count2=0,count3=0,count4=0
	char option,anykey;//�ŧi�r��option,anykey
	//�B�J1: 
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
 	int password;//�ŧi�K�X	 
    int a=0;//��J������ 
    while(a<3){
    	
    	printf("�п�J4�ӼƦr���K�X: ");//��ܿ�J4�ӱK�X 
    	scanf("%d",&password);//��J�K�X 
    	if(password==2024)//�K�X��2024 
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
	if(a==3)//�p�G��J���~���ƨ�F�T�� 
	{
		printf("�H��J�T�����~�A�{���Y�N����\n");//��ܿ�J�T�����~�A�{���N����
		return 0; 
	}
	while(count4==0)
 	{	
	system("CLS");  // �M���ù�
	//�B�J2 
	printf("--------------------------\n");
	printf("|  a. �e�X�����T����	 |\n");
	printf("|  b. ��ܭ��k��	 |\n");
	printf("|  c. ����		 |\n");
	printf("--------------------------\n");
	//�B�J3 
	printf("�п�J���r��\n");
	fflush(stdin);
	option=getche();//���X�@�Ӧr���A�|��ܦb�ù��W 	
	switch(option)
	{
		case 'A'://���A����� 
		case 'a'://���a����� 
			count1=0;
			while(count1==0)
 		   {
				char n;
 			    system("cls");
  			    printf("�п�J�@��a~n���r��:\n");
				fflush(stdin);//�M���w�İ� 
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
    	
    			printf("�Ы����N��^��D���");
    			anykey=getch();
    			count1++;
    			}
   				else
 			    {
    				printf("ĵ�i!�Э��s��J");
    				system("pause");            
    			}
    		}		
    		break;
    		//�B�J4 
    	case 'B'://���B����� 
		case 'b'://���b����� 
			count2=0;
			while(count2==0)
 		   {
				char n;
 			    system("cls");
  			    printf("�п�J�@��1~9�����:\n");
				fflush(stdin);//�M���w�İ� 
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
					
    	
    			printf("�Ы����N��^��D���");
    			anykey=getch();
    			count2++;
    			}
   				else
 			    {
    				printf("ĵ�i!�Э��s��J");
    				system("pause");            
    			}
    		}		
    		break;
    		//�B�J5 
    	case 'C'://���C����� 
		case 'c'://���c�����
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
         
      printf(" ��J���~�A�ЦA����J\n");
      system("pause");
      system("cls");      
     }
    }
    break;
    default:
    	printf("��J���~\n");
	}
	}
	return 0;
}//�o�����{���@�~�A�ګe���Q�ΤF��Ĥ@���@�~�ۦP�@�k�L�X�Ϥ��B��J�K�X����ܲM��C 
//�b�Ĥ@�ӲM�椤�A�ڲĤ@���L���ɭԨS���Ҷq��n�a�k�A����ڽбФF�ګǤ͡A�L�n�ڥκ⪺��X�Ů�榡�A ��O�b�۹��������A�~�ȥ��n���~���a��C 
//�b�ĤG�ӲM�椤�A�ڷQ����Ĥ@�ӲM��@�ˡA�����N��^��M��A���b�϶��h��ܿ��~�A���ڨS���ݲM���A�ѰO�Ncount 1�ƻs���a��令count2�A �@���b������������X�ӡA�бЫǤͤ@�_�d�ݡA�~�N����D���C 
//�b�ĤT�ӲM�椤�O�۸����L��²�檺�A����ڦb�ˬd�ƪ��C
// �o�����@�~�Q�Ψ칳�Ofor ��while ���j��A�p�G�b�Y�@�Ӱj��a��X���A�h���G�|��w�Q�����@�ˡA�Q�γo�����@�~�]���ڧ�F�Ѩ�j����ΡC 
