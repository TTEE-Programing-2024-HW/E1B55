#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0; // �ŧi�p�ƾ��ܼ�
    char option; // �ŧi�ﶵ�ܼ�
    int n = 0; // ��l�ƾǥͼƶq�ܼ�
    char name[10][50]; // �ŧi�x�s�W�r���}�C
    int num[10]; // �ŧi�x�s�Ǹ����}�C
    int math[10], physics[10], english[10]; // �ŧi�x�s���Z���}�C
    int i; // �ŧi�j��p���ܼ�
    
    // ��ܹϮ�
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
        printf("�п�J4�ӼƦr���K�X: "); // ���ܿ�J�K�X
        scanf("%d", &password); // ��J�K�X
        if (password == 2024) 
		{ // �ˬd�K�X
            printf("�K�X���T!�i�J\n"); // �K�X���T����
            system("pause"); // �Ȱ��̹�
            break; // ���X�K�X���Ҵ`��
        } else 
		{
            printf("ĵ�i!�K�X���~�A�ЦA����J\n"); // �K�X���~����
            a++; // �W�[���~����
        }
    }

    if (a == 3) 
	{ // �ˬd���~���ƬO�_�F��T��
        printf("�w��J�T�����~�A�{���Y�N����\n"); // ��ܵ{����������
        return 0; // �����{��
    }

    while (count5 == 0) 
	{
        system("CLS"); // �M���ù�
        // ��ܿ��
        printf("--------------------------\n");
        printf("|  a.  Available seats    |\n");
        printf("|  b. Arrange for you    |\n");
        printf("|  c. Choose by yourself |\n");
        printf("|  d. Exit               |\n");
        printf("--------------------------\n");

        printf("�п�J�r��:"); // ���ܿ�J�ﶵ
        fflush(stdin); // �M����J�w�İ�
        option = getchar(); // Ū���r��

        switch (option) 
		{
            case 'A': // �B�z�ﶵ 'A'
            case 'a': // �B�z�ﶵ 'a'
                count1 = 0;
                while (count1 == 0) 
				{
                    printf("\n�п�J5��10�����: "); // ��J5��10�����
                    scanf("%d", &n);

                    if (n < 5 || n > 10) 
					{ // �ˬd�d��
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

                        printf("��J��%d�ǥͪ��ƾǦ��Z: ", i + 1);
                        scanf("%d", &math[i]); // ��J�ƾǦ��Z
                        if (math[i] < 0 || math[i] > 100) 
						{
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // ���Z���~�A��^���s��J
                            continue;
                        }

                        printf("��J��%d�ǥͪ����z���Z: ", i + 1);
                        scanf("%d", &physics[i]); // ��J���z���Z
                        if (physics[i] < 0 || physics[i] > 100) 
						{
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // ���Z���~�A��^���s��J
                            continue;
                        }

                        printf("��J��%d�Ӿǥͪ��^�妨�Z: ", i + 1);
                        scanf("%d", &english[i]); // ��J�^�妨�Z
                        if (english[i] < 0 || english[i] > 100) 
						{
                            printf("���~!���Z�b0��100�����C\n");
                            i--; // ���Z���~�A��^���s��J
                            continue;
                        }
                    }

                    count1 = 1; // ������J�A���X�����`��
                }
                break;

            case 'B': // �B�z�ﶵ 'B'
            case 'b': // �B�z�ﶵ 'b'
                count2 = 0;
                while (count2 == 0) 
				{
                    system("CLS"); // �M���ù�
                    printf("�ǥ͸�T:\n"); // ��ܾǥ͸�T

                    for (i = 0; i < n; i++) 
					{
                        float average = (math[i] + physics[i] + english[i]) / 3.0; // �p�⥭�����Z
                        printf("�m�W: %s, �Ǹ�: %d, �ƾ�: %d, ���z: %d, �^��: %d, �������Z: %.1f\n",name[i], num[i], math[i], physics[i], english[i], average); // ��ܾǥ͸�T
                    }
                    system("pause"); // �Ȱ��̹����ݫ���
                    count2 = 1; // ������ܡA���X�����`��
                }
                break;
        }
    }

    return 0; // �{�����`����
}

