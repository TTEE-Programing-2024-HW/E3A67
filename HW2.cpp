#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h 
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
int main(void)//�D���
{
	printf("---------------------------------------------\n");
	printf("---------------------------------------------\n");
	printf("---------------------------------------------\n");
	printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
	printf("EEEEEEEEEE      333333333            A       \n");
	printf("E                       3          A   A     \n");
	printf("E                       3         A     A    \n");
	printf("EEEEEEEEEE      333333333        AAAAAAAAA   \n");
	printf("E                       3       A         A  \n");
	printf("E                       3      A           A \n");
	printf("EEEEEEEEEE      333333333     A             A\n");
	printf("                                             \n");
	printf("       6666666666      777777777             \n");
	printf("       6               7       7             \n");
	printf("       6                       7             \n");
	printf("       6666666666              7             \n");
	printf("       6        6              7             \n");
	printf("       6        6              7             \n");
	printf("       6666666666              7             \n");
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");
    printf("---------------------------------------------\n");//��ܭӤH�e�� 
    system ("pause");//�Ȱ��{������,���ݨϥΪ̫��U���N���~�� 
    system("cls");//�M���ù�
    int x,i;//�ŧi����ܼ� x
    while(i<3)
	{
		printf("�п�J�|�ӼƦr���K�X:");//���ܨϥΪ̿�J�|�Ӧr���K�X 
        scanf("%d",&x); //Ū�J�ϥΪ̿�J�����
		if(x!=2024)
		{
			printf("��J���~�A�Э��s��J\n");
			i++;
			if(i==3)
			{
			  printf("��J���~�F�T���A�N�����{��\n");
			  return 0;	
			}
		}
		else
		{
			break;
		}
	} 
    if(x==2024)//�Yx����2024 
	{
		system("cls");//�M���ù�
		printf("--------------------------\n");
		printf("|a. �e�X�����T����       |\n");
		printf("|b. ��ܭ��k��           |\n");   
		printf("|c. ����                 |\n");
		printf("--------------------------\n");
		printf("�п�J�@�Ӧr��:\n");
		char ch;
		if(ch=='a'||ch=='A')
		{
			system("cls");//�M���ù�
			printf("��J�@��'a'��'n'���r��:\n");
			
		}
		
	}
	else
	{
		printf("��J���~�A�Э��s��J\n");
		
		for(int i=0;i<3;i++)
		{
			printf("��J���~3��\n");
			return 0;
		}
	}
}
 