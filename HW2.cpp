#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h 
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<conio.h>
char menu;//�ŧi�D��檺�ܼ� 
void mult (int n);//�ŧi���k����� 
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
    int x,y;//�ŧi����ܼ� x,i
    char ch;//�ŧi�r���ܼ� 
    while(y<3)//�̦h��J3�� 
	{
		printf("�п�J�|�ӼƦr���K�X:");//���ܨϥΪ̿�J�|�Ӧr���K�X 
        scanf("%d",&x); //Ū�J�ϥΪ̿�J�����
		if(x!=2024)//�Yx������2024 
		{
			printf("��J���~�A�Э��s��J\n");//��ܿ�J���~�A�Э��s��J
			y++;
			if(y==3)//�Y��J�F�T�� 
			{
			  printf("��J���~�F�T���A�N�����{��\n");//��ܿ�J���~�F�T���A�N�����{��
			  return 0;	
			}
		}
		else//�Yx����2024
		{
			break;//���}���j��
		}
	} 
    if(x==2024)//�Yx����2024 
	{
		while(1)
		{
			fflush(stdin);
			system("cls");//�M���ù�
			printf("--------------------------\n");
		    printf("|a. �e�X�����T����       |\n");
		    printf("|b. ��ܭ��k��           |\n");   
		    printf("|c. ����                 |\n");
		    printf("--------------------------\n");//��ܥD���
		    printf("�Юھڿ��W���r���H����{��:");//�n�D�ϥΪ̿�J�@�ӿ��W���r�� 
		    scanf("%c",&menu);
		    switch(menu)//��ܭn�����@�� 
		    {
		      case'a':
		      case'A':
		      {
			     system("cls"); 
			     printf("��J�@��'a'��'n'���r��\n");//�n�D�ϥΪ̿�J�@�ӡ�a���졥n'���r�� 
			     scanf("%c",&ch);
			     if(ch>='a'||ch<='n')
			      {
				    
			      }
			     else
			      {
				     printf("��J���~�A�Э��s��J");//��ܿ�J���~�A�Э��s��J
			      }
				 system("pause");
				 break;
			  } 
			  case'b':
			  case'B':
			  {
				 fflush(stdin);
				 system("cls");
				 int n;
				 printf("�п�J�@��1��9�����\n");//�n�D�ϥΪ̿�J�@��1��9�����
                 scanf("%d",&n);
				 if(n>=1&&n<=9)//�p�Gn��1~9����� 
				 {
				 	mult(n);//���歼�k�� 
				 }
				 else
				 {
				 	printf("��J���~�A�Э��s��J\n");//��ܿ�J���~�A�Э��s��J
				 }
				 system("pause");
				 break;
			  }
			  case'c':
			  case'C':
			  {
				aa:
				printf("continue?(y/n)");//��ܬO�_�n�~�� 
			  	char choice=getch();//�ŧichoice=�W�����檺�r�� 
			  	switch(choice)
				  {
				  	case'y':
				  	case'Y':
					 {
						break;
					 }
					case'n':
				  	case'N':
					  {
						return 0;
						break;
					   }
					default: 
					{
						printf("��J���~�A�Э��s��J\n");//��ܿ�J���~�A�Э��s��J
						goto aa;//�^��߰ݬO�_�n�~�򨺦�{�� 
					}
			   }
				break;
			  }
	    	}
		    
		}
	}
	
}
void mult(int n)
{
	int x=0,y=0;
	for(x=1;x<=n;x++)
	{
		for(y=1;y<=n;y++)
		{
			printf("%d*%d=%d",x,y,x*y);
			printf("  ");
		}
		printf("\n");
	}
}
 
