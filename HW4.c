#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0; // �ŧi�p�ƾ��ܼ�
    char option; // �ŧi�ﶵ
    int n = 0; // �ŧin��l�� 
    char name[10][50]; // �x�s�ǥͩm�W���}�C
    int num[10]; // �x�s�ǥ;Ǹ����}�C
    int math[10], physics[10], english[10]; // �x�s�ǥͦ��Z���}�C
    float average[10]; // �x�s�ǥͥ������Z���}�C
    int i, j; // �ŧii, j
    
    // �B�J1 
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
    int password; // �ŧi�K�X�ܼ�
    int a = 0; // ��J���ƭp��

    while (a < 3) 
    {
        printf("�п�J4�ӼƦr���K�X: "); // ��ܿ�J�K�X
        scanf("%d", &password); // ��J�K�X
        if (password == 2024) // �ˬd�K�X
        { 
            printf("�K�X���T!�i�J\n"); // ��ܱK�X���T
            system("pause"); // �Ȱ��̹�
            break; 
        } else 
        {
            printf("ĵ�i!�K�X���~�A�ЦA����J\n"); // ��ܱK�X���~
            a++; // �W�[���~����
        }
    }

    if (a == 3) // ���~���ƬO�_�F��T��
    { 
        printf("�w��J�T�����~�A�{���Y�N����\n"); // ��ܵ{������
        return 0; // �����{��
    }

    while (count6== 0) 
    {
        system("CLS"); // �M���ù�
        // �B�J2 
       printf("         ------------[Grade System]---------- \n");
        printf("         |  a. Enter student grades       | \n");
        printf("         |  b. Display student grades     | \n");
        printf("         |  c. Search for student grades  | \n");
        printf("         |  d. Grade ranking              | \n");
        printf("         |  e. Exit system                | \n");
		printf("         ------------------------------------ \n");

        printf("�п�J�r��:"); // ���ܿ�J�ﶵ
        fflush(stdin); // �M����J�w�İ�
        option = getchar(); // Ū���r��

        switch (option) 
        {
            case 'A': //���A����� 
            case 'a': //���a����� 
            //�B�J3 
                count1 = 0;
                while (count1 == 0) 
                {
                    printf("\n�п�J5��10�����: "); // ��J5��10�����
                    scanf("%d", &n);

                    if (n < 5 || n > 10) // �ˬd�d��
                    { 
                        printf("���~: �п�J5��10����ơC\n");
                        continue; // �^���J�B�J
                    }

                    for (i = 0; i < n; i++) 
                    {
                        printf("��J��%d�Ӿǥͪ��m�W: ", i + 1);
                        scanf("%s", name[i]); // ��J�ǥͩm�W

                        printf("��J��%d�Ӿǥͪ��Ǹ�: ", i + 1);
                        scanf("%d", &num[i]); // ��J�ǥ;Ǹ�
                        if (num[i] < 100000 || num[i] > 999999) 
                        {
                            printf("���~!�Эץ��C\n");
                            i--; // �Ǹ����~�A��^���s��J
                            continue;
                        }

                        printf("��J��%d�ǥͪ��ƾǦ��Z: ", i+1);
                        scanf("%d", &math[i]); // ��J�ƾǦ��Z
                        if (math[i] < 0 || math[i] > 100) 
                        {
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // ���Z���~�A��^���s��J
                            continue;
                        }

                        printf("��J��%d�ǥͪ����z���Z: ", i+1);
                        scanf("%d", &physics[i]); // ��J���z���Z
                        if (physics[i] < 0 || physics[i] > 100) 
                        {
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // ���Z���~�A��^���s��J
                            continue;
                        }

                        printf("��J��%d�ǥͪ��^�妨�Z: ", i+1);
                        scanf("%d", &english[i]); // ��J�^�妨�Z
                        if (english[i] < 0 || english[i] > 100) 
                        {
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // ���Z���~�A��^���s��J
                            continue;
                        }

                        average[i] = (math[i] + physics[i] + english[i]) / 3.0; // �p�⥭�����Z
                    }

                    count1 = 1; // ������J�A���X�`��
                }
                break;

            case 'B':  //���B����� 
            case 'b':  //���b����� 
            //�B�J4 
                count2 = 0;
                while (count2 == 0) 
                {
                    system("CLS"); // �M���ù�
                    printf("�ǥ͸�T:\n"); // ��ܾǥ͸�T

                    for (i = 0; i < n; i++) 
                    {
                        printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, �������Z: %.1f\n",
                               name[i], num[i], math[i], physics[i], english[i], average[i]); // ��ܾǥ͸�T
                    }
                    system("pause"); // �Ȱ��̹�
                    count2 = 1; // ������ܡA���X�����`��
                }
                break;
            
            case 'C':  //���C����� 
            case 'c':  //���c����� 
            //�B�J5 
                count3 = 0;
                while (count3 == 0) 
                {
                    system("CLS"); // �M���ù�
                    printf("�п�J�n�j�M���m�W: "); //��ܭn�j�M���m�W
                    char find_name[50];
                    scanf("%s", find_name); // ��J�n�j�M���m�W

                    int found = 0; 

                    for (i = 0; i < n; i++) 
                    {
                        if (strcmp(name[i], find_name) == 0) 
                        { 
                            found = 1; //���ǥ�
                            printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, �������Z: %.1f\n",
                                   name[i], num[i], math[i], physics[i], english[i], average[i]); // ��ܾǥ͸�T
                            break;
                        }
                    }

                    if (!found) 
                    {
                        printf("��Ƥ��s�b\n"); // ��ܸ�Ƥ��s�b
                    }

                    system("pause"); // �Ȱ��̹����ݫ���
                    count3 = 1; // ������ܡA���X�`��
                }
                break;
                
            case 'D':  //���D����� 
            case 'd':  //���d����� 
            //�B�J6
                count4 = 0;
                while (count4 == 0) 
                {
                    system("CLS"); // �M���ù�

                    
                    for (i = 0; i < n - 1; i++) // �ƧǾǥͨ̾ڥ������Z
					{
                        for (j = 0; j < n - i - 1; j++) 
						{
                            if (average[j] < average[j + 1]) 
							{
                                
                                char temp_name[50];// �洫�m�W
                                strcpy(temp_name, name[j]);
                                strcpy(name[j], name[j + 1]);
                                strcpy(name[j + 1], temp_name);

                                
                                int temp_num = num[j];// �洫�Ǹ�
                                num[j] = num[j + 1];
                                num[j + 1] = temp_num;

                                
                                int temp_math = math[j];// �洫�ƾǦ��Z
                                math[j] = math[j + 1];
                                math[j + 1] = temp_math;

                                
                                int temp_physics = physics[j];// �洫���z���Z
                                physics[j] = physics[j + 1];
                                physics[j + 1] = temp_physics;

                                
                                int temp_english = english[j];// �洫�^�妨�Z
                                english[j] = english[j + 1];
                                english[j + 1] = temp_english;

                                
                                float temp_avg = average[j];// �洫�������Z
                                average[j] = average[j + 1];
                                average[j + 1] = temp_avg;
                            }
                        }
                    }

                   
                    printf("�̥������Z���C���ǦC�X�ǥ͸�T:\n"); // ��ܱƧǫ��T
                    for (i = 0; i < n; i++) 
                    {
                        printf("�m�W: %s, �Ǹ�: %d, �������Z: %.1f\n", name[i], num[i], average[i]); // ��ܾǥ͸�T
                    }
                    system("pause"); // �Ȱ��̹�����
                    count4 = 1; // ������ܡA���X�`��
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

    return 0; // �{�����`����
}


