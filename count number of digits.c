#include <stdio.h>
int main()
{
    int num,count=0;
    printf("\t\tProgram to count digits of a number\n");
    printf("Enter a number:");
    scanf("%d",&num);
    printf("%d",num);
    while(num>0)
    {
        count++;
        num=num/10;
    }
    printf("Number of digits are: %d",count);
    return 0;
}
