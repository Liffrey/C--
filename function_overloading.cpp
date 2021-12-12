//example code got from cplusplus.com/doc/tutorials/function2/
//function overloading
#include <iostream>
int operate(int a, int b)
{
    return (a*b);
}

double operate (double a, double b)
{
    return (a/b);
}

int main() 
{
    int x=10,y=6;
    double k=25,l=43;
    std::cout << operate(x,y)<< '\n';
    std::cout << operate(k,l)<< '\n';
    return 0;
}