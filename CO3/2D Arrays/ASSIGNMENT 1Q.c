#include <stdio.h> 
void sum(int m, int n, int a[][n])  
{ int i,j;
    printf("Sum of elements in each row:\n"); 
    for (i = 0; i < m; i++)  
    { 
        int sum=0; 
        for(j = 0; j < n; j++)  
        { 
            sum += a[i][j]; 
        } 
        printf("Sum of row%d = %d\n", i + 1, sum); 
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
