#include<stdio.h>//前置處理器的一種,將stdio檔案包含進去
#include<stdlib.h>//前置處理器的一種,將stdlib檔案包含進去
#include<string.h>//前置處理器的一種,將string檔案包含進去
#include<conio.h>//前置處理器的一種,將conio檔案包含進去

void style(void);//個人畫面
 
void entering();//輸入學生成績 
void displaying();//顯示學生成績 
void searching();//搜尋學生成績 
void rankinf();//依學生平均成績的高低順序排列學生資料 

struct people
{
	char name[10];
    int student_number,math,english,physics;
    float average;
    char student[10];
};


int main(void)
{
	char menu;//宣告選單變數 
	char o,search[10]; 
	struct people student[10];
	int x,y=0,n,i,j;//宣告程式所需的變數 
	
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
			
			printf("------[grade system]----------------\n");
			printf("|   a. enter student grades        |\n");
			printf("|   b. display student grades      |\n");   
			printf("|   c. search for student grades   |\n");
			printf("|   d. grade ranking               |\n");
			printf("|   e. exit system                 |\n");
			printf("------------------------------------\n");//顯示主選單
			
			printf("INPUT a~e\n");//提醒使用者輸入a~e 
	        scanf(" %c",&menu);//讀入上方輸入的值 
	        
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
						if(o=='y')//判斷輸入是y還是n 
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
    printf("---------------------------------------------\n");//顯示個人畫面
    system ("pause");//暫停程式執行,等待使用者按下任意鍵繼續 
    system("cls");//清除螢幕
    
}
void entering()
{
	
}
