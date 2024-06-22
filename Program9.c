// Problem Statement : Accept radius from user and claculate the area of circle

// Step 1 : UNderstand the problem stattement 
// Conclusion : We are going to use formula as PI*R*R

// Step 2 : Algorithm 
/*
    START
        Accept radius from user and store into RADIUS
        Create varible as PI and store vlaue 3.14
        Calculate are PI*RADIUS*RADIUS
        DIsplay the vlaue of Area to user
    STOP
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name :   Areaofcircle
// Desciption :      It is ised to calculate area of circle 
// Input Arguments : Float
// Output :          Float
// Auther name :     Jitesh Anil Varade
// Date :            02/10/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


double Areaofcircle(double dRADIUS)
{   
    auto const double dPI = 3.14;
    double dAREA = 0.0;
    dAREA = dPI*dRADIUS*dRADIUS;
    return dAREA;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point function of an appilication which performs Area of circle 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    auto double dPI = 3.14;
    auto double dRadius = 0.0;
    auto double dArea = 0.0;

    printf("Enter Radius : ");
    scanf("%lf",&dRadius);

    dArea = Areaofcircle(dRadius);

    printf("Area of circle is : %lf\n",dArea);

    return 0;

}