/*
    Written by.: Christopher Luck
    Purpose....: Problem 1 solution
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void testNumber(int, int, int);

int main()
{
    int testCases;
    int a;
    int b;
    int c;
    cin >> testCases;
    for(int i=0;i<testCases;i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        testNumber(a,b,c);
    }
    system("pause");
    return 0;
}

void testNumber(int a,int b, int c)
{
    if(a + b == c)
        cout << "Addition" << endl;
    else if(a - b == c)
        cout << "Subtraction" << endl;
    else if(a * b == c)
        cout << "Multiplication" << endl;
    else if(a / b == c)
        cout << "Division" << endl;
    else if(a % b == c)
        cout << "Modulo" << endl;
}
