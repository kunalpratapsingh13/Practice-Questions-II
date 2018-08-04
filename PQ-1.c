#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[2][3],i,j;
	printf("\nENTER 6 VALUES FOR THE MATRIX:\n");
	for (i=0;i<2;i++)
	for (j=0;j<3;j++)
	scanf("%d",&mat[i][j]);
	printf("\nVALUES FOR MATRIX-A ARE:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}	
	printf("\nVALUES FOR THE TRANSPOSE MATRIX ARE:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%5d",mat[j][i]);
		}
		printf("\n");
	}
	getch();
}
