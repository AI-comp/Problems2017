#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define min(x,y) x<y?x:y
#define max(x,y) x>y?x:y
#define bool int
#define true 1
#define false 0

int n,m,l;
int sx[505],sy[505];
int px[505],py[505];

bool close(int x,int y,int xx,int yy){
	return (x-xx)*(x-xx)+(y-yy)*(y-yy)<=l*l;
}

int main(int argc, char const *argv[])
{
	int cases;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d%d%d",&n,&m,&l);
		// sx[0]=sy[0]=0;
		// for(int i=1;i<=n;i++){
    for(int i=0;i<n;i++){
			scanf("%d%d",sx+i,sy+i);
		}
		for(int i=0;i<m;i++){
			scanf("%d%d",px+i,py+i);
		}
		int res=0;
		for(int j=0;j<m;j++){
			bool get=false;
			for(int i=0;i<n;i++){
				if(close(sx[i],sy[i],px[j],py[j])/*||close(sx[i+1],sy[i+1],px[j],py[j])*/)get=true;
				// if(sx[i]==sx[i+1]){
				// 	int miny=min(sy[i],sy[i+1]),maxy=max(sy[i],sy[i+1]);
				// 	if(abs(sx[i]-px[j])<=l&&miny<=py[j]&&py[j]<=maxy)get=true;
				// }else if(sy[i]==sy[i+1]){
				// 	int minx=min(sx[i],sx[i+1]),maxx=max(sx[i],sx[i+1]);
				// 	if(abs(sy[i]-py[j])<=l&&minx<=px[j]&&px[j]<=maxx)get=true;
				// }else printf("hoge\n");
			}
			if(get)res++;
		}
		printf("%d\n", res);
	}
	return 0;
}
