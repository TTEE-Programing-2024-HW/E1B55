#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;//�ŧicount1=0,count2=0,count3=0,count4=0,count5=0
	char option;//�ŧi�ﶵ 

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
    
    while(count5==0)
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
	printf("�п�J�r��:");
	fflush(stdin);
	option=getche();//���X�@�Ӧr���A�|��ܦb�ù��W 	
	switch(option)
	{
		case 'A'://���A����� 
		case 'a'://���a����� 
		count1=0;
		while(count5==0)
		{
			 while (count1 == 0) 
			{
                    int n;
                   
                    printf("\n�п�J5��10�����: "); // ��J5��10�����
                    scanf("%d", &n);

                    
                    if (n < 5 || n > 10) {// n�O�_�b5��10����
                        printf("���~: �п�J5��10����ơC\n");
                        continue; // �^���Jn���B�J
                    }

                    
                    char names[n][50];// �ŧi�x�s�W�r���}�C
                    int num[n];// �ŧi�x�s�Ǹ����}�C
                    int math[n], physics[n], english[n];// �ŧi�x�s���Z���}�C

                    int i;
                    for (i = 0; i < n; i++)
					{
                        printf("��J��%d�Ӿǥͪ��m�W: ", i+1);
                        scanf("%s", names[i]); // ��J�ǥͩm�W

                        printf("��J��%d�Ӿǥͪ��Ǹ�: ",i+1);
                        scanf("%d", &num[i]); // ��J�ǥ;Ǹ�
                        if (num[i] < 100000 || num[i] > 999999)
						{
                            printf("���~!�Эץ��C\n");
                            i--; // �Ǹ����~�A��^���s��J
                            continue;
                        }

                        printf("��J��%d�ǥͪ��ƾǦ��Z: ",i+1);
                        scanf("%d",&math[i]); // ��J�ƾǦ��Z
                        if (math[i]<0||math[i]>100) 
						{
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // �Y���Z���~�A��^���s��J�Ӿǥ͸��
                            continue;
                        }

                        printf("��J��%d�ǥͪ����z���Z: ",i+1);
                        scanf("%d",&physics[i]); // ��J���z���Z
                        if (physics[i]<0||physics[i]>100) 
						{
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // �Y���Z���~�A��^���s��J�Ӿǥ͸��
                            continue;
                        }

                        printf("��J��%d�Ӿǥͪ��^�妨�Z: ",i+1);
                        scanf("%d",&english[i]); // ��J�^�妨�Z
                        if (english[i]<0||english[i]>100) 
						{
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // �Y���Z���~�A��^���s��J�Ӿǥ͸��
                            continue;
    					  }
                    }

                    count1 = 1; // ������J�A���X����while�`��
            }
            break ;
                
 		}
 	}
	}
}
