#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    printf("Enter \n 1 for Triangle \n 2 for Square \n 3 for Circle \n 4 for Rectangle \n 5 for Parllelogram\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int a, b, c;
        float s, area;
        printf("Enter sides of triangle\n");
        scanf("%d %d %d", &a, &b, &c);
        s = (float)(a + b + c) / 2;
        area = (float)(sqrt(s * (s - a) * (s - b) * (s - c)));
        printf("Area of Triangle with sides %d,%d,%d is %f\n", a, b, c, area);
        break;
    }
    case 2:
    {
        float side, area;
        printf("Enter sides of square\n");
        scanf("%f", &side);
        area = (float)side * side;
        printf("Area of square is %f\n", area);
        break;
    }
    case 3:
    {
        float radius, area;
        printf("Enter radius of Circle\n");
        scanf("%f", &radius);
        area = (float)3.14159 * radius * radius;
        printf("Area of Circle with radius %f is %f\n", radius, area);
    }
    case 4:
    {
        float len, breadth, area;
        printf("Enter Length breadth of Rectnagle\n");
        scanf("%f %f", &len, &breadth);
        area = (float)len * breadth;
        printf("Area of Rectnagle is %f\n", area);
        break;
    }
    case 5:
    {
        float base, height, area;
        printf("Enter base and height of Parllelogram\n");
        scanf("%f %f", &base, &height);
        area = (float)base * height;
        printf("Area of Parllelogram is %f\n", area);
        break;
    }

    default:
    {
        printf("Invlaid Choice");
        break;
    }
    }
    return 0;
}