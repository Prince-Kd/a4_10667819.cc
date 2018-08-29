#include <iostream>

using namespace std;

int main()
{
    int num, i;
    bool Prime = true;

    cout<<"PLEASE ENTER A POSITIVE INTEGER: "<<endl;
    cin>>num;

    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            Prime = false;
            break;
        }

    }
    if (Prime)
    {
        cout<<"This number is a prime number.";
    }
    else
    {
        cout<<"This number is not a prime number.";
    }
    return 0;
}
