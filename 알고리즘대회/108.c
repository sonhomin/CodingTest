#include <stdio.h>

int n, r;
int dap[20], check[20]={0,};

void rec(int, int);
int main()
{
	scanf("%d %d", &n, &r);
	rec(0,0);
	return 0;
}

void rec(int x, int t){
	int i;
	if(x == r){
		for(i=0;i<r;i++){
			printf("%c ", dap[i]+64 );
		}
		printf("\n");
		return;
	}
	for(i=t;i<n;i++){
		if(check[i] == 0){
			check[i]=1;
			dap[x] = i+1;
			rec(x+1,i);
			check[i]=0;
		}
	}
}
