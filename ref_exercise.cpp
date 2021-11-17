#include <iostream>

void swap (int &x, int &y)
{
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    int a= 5;
    int b= 6;
    swap (a,b);
    std::cout<<a;
    std::cout<<b;
    return 0;
}


