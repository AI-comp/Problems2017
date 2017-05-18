#include <stdio.h>
#include <string.h>

char buf[200];

int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  for(int i = 0;i < t;i++){
    int n, k;
    scanf("%s %d", buf, &k);
    n = strlen(buf);
    if(k > n)printf("*\n");
    else printf("%c\n", buf[k-1]);
  }
  return 0;
}
