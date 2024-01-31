#include <cstdio>
int n,panda[10010],milk[10010],sum;
int main(){
	int i,j,pre;
	//freopen("input.txt","r",stdin);
	scanf("%d%d",&n,&panda[0]);
	milk[0]=200;
	for(i=1;i<n;i++){
		scanf("%d",&panda[i]);
		if(panda[i]==panda[i-1]) milk[i]=milk[i-1];
		else if(panda[i]>panda[i-1]){
			milk[i]=milk[i-1]+100;
		}else{
			milk[i]=200;
			for(j=i-1;j>=0;j--){
				if(panda[j]>=panda[j+1] && milk[j]<=milk[j+1])
					milk[j]+=100;
				else break;
			}
		}
	}
	for(i=0;i<n;i++) sum+=milk[i];
	printf("%d",sum);
	return 0;
} 
