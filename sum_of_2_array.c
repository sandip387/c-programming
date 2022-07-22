#include<stdio.h> 
int main() 
{ 
	int M1[4][4],M2[4][4], sum[4][4]; 
 
	//Take Inputs 
	int i,j; 
	for(i=0;i<4;i++) 
	{ 
		for(j=0;j<4;j++) 
		{ 
			printf("Enter element in position %d %d of both matrices",i,j); 
			scanf("%d",&M1[i][j]); 
			scanf("%d",&M2[i][j]); 
			 
			sum[i][j]=M1[i][j] + M2[i][j];	//Storing Sum into res 
		} 
	} 
 
	for(i=0;i<4;i++) 
	{ 
		for(j=0;j<4;j++) 
			printf("the sum is %d ",sum[i][j]); 
		printf("\n"); 
	} 
	return 0; 
} 