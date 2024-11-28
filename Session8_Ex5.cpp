#include<stdio.h>
int main(){
	int arr[4][4]={{5, 5  ,5   ,5},
	               {5, 100,2000,5},
	               {5,3000, 400,5},
	               {5, 5  ,  5 ,5}},sum=0;
	for(int cols=0;cols<4;cols++){
		sum += arr[0][cols];
		sum += arr[3][cols];
	}
	for(int rows=1;rows<3;rows++){
		sum += arr[rows][0];
		sum += arr[rows][3];
	}
	printf("Tong cac phan tu tren duong bien: %d",sum);
	return 0;
}
