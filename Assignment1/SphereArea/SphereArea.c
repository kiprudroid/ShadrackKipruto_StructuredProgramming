#include <stdio.h>

int main(void){
    double radius;
    const double PI = 3.14159 ;
    double area;
    
    printf("Program to calculate the area of a sphere . \n");

    printf("Enter the radius of the Sphere (cm): ");
    scanf("%lf",&radius);
    area = 4.0 * PI * radius * radius ;
    printf("The surface area of the sphere is: %.2lf cm^2\n", area);

}