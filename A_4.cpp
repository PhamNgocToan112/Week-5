#include <iostream>
#include<string>
using namespace std;
void test1(int x[])
{
    for (int i = 0; i < 5; i++) cout << &x[i] << " ";
   
}
void test2(string s)
{
    cout << &s ;
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) cout << &a[i] << " ";
    cout << endl;
    
    // phuong thuc pass by reference
    string s;
    test1(a);
    cout << endl;
    
    cout << &s << endl;
    test2(s);
    cout << endl;
    
     // phuong thuc pass by reference
    return 0;
    
}
