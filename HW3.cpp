#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<conio.h>//�e�m�B�z�����@��,�Nconio�ɮץ]�t�i�h
char menu;//�ŧi�D��檺�ܼ�
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
		printf("enter the password:");//���ܨϥΪ̿�J�|�Ӧr���K�X 
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
	  printf("welcome\n");//���welcome
	  system("pause");	
	  while(1)
	  {
	    fflush(stdin);//��input buffer�b��  
		system("cls");//�M���ù�
		printf("------[booking system------\n");
		printf("|a. Available seats       |\n");
		printf("|b. Arrange for you       |\n");   
		printf("|c. Choose by yourself    |\n");
		printf("|d. Exit                  |\n");
		printf("---------------------------\n");//��ܥD���
		printf("�Юھڿ��W���r���H����{��:");//�n�D�ϥΪ̿�J�@�ӿ��W���r�� 
		scanf("%c",&menu);//Ū�Jmenu����
		 switch(menu)//��ܭn�����@�� 
		    {
		    	case'a':
		    	{
			  	} 
			  	case'b':
			  	{
					fflush(stdin);//��input buffer�b��  
					system("cls");//�M���ù�
					int s;//�ŧi����ܼ� 
					printf("�аݻݭn�X�Ӯy��(1~4)\n");//�߰ݨϥΪ̻ݭn�X�Ӯy�� 
                	scanf("%d",&s);//Ū�Js���� 
					if(s>=1&&s<=3)//�p�Gs��1~3����� 
					{
				 	}
				 	if(s==4)
				 	{
				 	}
				 	system("pause");//�ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
				 	break;//���}�j��
			  	}
			  	case'c':
			  	{
				}
			  	case'd':
			  	{
					aa:
					printf("continue?(y/n)");//��ܬO�_�n�~�� 
			  		char choice=getch();//�ŧichoice=�W�����檺�r�� 
			  		switch(choice)
				  	{
				  		case'y':
					 	{
							break;//���}�j��
					 	}
						case'n':
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
