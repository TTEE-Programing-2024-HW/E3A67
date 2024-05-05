#include<stdio.h>//前置處理器的一種,將stdio檔案包含進去 
#include<stdlib.h>//前置處理器的一種,將stdlib檔案包含進去
#include<conio.h>
char menu;
void mult (int n);
int main(void)//主函數
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
    int x,y;//宣告整數變數 x,i
    char ch;//宣告字元變數 
    while(y<3)//最多輸入3次 
	{
		printf("請輸入四個數字的密碼:");//提示使用者輸入四個字的密碼 
        scanf("%d",&x); //讀入使用者輸入的整數
		if(x!=2024)//若x不等於2024 
		{
			printf("輸入錯誤，請重新輸入\n");//顯示輸入錯誤，請重新輸入
			y++;
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
		while(1)
		{
			fflush(stdin);
			system("cls");//清除螢幕
			printf("--------------------------\n");
		    printf("|a. 畫出直角三角形       |\n");
		    printf("|b. 顯示乘法表           |\n");   
		    printf("|c. 結束                 |\n");
		    printf("--------------------------\n");//顯示主選單
		    printf("請根據選單上的字元以執行程式:");//要求使用者輸入一個選單上的字元 
		    scanf("%c",&menu);
		    switch(menu)
		    {
		      case'a':
		      case'A':
		      {
			     system("cls");
		         char cha;
			     printf("輸入一個‘a’到‘n’的字元\n");
			     scanf("%c",&ch);
			     if(ch>='a'||ch<='n')
			      {
				    
			      }
			     else
			      {
				     printf("輸入錯誤，請重新輸入");
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
				 printf("請輸入一個1至9的整數\n");
                 scanf("%d",&n);
				 if(n>=1&&n<=9)
				 {
				 	mult(n);
				 }
				 else
				 {
				 	printf("輸入錯誤，請重新輸入\n");
				 }
				 system("pause");
				 break;
			  }
			  case'c':
			  case'C':
			  {
				aa:
				printf("continue?(y/n)");
			  	char choice=getch();
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
						printf("輸入錯誤，請重新輸入\n");
						goto aa;
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
 
