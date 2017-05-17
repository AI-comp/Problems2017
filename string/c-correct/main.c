#include <stdio.h>
#include <string.h>

char buf[200];

int main(int argc, char const *argv[])
{
  int T;
  scanf("%d", &T);
  while(T--){
    int n, k;
    scanf("%s %d", buf, &k);
    n = strlen(buf);
    if(k > n)printf("*\n");
    else printf("%c\n", buf[k-1]);
  }
  return 0;
}
