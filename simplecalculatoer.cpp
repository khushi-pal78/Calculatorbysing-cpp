#include <iostream>
using namespace std;
int main()
{
    int x, z;
    cout<<"Please enter 1st number ="<<endl;
    cin>>x;
    cout<<"Please enter 2nd number ="<<endl;
    cin>>z;
    int sum=x+z;
    int subtract = x-z;
    int product = x*z;
    float divide = x/z;
    int remainder = x%z;

    cout<<"the sum is ="<<sum<<endl;
    cout<<"the subtraction is ="<<subtract<<endl;
    cout<<"the multiplication is ="<<product<<endl;
    cout<<"the division is ="<<divide<<endl;
    cout<<"the remainder is ="<<remainder<<endl;
    return 0;


}
