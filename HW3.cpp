#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<conio.h>//�e�m�B�z�����@��,�Nconio�ɮץ]�t�i�h
#define row 9
#define col 9
char menu,seat[row][col],ch;//�ŧi�ܼ�
int x,y=0;//�ŧi����ܼ� 
void show1(char seat[row][col]);
void show2(char seat[row][col]);
void show3(char seat[row][col]);
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
				  show1(seat);
				  show2(seat);
				  show3(seat);	
			  	} 
			  	case'b':
			  	{
					fflush(stdin);//��input buffer�b��  
					system("cls");//�M���ù�
					int p;
				    printf("�п�J�H��(1~4):");
			        scanf("%d",&p);
			        while(p<1||p>4)  /*�P�_�O�_�O�n�D�����H��*/
					{
						system("CLS");
				        printf("�H�ƿ��~�A�Э��s��J�I\n");  /*�P�_���_�A�n�D�ϥΪ̭��s��J*/
				        printf("�п�J�H��(1~4):");
				        scanf("%d",&p);
			        }
			        system("CLS");
			        int c=0,k,max=9,min=0;
			        while (c<=1)  /*�]�w�q���Ʀ즸�ƪ��W��*/
					{
				      while(k!=1)  /*���ͶüƮy��*/
					 	{ 
					 	  int m,n;
					      m=rand()%(max-min+1)+min;
					      n=rand()%(max-min+1)+min;
					      if(seat[m][n]!=1)  /*�N���ͪ��üƮy���ন�Q�襤���y��*/
						  { 
							    if(p==1)
								{
							         seat[m][n]=2;
						             k=1;
						        }
						        else if(p==2&&(n+1)<=8&&seat[m][n+1]!=1)
								{
							         seat[m][n]=2;
							         seat[m][n+1]=2;
						             k=1;
						        }
						        else if(p==3&&(n+2)<=8&&seat[m][n+1]!=1&&seat[m][n+2]!=1)
						        {
							         seat[m][n]=2;
							         seat[m][n+1]=2;
							         seat[m][n+2]=2;
							         k=1;
					            }
						        else if(p==4&&(n+1)<=8&&(m+1)>=0&&seat[m][n+1]!=1&&seat[m+1][n]!=1&&seat[m+1][n+1]!=1)
					    	    {
							         seat[m][n]=2;
							         seat[m+1][n]=2;
							         seat[m][n+1]=2;
							         seat[m+1][n+1]=2;
							         k=1;
						        }
				          }  
					      else
					      {
						     k=0;  /*�q���S���襤�ŦX�ݨD���y��*/ 
                          }
				        }
				        printf("\\123456789\n");  /*�L�X�y���*/ 
				        for(int m=8;m>=0;m--)
				        {
					        printf("%d",m+1);
					        for(int n=0;n<=8;n++)
					        {
							    if(seat[m][n]==0)
						        { 
							      printf("-");
						        }   
						        else if(seat[m][n]==1)
						        { 
							      printf("*");
						        } 
						        else
						        { 
							      printf("@");
					            } 
					        }
					        printf("\n");
				        }
				        printf("�������q���Ʀ��(y/n)�H\n");  /*�n�D�ϥΪ̽T�{�O�_�~��*/ 
				        printf("(���������ƹF�⦸�N�h�^�D���)\n");
				        fflush(stdin);
				        scanf("%c",&ch);
			            while(ch!='y'&&ch!='n')  /*�P�_�O�_���n�D�����r��*/ 
				        {
					      system("CLS");
					      printf("���~�T���A�Э��s��J�I\n");  /*�P�_���_�A�n�D�ϥΪ̭��s��J*/ 
					      printf("�������q���Ʀ��(y/n)�H");
					      scanf("%c",&ch);
				        }
				        if(ch=='y')  /*�P�_�ϥΪ̪����*/ 
				        {
					      for(int m=8;m>=0;m--)  /*�N�襤���y���ର�w�w�q���y��*/ 
					        {
						        for(int n=0;n<=8;n++)
						        {
							        if(seat[m][n]==2)
							        {	
							            seat[m][n]=1;
							        }	
						        }
					        }
					      k=0;
					      break;
				        }
				        else
				        {     
					      c++;
					      k=0;
					      for(int m=8;m>=0;m--)  /*�N���襤���y����*/ 
					       {
						     for(int n=0;n<=8;n++)
						        {
							      if(seat[m][n]==2)
							      { 
								     seat[m][n]=0;
						          }    
						        }
					        }
					        system("CLS");
				        }	
			        }
			        printf("\n�w��ܨ⦸�������A�h�^�D���C");
			        printf("\n(���U���N��^��D���)\n");  /*�\�൲���A���ܦ^��D���*/ 
			        break;
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
void show1(char seat[row][col])
{
	for(int m=0;m<row;m++)
	{
	  for(int n=0;n<col;n++)
	  {
	  	seat[m][n]='-';
	  }	
	}
}
void show_2(char seat[row][col])
{
  int reserved=0;
  while(reserved < show_2)
  {
  	int i=rand()%row;
  	int j=rand()%col;
  	if(seat[i][j]=='-')
	  {
	  	seat[i][j]=='*';
	  	reserved++;
	  }
  } 	
}
void show3(char seat[row][col])
{
	for(int m=row-1;m>=0;m--)
	{
	    printf("\\123456789\\n");	
		for(m=row-1;m>=0;m--)
        {
  	      printf("%d",m+1);
  	      for(int n=0;n<col;n++)
	      {
	  	    printf("%c",seat[m][n]);
	      }
		}
	    printf("\n");
	}
}

