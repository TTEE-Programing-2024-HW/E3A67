#include<stdio.h>//前置處理器的一種,將stdio檔案包含進去
#include<stdlib.h>//前置處理器的一種,將stdlib檔案包含進去
#include<conio.h>//前置處理器的一種,將conio檔案包含進去
#define row 9
#define col 9
char menu,seat[row][col],ch;//宣告變數
int x,y=0;//宣告整數變數 
void show1(char seat[row][col]);
void show2(char seat[row][col]);
void show3(char seat[row][col]);
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
		 switch(menu)//選擇要做哪一個 
		    {
		    	case'a':
		    	{
				  show1(seat);
				  show2(seat);
				  show3(seat);	
			  	} 
			  	case'b':
			  	{
					fflush(stdin);//使input buffer淨空  
					system("cls");//清除螢幕
					int p;
				    printf("請輸入人數(1~4):");
			        scanf("%d",&p);
			        while(p<1||p>4)  /*判斷是否是要求中的人數*/
					{
						system("CLS");
				        printf("人數錯誤，請重新輸入！\n");  /*判斷為否，要求使用者重新輸入*/
				        printf("請輸入人數(1~4):");
				        scanf("%d",&p);
			        }
			        system("CLS");
			        int c=0,k,max=9,min=0;
			        while (c<=1)  /*設定電腦排位次數的上限*/
					{
				      while(k!=1)  /*產生亂數座位*/
					 	{ 
					 	  int m,n;
					      m=rand()%(max-min+1)+min;
					      n=rand()%(max-min+1)+min;
					      if(seat[m][n]!=1)  /*將產生的亂數座位轉成被選中的座位*/
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
						     k=0;  /*電腦沒有選中符合需求的座位*/ 
                          }
				        }
				        printf("\\123456789\n");  /*印出座位表*/ 
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
				        printf("接受此電腦排位嗎(y/n)？\n");  /*要求使用者確認是否繼續*/ 
				        printf("(不接受次數達兩次將退回主選單)\n");
				        fflush(stdin);
				        scanf("%c",&ch);
			            while(ch!='y'&&ch!='n')  /*判斷是否為要求中的字元*/ 
				        {
					      system("CLS");
					      printf("錯誤訊息，請重新輸入！\n");  /*判斷為否，要求使用者重新輸入*/ 
					      printf("接受此電腦排位嗎(y/n)？");
					      scanf("%c",&ch);
				        }
				        if(ch=='y')  /*判斷使用者的選擇*/ 
				        {
					      for(int m=8;m>=0;m--)  /*將選中的座位轉為已預訂的座位*/ 
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
					      for(int m=8;m>=0;m--)  /*將未選中的座位放棄*/ 
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
			        printf("\n已選擇兩次不接受，退回主選單。");
			        printf("\n(按下任意鍵回到主選單)\n");  /*功能結束，提示回到主選單*/ 
			        break;
			  	}
			  	case'c':
			  	{
				}
			  	case'd':
			  	{
					aa:
					printf("continue?(y/n)");//顯示是否要繼續 
			  		char choice=getch();//宣告choice=上面那行的字元 
			  		switch(choice)
				  	{
				  		case'y':
					 	{
							break;//離開迴圈
					 	}
						case'n':
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

