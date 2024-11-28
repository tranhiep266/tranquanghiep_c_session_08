#include<stdio.h>
int main(){
	int arr[4][4]={{5, 5  ,5   ,5},
	               {5, 100,2000,5},
	               {5,3000, 400,5},
	               {5, 5  ,  5 ,5}},sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i=j){
				sum += arr[i-1][j-1];
				printf("%d ",arr[i-1][j-1]);
			}
		}
	}
	printf("Tong cac phan tu tren duong cheo chinh: %d",sum);
	return 0;
}
