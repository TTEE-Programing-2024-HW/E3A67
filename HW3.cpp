#include<stdio.h>//�e�m�B�z�����@��,�Nstdio�ɮץ]�t�i�h
#include<stdlib.h>//�e�m�B�z�����@��,�Nstdlib�ɮץ]�t�i�h
#include<string.h>//�e�m�B�z�����@��,�Nstring�ɮץ]�t�i�h
#include<time.h>//�e�m�B�z�����@��,�Ntime�ɮץ]�t�i�h

#define ROW 9
#define COLUMN 9

char seatlist[ROW][COLUMN];//�w�q�G���}�C 

void style(void);//�ӤH�e��
 
void seat(void);//�y��� 
void seatprint(void);//�y���
void reserve_a(int count);
void reserve_b(int count);


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
			printf("------[booking system------\n");
			printf("|   a. Available seats    |\n");
			printf("|   b. Arrange for you    |\n");   
			printf("|   c. Choose by yourself |\n");
			printf("|   d. Exit               |\n");
			printf("---------------------------\n");//��ܥD���
			
			seat();
	        seatprint();
			
			printf("INPUT a~d\n");//�����ϥΪ̿�Ja~d 
	        scanf(" %c",&menu);//Ū�J�W���J���� 
	        
	        switch(menu)
		    {
		        case 'a': 
		            system("cls");
		            reserve_a(10); //�w�w10�Ӯy�� 
		            printf("\nSeats reserved:\n");
		            seatprint();
		            
		            system("pause");
		            break;
		            
		        case 'b':
		            system("cls");
		            printf("How many seats do you need? (1-4): ");
		            int count;
		            scanf("%d", &count);
		            if (count >= 1 && count <= 4) 
					{
		                reserve_b(count); // �w�q�y��ƶq
		                printf("\nSeats reserved:\n");
		                seatprint();
		            } 
					else 
					{
		                printf("Invalid number of seats.\n");
		            }
		            
		            system("pause");
		            break;
		            
		        case 'c':
		        	
		        	break;
		        case 'd':
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
					printf("pleaase input again(a~d)\n\a");
					
					system("pause");
					
					break;	
		    }
		}
	}
}

void seat(void)
{
    for (int i = 0; i < ROW; ++i) 
    {
        for (int j = 0; j < COLUMN; ++j) 
        {
            seatlist[i][j] = '-';
        }
    }
}

void seatprint(void)
{
    printf("\\");
    for (int j = 1; j <= COLUMN; ++j) 
    {
        printf("%d", j);
    }
    printf("\n");

    for (int i = ROW; i >= 1; --i) 
    {
        printf("%d", i);
        for (int j = 0; j < COLUMN; ++j) 
        {
            printf("%c", seatlist[i - 1][j]);
        }
        printf("\n");
    }
}

void reserve_a(int count) 
{
    srand(time(NULL));
    int reservedCount = 0;
    while (reservedCount < count) 
    {
        if (count == 4) 
		{
            int row, col;
            if (rand() % 2) 
			{ //�H���w�w1�ƩΥ���� 
                do 
				{
                    row = rand() % ROW;
                    col = rand() % (COLUMN - 3); // �T�O4�s�� 
                } while (seatlist[row][col] != '-' || seatlist[row][col + 1] != '-' || seatlist[row][col + 2] != '-' || seatlist[row][col + 3] != '-');
                
                for (int i = col; i < col + 4; ++i) 
				{
                    seatlist[row][i] = '*';
                }
            } 
			else 
			{
                do 
				{
                    row = rand() % (ROW - 1); // �T�O2��s��
                    col = rand() % (COLUMN - 1); // �T�O2�C�s��
                } while (seatlist[row][col] != '-' || seatlist[row][col + 1] != '-' || seatlist[row + 1][col] != '-' || seatlist[row + 1][col + 1] != '-');
                
                seatlist[row][col] = '*';
                seatlist[row][col + 1] = '*';
                seatlist[row + 1][col] = '*';
                seatlist[row + 1][col + 1] = '*';
            }
            reservedCount += 4;
        } 
		else 
		{
            int row, col;
            do 
			{
                row = rand() % ROW;
                col = rand() % COLUMN;
            } while (seatlist[row][col] != '-');
            
            seatlist[row][col] = '*';
            reservedCount++;
        }
    }
}

void reserve_b(int count) 
{
    srand(time(NULL));
    int reservedCount = 0;
    while (reservedCount < count) 
    {
        if (count == 4) 
		{
            int row, col;
            if (rand() % 2) 
			{ 
                do 
				{
                    row = rand() % ROW;
                    col = rand() % (COLUMN - 3); 
                } while (seatlist[row][col] != '-' || seatlist[row][col + 1] != '-' || seatlist[row][col + 2] != '-' || seatlist[row][col + 3] != '-');
                
                for (int i = col; i < col + 4; ++i) 
				{
                    seatlist[row][i] = '@';
                }
            } 
			else 
			{
                do 
				{
                    row = rand() % (ROW - 1); 
                    col = rand() % (COLUMN - 1); 
                } while (seatlist[row][col] != '-' || seatlist[row][col + 1] != '-' || seatlist[row + 1][col] != '-' || seatlist[row + 1][col + 1] != '-');
                
                seatlist[row][col] = '@';
                seatlist[row][col + 1] = '@';
                seatlist[row + 1][col] = '@';
                seatlist[row + 1][col + 1] = '@';
            }
            reservedCount += 4;
        } 
		else 
		{
            int row, col;
            do 
			{
                row = rand() % ROW;
                col = rand() % COLUMN;
            } while (seatlist[row][col] != '-');
            
            seatlist[row][col] = '@';
            reservedCount++;
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

