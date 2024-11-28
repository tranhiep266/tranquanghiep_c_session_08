#include<stdio.h>
int main(){
	int n,arr[n][n];
	printf("Nhap vao 1 so nguyen:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=i++;
		}printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%4d",arr[i][j]);
		}printf("\n");
	}
	return 0;
}
