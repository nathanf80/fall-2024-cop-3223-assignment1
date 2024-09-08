#include<stdio.h>
#include<math.h>
#define pi 3.14159

/*
double getMultiple(int arg1) {
    double result = arg1 * 10;
    return result;
}

int main(int argc, char** argv){
    int newVariable = 5;
    double giveMyMultiple = getMultiple(newVariable);
    printf("the multiple of %d is %lf\n",newVariable, giveMyMultiple);

    return 0;
}
*/
/*
double askForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}
*/

void printPoints(double x1, double x2, double y1, double y2){

    //print the first and second points
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);
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
    printf("The distance between the 2 points is %lf\n",distance);
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
    printf("The perimeter of the city encompassed by your request is %lf\n", circumference);
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
    printf("The area of the city encompassed by your request is %lf\n", area);
    return 1.0;
}

double calculateWidth(){
    
}


int main(int argc, char **argv) {
    //calculateDistance();
    //calculatePerimeter();
    //calculateArea();
    return 0;
}
