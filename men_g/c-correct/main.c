#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numofcase;
	scanf("%d",&numofcase);
	while(numofcase--){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		printf("%d\n", a*3+b*2+c);
	}
	return 0;
}
