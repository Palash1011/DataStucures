#include<stdio.h>
int main(){
	int a[100],d[100],i,j,k=0,n;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("duplicate values\n");
				printf("%d",a[i]);
			}
		}
	}
	
	return 0;
}
