#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main(){
  int coin,i,Heads=0,Tails=0;
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
  if(Heads>Tails) printf("You won¥n");
  else printf("You lost¥n");
}
