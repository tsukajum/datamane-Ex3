#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#define MAX 20
int main(){
  int coin,i,Heads=0,Tails=0;
  char name[MAX];
  printf("Who are you?¥n> ");
  scanf("%s",name);
  printf("Hello, %s¥n",name);
  printf("Tssing a coin...¥n");
  for(i=0;i<3;i++){
    srand(time(NULL));
    coin=rand()%2;
    if(coin==0){
      printf("Round %d: Heads¥n",i+1);
      Heads++;
    }
    else{
      printf("Round %d: Tails¥n",i+1);
      Tails++;
    }
    sleep(1);
  }
  printf("Heads: %d, Tails: %d¥n",Heads,Tails);
  if(Heads>Tails) printf("%s won¥n",name);
  else printf("%s lost¥n",name);
}
