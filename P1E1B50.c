#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(void){
	char password[5],ch;
	
	//1.�ڪ�����e��
	int n=15,i,j,a;
	printf("        E1B50�����L��\n");
	//��for�j�鰵�@�Ӫ��r��
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
	for(j=0;j<2*i+1;j++)
    	{
			printf("*");
		}
			printf("\n");// ����
		}
	//�C�L���[������ϧ�
	for(a=0;a<5;a++){
		printf("            *****\n");
		}
		getch();
		system("cls");
	
	//2.�X�{���ܥy�ín�D�ϥΪ̿�J4�ӼƦr���K�X
		printf("�п�J4�ӼƦr���K�X");
	for(int i=1;i<5;i++){
        password[i] = getche();
    }
    //�ˬd�K�X�O�_���T (���T�K�X�� "2025")
	if(password[1]=='2'&&password[2]=='0'&&password[3]=='2'&& password[4]=='5')
	{
		printf("\n�w��I�����N��i�J�D���~");
		getch();
		system("cls");
	}
	else{
	//�K�X���~�ɵo�Xĵ�i������ܿ��~�T��
        	printf("\a\n��J���~�I\n");
        system("pause");
    	return 0;
    }
    
	// 3.�M���ù��A�ù��X�{�D���G��ܦr���P�_�����A
	//�ϥΪ̿�J�@�Ӧr����A�{���P�_�Ӧr���O�_���^��j�g (A-Z)�B�^��p�g (a-z)�B�Ʀr (0-9)�A�̷Ӥ��P�����p��X�������T���F�Y��J��L�Ÿ��A�h��X "E1B50�����L��"�C
    printf("---------------------------------------\n");
    printf("|    'A'...'Z' : Uppercase(�^��j�g)   |\n");
    printf("|    'a'...'z' : Lowercase(�^��p�g)   |\n");
    printf("|    '0'...'9' : Digit(�Ʀr)           |\n");
    printf("|    Otherwise : E1B50�����L��         |\n");
    printf("---------------------------------------\n");
    
	// 4.�X�{���ܥy�ín�D�ϥΪ̿�J 1 �Ӧr��
    printf("�п�J�@�Ӧr��: ");
    ch = getch();  //Ū���@�Ӧr��

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    else if(ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
	//�Y�O��L�Ÿ��r���A�ù��W�X�{�A���Z�Ůy���Ωm�W�C
        printf("E1B50�����L�� \n");
    }
	//�ݨϥΪ̫��������A�����{���^��@�~�t�ΡC�����e���ܨϥΪ̫����N�����}�{���C 
    printf("�Ы����N�䵲���{��...\n");
    getch(); //�����N�䵲���{��
    return 0;
}
//�Q�׻P�߱o�G

//1. ��ı�Ƥ����]�p�G
//�Q�α_�� for �j��ø�s��A���{���@�}�l�N���@�ӥi�R���p�i�ܡA
//�o�������ϥΪ̲��e�@�G�A�]���ǲ߹L�{�ܱo������\��C

//2. �K�X��������G
//���F���ϥΪ̬ݨ��J�L�{�A�ڿ�ΤF getche() ����ܿ�J���Ʀr�A
//���M�b��ڱK�X�O�@�W�i�ण���w���A���o�̥D�n�O���F�ǲ���L��J�P�r���x�s�C

//3. �r���P�_�޿�G
//�ϥ� getch() Ū����@�r���A²����A�a�ϥα���P�_�B�z���P���p�A�o��ګD�`��ΡC

//4. �ǲ߻P�����G
//��ӵ{���]�p�L�{���ڱq²�檺�ϧο�X�B�K�X���Ҩ�r���P�_�A
//�`�J��|�F C �y�����򥻻y�k�B�޿豱��ΨϥΪ̤��ʪ����n�ʡC
//�Ʊ�o�ӵ{�����ȯ����U�ڲz�ѵ{���޿�A�]��E�o�ڹ�{���]�p������A
//�C�Ӥp�B�J���O�i�B���ֿn�A�i�����աA�C�C�ڤ]�|�g�X������B�󦳽쪺�{���I
