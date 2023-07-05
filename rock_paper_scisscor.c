#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int m(int x)
{
  srand(time(NULL));
  return rand() % x;
}
int greater(char p1,char cpu)
{
  if(p1==cpu)                        
  {
    return -1;
  }
  if((p1=='r')&&(cpu=='s'))
  {
    return 1;
  }
  else if((p1=='s')&&(cpu=='r'))
  {
    return 0;
  }
  else if((p1=='r')&&(cpu=='p'))
  {
    return 0;
  }
  else if((p1=='p')&&(cpu=='r'))
  {
    return 1;
  }
  else if((p1=='p')&&(cpu=='s'))
  {
    return 0;
  }
  else if((p1=='s')&&(cpu=='p'))
  {
    return 1; 
  }
}
int main()
{
  int i,n;
  int pl1=0;int CPU1=0;
  char text[]={'R','P','S'};
  char p1,p2,cpu;
  printf("\nWelcome to Rock, Paper and Scisscor Game!!!\n\n");
  for(i=1;i<=3;i++)
  {
    //Player 1's turn:
    printf("{ player 1's turn: }\n");
    printf("For playing this game select:\t1)Rock 2)Paper 3)Scisscor\n");
    scanf("%d",&n);
    getchar();
    p1=text[n-1];
    printf("YOU chose %c\n",p1);

    // CPU's Turn:
    printf("\n\n{ CPU's turn }\n");
    printf("For playing this game  cpu selects:\t 1)Rock 2)Paper 3)Scisscor\n");
    n= m(3) + 1;
    cpu=text[n-1];
    printf("CPU chose %c\n\n",cpu);

//  score comparison
int result = greater(p1,cpu);
   if(result==0)
   {
    pl1+=1;
    printf("CPU got the score\t\t");
   }
   else if(result==-1)
   {
    pl1+=1;
    CPU1+=1;
    printf("Its a DRAW :both will get the score\t\t");
   }
   else{
    CPU1+=1;
    printf("Player got the score\t\t");
   }
   printf("pl1=%d\tCPU1=%d\n\n\n",pl1,CPU1);
  }
  if(pl1>CPU1)
  {
    printf("YOU WIN!!!");
  }
  else if(CPU1>pl1){
    printf("CPU WIN!!!");
  }
  else 
  {
    printf("Its a DRAW");
  }
  return 0;
}