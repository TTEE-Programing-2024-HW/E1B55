#include<Stdio.h>
#include<stdlib.h>
int main(){
	int count1=0,count2=0,count3=0,count4=0,count5=0;//�ŧicount1=0,count2=0,count3=0,count4=0,count5=0
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
	while(count5==0)
 	{	
	system("CLS");  // �M���ù�
	//�B�J2 
	printf("--------------------------\n");
	printf("|  a.  Available seats	 |\n");
	printf("|  b. Arrange for you	 |\n");
	printf("|  c. Choose by yourself |\n");
	printf("|  d. Exit               |\n");
	printf("--------------------------\n");
	//�B�J3 
	printf("�п�J���r��\n");
	fflush(stdin);
	option=getche();//���X�@�Ӧr���A�|��ܦb�ù��W 	
}
