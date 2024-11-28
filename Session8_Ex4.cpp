#include<stdio.h>
int main(){
	int arr[2][3]={{20,2},{1,10,2}},max=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}
		}
	}
	printf("Phan tu lon nhat: %d",max);
	return 0;
}
