#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h 
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<conio.h>//�e�m�B�z�����@��,�Nconio�ɮץ]�t�i�h
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
    int x,y;//�ŧi����ܼ� x,y
    char ch;//�ŧi�r���ܼ� 
    while(y<3)//�̦h��J3�� 
	{
		printf("�п�J�|�ӼƦr���K�X:");//���ܨϥΪ̿�J�|�Ӧr���K�X 
        scanf("%d",&x); //Ū�J�ϥΪ̿�J�����
		if(x!=2024)//�Yx������2024 
		{
			printf("��J���~�A�Э��s��J\n");//��ܿ�J���~�A�Э��s��J
			y++;//y+1
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
			fflush(stdin);//��input buffer�b��  
			system("cls");//�M���ù�
			printf("--------------------------\n");
		    printf("|a. �e�X�����T����       |\n");
		    printf("|b. ��ܭ��k��           |\n");   
		    printf("|c. ����                 |\n");
		    printf("--------------------------\n");//��ܥD���
		    printf("�Юھڿ��W���r���H����{��:");//�n�D�ϥΪ̿�J�@�ӿ��W���r�� 
		    scanf("%c",&menu);//Ū�Jmenu���� 
		    switch(menu)//��ܭn�����@�� 
		    {
		      case'a':
		      case'A':
		      {
			     system("cls");//�M���ù� 
			     printf("��J�@��'a'��'n'���r��\n");//�n�D�ϥΪ̿�J�@�ӡ�a���졥n'���r�� 
			     scanf("%c",&ch);//Ū�Jch���� 
			     if(ch>='a'||ch<='n')//�Ych���b'a'��'n'���� 
			      {
				     
			      }
			     else
			      {
				     printf("��J���~�A�Э��s��J");//��ܿ�J���~�A�Э��s��J
			      }
				 system("pause");//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N�� 
				 break;//���}�j�� 
			  } 
			  case'b':
			  case'B':
			  {
				 fflush(stdin);//��input buffer�b��  
				 system("cls");//�M���ù�
				 int n;//�ŧi����ܼ� 
				 printf("�п�J�@��1��9�����\n");//�n�D�ϥΪ̿�J�@��1��9�����
                 scanf("%d",&n);//Ū�Jn���� 
				 if(n>=1&&n<=9)//�p�Gn��1~9����� 
				 {
				 	mult(n);//���歼�k�� 
				 }
				 else
				 {
				 	printf("��J���~�A�Э��s��J\n");//��ܿ�J���~�A�Э��s��J
				 }
				 system("pause");//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
				 break;//���}�j��
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
						break;//���}�j��
					 }
					case'n':
				  	case'N':
					  {
						return 0;
						break;//���}�j��
					   }
					default: 
					{
						printf("��J���~�A�Э��s��J\n");//��ܿ�J���~�A�Э��s��J
						goto aa;//�^��߰ݬO�_�n�~�򨺦�{�� 
					}
			   }
				break;//���}�j��
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

