#include <stdio.h>

double Areaofcircle(double dRADIUS)
{   
    auto const double dPI = 3.14;
    auto double dAREA = 0.0;
    dAREA = dPI*dRADIUS*dRADIUS;
    return dAREA;
}

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