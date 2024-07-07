#include<stdio.h>
int main()
{
	int i,j,m ,n,a[50][50],b[50][50];
	printf("enter row of matrices"); 
	scanf(" %d", &m);
	printf("enter coloumn of matrices");
	scanf(" %d", &n);
	printf("enter element of matrices");
	for(i=0;i<m;i++){
	
	for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("matrices a is:");
		printf("\n");
	
		for(i=0;i<m;i++){
	for(j=0;j<n;j++)
{
	printf("%d",a[i][j]);
    printf("\t");
}	printf("\n");
	
}
	printf("enter element of b matrices");
	for(i=0;i<m;i++){
	
	for(j=0;j<n;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	printf("matrices b is:");
		printf("\n");
	
		for(i=0;i<m;i++){
	for(j=0;j<n;j++)
{
	printf("%d",b[i][j]);
    printf("\t");
}	printf("\n");
	
}
return 0;
}
