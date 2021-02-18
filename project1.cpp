#include <iostream>
#include <math.h>



double addition(double x, double y){
    return x+y;

}

double subtraction(double x, double y){
    return x-y;

}

double production(double x, double y){
    return x*y;

}

double division(double x, double y){
    return x / y;

}

int main() {
    double x, y, result;
    int op;
    std::cout << "Enter operands(x and y):";
    std::cin >> x >> y;

    std::cout << "Choose operation:\n1 - addition\n2 - subtraction\n3 - production\n4 - division\n";
    std::cin >> op;

    switch(op){
        case 1:
            result = addition(x, y);
            break;
        case 2:
            result = subtraction(x, y);
            break;
        case 3:
            result = production(x, y);
            break;
        case 4:
            result = division(x, y);
            break;
        default:
            std::cout << "invalid";
            break;
    }

    std::cout << "Result: " << result << "\n";

    return 0;
}
