#include <iostream>
void swap (int *px, int *py)
{
    int temp = 0;
    std::cout << "*px = " << *px << std::endl;
    std::cout << "*py = " << *py << std::endl;
    temp = *px;
    *px = *py;
    *py = temp;
    std::cout << "*px = " << *px << std::endl;
    std::cout << "*py = " << *py << std::endl;

}
int main()
{
    int a=5;
    int b=6;
    int *aip = &a;
    int *bip = &b; 
    int x = 1,y=2,z[10];
    int *ip;
    ip = &x;
    y = *ip;
    std::cout << "&x = " << &x << std::endl;
    std::cout << "x = " << x << std::endl;
    std::cout << "ip = " << ip << std::endl;
    std::cout << "*ip = " << *ip << std::endl;
    std::cout << "y = " << y << std::endl;
    swap(aip,bip);
    system("pause");
    return 0;
}