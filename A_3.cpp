#include <iostream>


using namespace std;
void test1(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
    cout << &x << " " << &y << endl;
}
void test2(int& x, int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
    cout << &x << " " << &y << endl;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    test1(a, b);
    test2(a, b);
   
    return 0;
    
    // tham tri la truyen cho doi so ban sao
 
    
}
