#include <stdio.h>

int main()

{
    int a[5][5]={
{12,22,14,54,34},
{23,42,32,34,45},
{11,22,33,44,55},
{12,31,14,15,16},
{10,20,30,40,50},
};
int i,j;
int sum=0;

//row sum
    printf("Row total:");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            sum+= a[i][j];
        }
        printf("%d",sum);
        sum=0;};
        //Column sum
    printf("Column total:");
    for(j=0;j<5;j++)
    {
        for(i=0;i<5;i++)
        {
            sum+= a[i][j];
        }
        printf("%d",sum);
        sum=0;
    };
};