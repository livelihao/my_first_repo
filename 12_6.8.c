#include <stdio.h>
#define MAX_SIZE 101
#include <string.h>
void get_matrix(int ma[101][101],int x,int y)
{
	for(int j=0;j<x;j++)
		for(int i=0;i<y;i++)
			scanf("%d",&ma[j][i]);
}

void mul_matrix(int lat[101][101],int a1[101][101],int a2[101][101],int x,int y,int z)
{
	int sum;
	for(int j=0;j<x;j++)
		for(int i=0;i<z;i++)
		{
			sum =0;
			for(int k=0;k<y;k++)
				sum +=a1[j][k]*a2[k][i];
			lat[j][i] = sum;
		}
}

void put_matrix(int lat[101][101],int x,int z)
{
	for(int j=0;j<x;j++)
	{
		for(int i=0;i<z;i++)
			if(!i)
				printf("%d",lat[j][i]);
			else
				printf(" %d",lat[j][i]);
		printf("\n");	
	}
}
int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
  
    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);
  
    return 0;
}
