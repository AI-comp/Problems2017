#include <stdio.h>

int main(int argc, char const *argv[])
{
  int numofcase;
  scanf("%d",&numofcase);
  while(numofcase--){
    int n;
    scanf("%d",&n);
    for(int i=0;i<100000;i++){
      if((n+i)%4==0){
        printf("%d\n", i);
        break;
      }
    }
  }
  return 0;
}
