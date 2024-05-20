#include<stdio.h>//前置處理器的一種,將stdio檔案包含進去
#include<stdlib.h>//前置處理器的一種,將stdlib檔案包含進去
#include<string.h>//前置處理器的一種,將string檔案包含進去
#include<time.h>//前置處理器的一種,將time檔案包含進去

#define ROW 9
#define COLUMN 9

char seatlist[ROW][COLUMN];//定義二維陣列 

void style(void);//個人畫面
 
void seat(void);//座位表 
void seatprint(void);//座位表
void reserve_a(int count);
void reserve_b(int count);


int main(void)
{
	char menu;//宣告選單變數 
	char o; 

	int x,y=0;//宣告密碼和輸入次數的變數 
	
	style();
    while(y<3)//最多輸入3次 
	{
		printf("Enter the password:");//提示使用者輸入四個字的密碼 
        scanf("%d",&x); //讀入使用者輸入的整數
		if(x!=2024)//若x不等於2024 
		{
			printf("輸入錯誤，請重新輸入\n");//顯示輸入錯誤，請重新輸入
			y++;//y+1
			if(y==3)//若輸入達三次 
			{
			  printf("輸入錯誤達三次，將結束程式\n");//顯示輸入錯誤達三次，將結束程式
			  return 0;	
			}
		}
		else//若x等於2024
		{
			break;//離開此迴圈
		}
	} 
	if(x==2024)//若x等於2024 
	{
		printf("welcome\n");//顯示welcome
		system("pause");
	  	while(1)
	 	{
		   	fflush(stdin);//使input buffer淨空  
			system("cls");//清除螢幕
			printf("------[booking system------\n");
			printf("|   a. Available seats    |\n");
			printf("|   b. Arrange for you    |\n");   
			printf("|   c. Choose by yourself |\n");
			printf("|   d. Exit               |\n");
			printf("---------------------------\n");//顯示主選單
			
			seat();
	        seatprint();
			
			printf("INPUT a~d\n");//提醒使用者輸入a~d 
	        scanf(" %c",&menu);//讀入上方輸入的值 
	        
	        switch(menu)
		    {
		        case 'a': 
		            system("cls");
		            reserve_a(10); //預定10個座位 
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
		                reserve_b(count); // 預訂座位數量
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
						if(o=='y')//判斷輸入是y還是n 
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
			{ //隨機預定1排或正方形 
                do 
				{
                    row = rand() % ROW;
                    col = rand() % (COLUMN - 3); // 確保4連續 
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
                    row = rand() % (ROW - 1); // 確保2行連續
                    col = rand() % (COLUMN - 1); // 確保2列連續
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
    printf("---------------------------------------------\n");//顯示個人畫面
    system ("pause");//暫停程式執行,等待使用者按下任意鍵繼續 
    system("cls");//清除螢幕
    
}

