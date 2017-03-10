#include <stdio.h>
#include <string.h>

#define MAX_BUF_SIZE 11111

char buf[MAX_BUF_SIZE];

int main(int argc, char const *argv[])
{
  //int cases;
  //scanf("%d",&cases);
  //while(cases--){
  while(scanf("%s",buf)!=EOF){
    int buflen=strlen(buf);
    for(int i=0;i<buflen;i++){
      buf[i]-=10;
      while(buf[i]<'a')buf[i]+=26;
    }
    printf("%s\n", buf);
  }
  return 0;
}
