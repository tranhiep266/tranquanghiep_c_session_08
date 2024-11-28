#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5},n,temp=0;
	printf("Nhap 1 so:");
	scanf("%d",&n);
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		if(arr[i]==n){
			printf("Vi tri trong mang:%d",i);
			temp=1;
			break;
		}
	}
	if(temp=0){
		printf("Khong co trong mang");
	}
	return 0;
}
