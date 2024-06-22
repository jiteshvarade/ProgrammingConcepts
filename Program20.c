#include <stdio.h>

// Logical OR || -> If any  of the condition is TRUE then it enters inside the if 
// Logical AND && -> If all of the condition are TRUE then it enters inside the if

void DisplayClass( float fPercentage)
{
    if ((fPercentage < 0.00) || (fPercentage > 100.00))                        // Filter
    {
        printf("Invalid Percentage\n");
    }

    if((fPercentage >= 0.0) && (fPercentage < 35))                                      
    {
        printf("Fail\n");
    }
    else if((fPercentage >= 35.00) && (fPercentage < 50.00))
    {
        printf("Pass Class\n");
    }
    else if((fPercentage >= 50.00) && (fPercentage < 60.00))
    {
        printf("Second Class\n");
    }
    else if((fPercentage >= 60.00) && (fPercentage < 75.00))
    {
        printf("First Class\n");
    }
    else if((fPercentage >= 75.00) && (fPercentage <= 100.00))
    {
        printf("First Class with distiction\n");
    }
}

int main()
{
    auto float fValue = 0.0f;

    printf("Enter your percentage : ");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}