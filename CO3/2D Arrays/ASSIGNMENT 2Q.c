#include <stdio.h> 
void sum(int m, int n,int a[][n])  
{ int i,j;
    printf("Sum of elements in each column\n"); 
    for (j = 0; j < n; j++) 
	{ 
        int sum = 0; 
        for (i = 0; i < m; i++) 
		{ 
            sum += a[i][j]; 
        } 
        printf("Sum of column%d: %d\n", j + 1, sum); 
    } 
} 
void accept(int m,int n,int a[][n]) 
{ int i,j;
    for (i = 0; i < m; i++)  
    { 
        for (j = 0; j < n; j++)  
        { 
            scanf("%d", &a[i][j]); 
        } 
    } 
} 
void print(int m,int n,int a[][n]) 
{ int i,j;
    for(i=0;i<m;i++) 
    { 
        for(j=0;j<n;j++) 
        { 
            printf("%4d",a[i][j]); 
        } 
        printf("\n"); 
    } 
} 
int main()  
{ 
    int m, n; 
    printf("Enter the number of rows "); 
    scanf("%d", &m); 
    printf("Enter the number of colums "); 
    scanf("%d", &n); 
    int a[m][n]; 
    printf("Enter the elements of the matrix");     
    accept(m,n,a); 
    print(m,n,a); 
    sum(m,n,a); 
}
