#include <stdio.h>

void Result( float fPercentage)
{
    if(0 < fPercentage < 35)
    {
        printf("Fail\n");
    }
    else if(35 <= fPercentage <= 49)
    {
        printf("Pass Class\n");
    }
    else if(50 <= fPercentage <= 60)
    {
        printf("Second Class\n");
    } 
    else if(61 <= fPercentage <= 74 )
    {
        printf("First Class\n");
    } 
    else if(75 <= fPercentage <= 100)
    {
        printf("First Class with distinction\n");
    }  
}

int main()
{
    auto float fValue = 0.0f;

    printf("Enter your percentage : ");
    scanf("%f",&fValue);

    Result(fValue);

    return 0;
}