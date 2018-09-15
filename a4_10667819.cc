#include<iostream>
#include<conio.h>
#include<stdlib.h>
 
using namespace std;
int gcd(int a, int b)
{
    return (b != 0) ? gcd(b, a % b) : a;
}
 
int main(void)
{
    int num1, num2, result;
    cout << "Enter two numbers: ";
    cin >> num1;
    cin >> num2;
    result = gcd(num1, num2);
    if (gcd)
        cout << "\nThe GCD of " << num1 << " and " << num2 << " is: " << result
                << endl;
    else
        cout << "\nInvalid input!!!\n";
    return 0;
}
