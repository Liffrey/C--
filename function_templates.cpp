//example code got from cplusplus.com/doc/tutorials/function2/
//function template
#include <iostream>

//template <class T>
template <typename T>

T sum (const T& a, const T& b)
{
    T result;
    result = a+b;
    return result;
}

int main()
{
    int i=5, j=6, k;
    double f=2.0,g=5.4,h;
    k=sum<int>(i,j);
    h=sum<double>(f,g);
    std::cout<<k<<'\n';
    std::cout<<h<<'\n';
    return 0;
}