/*
Nathan Forrer, 5530715
9/8/24
Parra, 0V05
purpose: this program takes user inputs of 2 sets of x and y coordinates and calculates various geometric properties within 5 separate functions
*/


#include<stdio.h>
#include<math.h>
#define pi 3.14159


void printPoints(double x1, double x2, double y1, double y2){

    //print the first and second points
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);
}

double findDistance(double x1, double x2, double y1, double y2){
    //calculates the distance between points
    double distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    return distance;
}

double calculateDistance() {
    //ask user to input all x and y coords for both points used in the function
    printf("Enter x1, x2, y1, and y2:\n");
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    
    //prints points entered by the user
    printPoints(x1,x2,y1,y2);

    double distance = findDistance(x1,x2,y1,y2);
    printf("The distance between the two points is %.3lf\n",distance);
    return distance;
}

double calculatePerimeter(){
    //ask user to input all x and y coords for both points used in the function
    printf("Enter x1, x2, y1, and y2:\n");
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    
    //prints points entered by the user
    printPoints(x1,x2,y1,y2);

    //calculates perimeter (circumference) of a circle with a diameter equal to the distance between entered points
    double diameter = findDistance(x1,x2,y1,y2);
    double circumference = pi*diameter;
    printf("The perimeter of the city encompassed by your request is %.3lf\n", circumference);
    return 2.5;

}

double calculateArea(){
    //ask user to input all x and y coords for both points used in the function
    printf("Enter x1, x2, y1, and y2:\n");
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    
    //prints both x and both y points entered by the user
    printPoints(x1,x2,y1,y2);

    //calculates area of a circle with a diameter equal to the distance between entered points
    double radius = findDistance(x1,x2,y1,y2)/2;
    double area = pi*pow(radius,2);
    printf("The area of the city encompassed by your request is %.3lf\n", area);
    return 1.0;
}

double calculateWidth(){
    //ask user to input all x and y coords for both points used in the function
    printf("Enter x1, x2, y1, and y2:\n");
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    
    //prints both x and both y points entered by the user
    printPoints(x1,x2,y1,y2);

    //calculates the x component (width) of the line formed between the entered points
    double width = findDistance(x1,x2,y1,y2);
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    return 1.5;
    //difficulty of 1.5 becasue its deceptively simple which makes me think i didnt unnderstand the assignment
}

double calculateHeight(){
    //ask user to input all x and y coords for both points used in the function
    printf("Enter x1, x2, y1, and y2:\n");
    double x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    
    //prints both x and both y points entered by the user
    printPoints(x1,x2,y1,y2);

    //calculates the x component (width) of the line formed between the entered points
    double height = findDistance(x1,x2,y1,y2);
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    return 1.5;
}


int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
