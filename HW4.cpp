#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<string.h>//�e�m�B�z�����@��,�Nstring�ɮץ]�t�i�h
#include<conio.h>//�e�m�B�z�����@��,�Nconio�ɮץ]�t�i�h

void style(void);//�ӤH�e��
 
void entering();//��J�ǥͦ��Z 
void displaying();//��ܾǥͦ��Z 
void searching();//�j�M�ǥͦ��Z 
void rankinf();//�̾ǥͥ������Z�����C���ǱƦC�ǥ͸�� 

struct people
{
	char name[10];
    int student_number,math,english,physics;
    float average;
    char student[10];
};


int main(void)
{
	char menu;//�ŧi����ܼ� 
	char o,search[10]; 
	struct people student[10];
	int x,y=0,n,i,j;//�ŧi�{���һݪ��ܼ� 
	
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
		            fflush(stdin);
		            system("cls");
					
					printf("input student number(5~10):");
	                scanf("%d",&n);
	                if(n<5||n>10)
	                {
		             printf("input error,please input again\n");
		             system("pause");
	                }
	                else
	                {
		             for(i=1;i<n;i++)
		                {
			             printf("input No%d student name:",i);
			             scanf("%s",student[i].name);
			
			             printf("input student number:",i);
			             scanf("%d",student[i].student_number);
					 
					     do
			             {
				             printf("input error,please input again");
			             }
			             while(student[i].student_number>=999999||student[i].student_number<=100000);
			
			             printf("input math grade:");
			             scanf("%d",student[i].math);
			
			             do
			             {
				             printf("input error,please input again");
			             }
			             while(student[i].math<0||student[i].math>=101);
			  
			             printf("input english grade:");
			             scanf("%d",student[i].english);
			
			             do
			             {
				             printf("input error,please input again");
			             }
			             while(student[i].english<0||student[i].english>=101);
			
			             printf("input physics grade:");
			             scanf("%d",student[i].physics);
			
			             do
			             {
				             printf("input error,please input again");
			             }
			             while(student[i].physics<0||student[i].physics>=101);
		                }
	                }
					
					student[i].average=(float)(student[i].math+student[i].english+student[i].physics)/3;
							            
					system("pause");
		            break;
		            
		        case 'b':
		            fflush(stdin);
					system("cls");
		            
		            printf("NAME      STUDENT NUMBER        MATH      PHYSICS      ENGLISH      AVERAGE\n");
		            for(i=0;i<n;i++)
			        {
				     printf("%8s%8d%10d%10d%10d%10.2f\n",student[i].name,student[i].student_number,student[i].math,student[i].physics,student[i].english,student[i].average);
			        }
			        
		            system("pause");
		            break;
		            
		        case 'c':
		        	printf("please enter the student you want to search:");
		        	scanf("%s",&search);
		        	for(i=0;i<=n;i++)
					{
						if(search==student[i].name)
						{
							printf("NAME:%8S  STUDENT NUMBER:%8d  MATH:%10d  PHYSICS:%10d  ENGLISH:%10d  AVERAGE:%10.2f\n",student[i].name,student[i].student_number,student[i].math,student[i].physics,student[i].english,student[i].average);
							j==1;
						}
						
						if(i==n&&j!=1)
						{
							printf("nothing about this student");
							break;
						}
					}
		        	system("pause");
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
							printf("thanks for using\n");
							
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
					printf("please input again(a~e)\n\a");
					
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
void entering()
{
	
}
