// Find if a year is leap year or not
#include<iostream>

using namespace std;

int main() 
{
    
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    if( year % 4 != 0 ^ ( year % 100 == 0 && year % 400 != 0 )
    {
        cout << " Not a leap year!";
    }
    else 
    {
        cout << "Leap year!";
    }
    
    return 0;
}
  
