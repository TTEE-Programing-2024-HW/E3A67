#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<string.h>//�e�m�B�z�����@��,�Nstring�ɮץ]�t�i�h

void style(void);//�ӤH�e��
 
void entering();//��J�ǥͦ��Z 
void displaying();//��ܾǥͦ��Z 
void searching();//�j�M�ǥͦ��Z 
void rankinf();//�̾ǥͥ������Z�����C���ǱƦC�ǥ͸�� 


int main(void)
{
	char menu;//�ŧi����ܼ� 
	char o; 

	int x,y=0;//�ŧi�K�X�M��J���ƪ��ܼ� 
	
	style();
    while(y<3)//�̦h��J3�� 
	{
		printf("Enter the password:");//���ܨϥΪ̿�J�|�Ӧr���K�X 
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
			printf("------[grade system]----------------\n");
			printf("|   a. enter student grades        |\n");
			printf("|   b. display student grades      |\n");   
			printf("|   c. search for student grades   |\n");
			printf("|   d. grade ranking               |\n");
			printf("|   e. exit system                 |\n");
			printf("------------------------------------\n");//��ܥD���
			
			
			
			printf("INPUT a~e\n");//�����ϥΪ̿�Ja~e 
	        scanf(" %c",&menu);//Ū�J�W���J���� 
	        
	        switch(menu)
		    {
		        case 'a': 
		            system("pause");
		            break;
		            
		        case 'b':
		            system("cls");
		            system("pause");
		            break;
		            
		        case 'c':
		        	break;
		        
		        case 'd':
		        	break;
		        	 
		        case 'e':
		        	fflush(stdin);
			        printf("Continue? (y/n)\n");
					while(scanf("%c",&o))
					{
						if(o=='y')//�P�_��J�Oy�٬On 
						{
							break;
						}
						else if(o=='n')
						{
							printf("thank for using\n");
							
							system("pause");
							
							return 0;
						}
						else
						{ 
							printf("error range\n");
							printf("input again\n\a");
						} 
					}
					system("pause");
					break;
					
				default:
					printf("pleaase input again(a~e)\n\a");
					
					system("pause");
					
					break;	
		    }
		}
	}
}






void style(void)
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
    
}

