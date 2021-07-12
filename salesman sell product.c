// 5 salesman selling 3 products find total per person and total
#include<stdio.h>
int main()
{
    int sales[5][3], i, j, total_sales = 0;
    printf("\n ENTER THE DATA");
    printf("********************************");
    for(i=0;i<5;i++)
    {
        printf("\n Enter the sales of 3 items sold by salesman %d: ",i+1);
        for(j=0;j<3;j++)
           scanf("%d", &sales[i][j]);
    }

    // PRINT TOTAL SALES BY EACH SALESMAN
    for(i=0;i<5;i++)
    {
        total_sales = 0;
        for(j=0;j<3;j++)
           total_sales += sales[i][j];
        printf("\n Total sales By salesman %d = %d",i+1,total_sales);
    }

    // TOTAL SALES OF EACH ITEMS
    
    for(i=0;i<3;i++)
    {
        total_sales = 0;
        for(j=0;j<5;j++)
           total_sales += sales[j][i];
        printf("\n Total sales of item %d = %d",i,total_sales);
    }
}
