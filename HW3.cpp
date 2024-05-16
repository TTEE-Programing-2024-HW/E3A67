#include<stdio.h>//前置處理器的一種,將stdio檔案包含進去
#include<stdlib.h>//前置處理器的一種,將stdlib檔案包含進去
#include<conio.h>//前置處理器的一種,將conio檔案包含進去
char menu;//宣告主選單的變數
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
		printf("enter the password:");//提示使用者輸入四個字的密碼 
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
		printf("|a. Available seats       |\n");
		printf("|b. Arrange for you       |\n");   
		printf("|c. Choose by yourself    |\n");
		printf("|d. Exit                  |\n");
		printf("---------------------------\n");//顯示主選單
		printf("請根據選單上的字元以執行程式:");//要求使用者輸入一個選單上的字元 
		scanf("%c",&menu);//讀入menu的值 
	  }
	} 
}
