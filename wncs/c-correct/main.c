#include <stdio.h>
#include <string.h>

char c[101];
int w[101],res[101];

void swap(int *a,int *b){
  int tmp=*a; *a=*b; *b=tmp;
}

int main(int argc, char const *argv[])
{
  int numofcase=0;
  scanf("%d",&numofcase);
  while(numofcase--){
    int n;
    scanf("%d",&n);
    memset(w,0,sizeof(w));
    for(int i=0;i<n;i++){
      scanf("%s",c);
      res[i]=i+1;
      for(int j=0;j<n;j++){
        if(c[j]=='o')w[i]++;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
        if(w[i]<w[j] || (w[i]==w[j] && res[i]>res[j])){
          swap(&w[i],&w[j]);
          swap(&res[i],&res[j]);
        }
      }
    }
    for(int i=0;i<n;i++){
      printf("%d%c", res[i],i==n-1?'\n':' ');
    }
  }
  return 0;
}
