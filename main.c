#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//practice01
	
	int score[5];
	int i;
	
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;	
	score[3] = 40;
	score[4] = 50;	
	
	for (i=0;i<5;i++)
		printf("score[%i] = %i\n", i, score[i]);
	
	//practice02 not essential
	
	int i, average, sum;
	int grade[5];
	
	for(i=0;i<5;i++)
	{	//grade[i] = rand()%100;
		printf("input the grade :");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	for(i=0;i<5;i++)
		printf("grade[%d] = %d\n", i, grade[i]);
		
		
	average = sum / 5;
	printf("Average : %d\n", average);
	
	//practice03-1
	
	int i;
	int grade[10];
	int score[10];
	
	for(i=0;i<10;i++)
	{
		grade[i] = rand()%100;
		score[i] = grade[i];
	}
		
	for(i=0;i<10;i++)
		printf("score[%d] = %d\n", i,score[i]);
	
	//practice03-2
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 6, 4, 5};
	//int flag_same = 1;
	
	for (i=0; i<SIZE; i++)
	{	
		if (a[i] != b[i])
		{
			printf("%ith vlaue is different!",i+1);
			//flag_same = 0;
		}
	}

	//Practice04 not essential
	//Practice05 not essential
	
	//Practice06
	
	int i,j;
	int A[ROWS][COLS] = 
	{
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5} ,
	};
		
	int B[ROWS][COLS] = 
	{
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1} 
	};
	
	int C[ROWS][COLS];
	
	for (i=0;i<ROWS;i++)
	{
		for (j=0;j<COLS;j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}

	return 0;
}
