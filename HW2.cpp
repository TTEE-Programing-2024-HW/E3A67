#include<stdio.h>//前置處理器的一種,將stdio檔案包含進去 
#include<stdlib.h>//前置處理器的一種,將stdlib檔案包含進去
#include<conio.h>//前置處理器的一種,將conio檔案包含進去
char menu;//宣告主選單的變數 
void mult (int n);//宣告乘法表的函數
void tri (char ch);//宣告乘法表的函數
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
    int x,y;//宣告整數變數 x,y
    char ch;//宣告字元變數 
    while(y<3)//最多輸入3次 
	{
		printf("請輸入四個數字的密碼:");//提示使用者輸入四個字的密碼 
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
		while(1)
		{
			fflush(stdin);//使input buffer淨空  
			system("cls");//清除螢幕
			printf("--------------------------\n");
		    printf("|a. 畫出直角三角形       |\n");
		    printf("|b. 顯示乘法表           |\n");   
		    printf("|c. 結束                 |\n");
		    printf("--------------------------\n");//顯示主選單
		    printf("請根據選單上的字元以執行程式:");//要求使用者輸入一個選單上的字元 
		    scanf("%c",&menu);//讀入menu的值 
		    switch(menu)//選擇要做哪一個 
		    {
		    	case'a':
		    	case'A':
		    	{
					system("cls");//清除螢幕 
			    	printf("輸入一個'a'到'n'的字元\n");//要求使用者輸入一個‘a’到‘n'的字元
					fflush(stdin); 
			    	scanf("%c",&ch);//讀入ch的值 
			    	if(ch>='a'||ch<='n')//若ch在'a'到'n'之間 
			    	{
				    	tri(ch); 
			    	}
			    	else
			    	{
				    	printf("輸入錯誤，請重新輸入");//顯示輸入錯誤，請重新輸入
			    	}
					system("pause");//螢幕畫面暫停，並等待使用者按任意鍵 
					break;//離開迴圈 
			  	} 
			  	case'b':
			  	case'B':
			  	{
					fflush(stdin);//使input buffer淨空  
					system("cls");//清除螢幕
					int n;//宣告整數變數 
					printf("請輸入一個1至9的整數\n");//要求使用者輸入一個1至9的整數
                	scanf("%d",&n);//讀入n的值 
					if(n>=1&&n<=9)//如果n為1~9的整數 
					{
				 		mult(n);//執行乘法表 
				 	}
				 	else
				 	{
				 		printf("輸入錯誤，請重新輸入\n");//顯示輸入錯誤，請重新輸入
				 	}
				 	system("pause");//螢幕畫面暫停，並等待使用者按任意鍵
				 	break;//離開迴圈
			  	}
			  	case'c':
			  	case'C':
			  	{
					aa:
					printf("continue?(y/n)");//顯示是否要繼續 
			  		char choice=getch();//宣告choice=上面那行的字元 
			  		switch(choice)
				  	{
				  		case'y':
				  		case'Y':
					 	{
							break;//離開迴圈
					 	}
						case'n':
				  		case'N':
					  	{
							return 0;
							break;//離開迴圈
					   	}
						default: 
						{
							printf("輸入錯誤，請重新輸入\n");//顯示輸入錯誤，請重新輸入
							goto aa;//回到詢問是否要繼續那行程式 
						}
			   	}
				break;//離開迴圈
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
void tri(char ch)
{
	int i,j;
	for(i=0;i<=ch-'a';i++)
	{
		for(j=0;j<=ch-'a';j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c",ch-j);
		}
		printf("\n");
	}
}
