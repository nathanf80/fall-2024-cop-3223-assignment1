#include<stdio.h>
#include<math.h>

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

double calculateDistance() {
    //ask for user input of x1 and x2 values
    printf("Enter x1 and x2:\n");
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);

    //ask for user input of y1 and y2 values
    printf("Enter y1 and y2:\n");
    double y1, y2;
    scanf("%lf %lf", &y1, &y2);

    //print the first and second points
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("the distance between the 2 points is %lf\n",distance);
    return distance;
}

int main(int argc, char **argv) {
    calculateDistance();
    return 0;
}
