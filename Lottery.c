#include <stdio.h>
void main()
{
  int WinNo[10] = {1522, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995}; 
  float WinAmount[10] = {50000, 10000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};
  int N = 10;
  int i, won; 
  
  int YourLotteryNo;  
   
  printf("Enter your Lottery Number (0 to end) May the luck be with you: "); 
  scanf("%d", &YourLotteryNo); 
  while (YourLotteryNo != 0) 
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNo == WinNo[i]) 
       {
          printf("Congratulations You Won %8.2f baht eiei\n", WinAmount[i]); 
          won = 1;
       }
    }
    if (!won) 
      printf("Sorry your Lottery Number : %4d did not win\n na ja", YourLotteryNo); 
    printf("Please,Enter your Lottery Number (0 to end): na ja"); 
    scanf("%d", &YourLotteryNo); 
  }
  printf("BYE");
  scanf("%d", &i);
}
