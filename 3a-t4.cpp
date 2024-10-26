#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum: ";
    cin >> k;
    
    while (cin.fail()) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Error code: 1nt-3-g3r. Enter an integer: ";
        cin >> k;
    }
    
    if (k == 0)
    { do 
        {
        cout << "The total sum of " << k << " integer is: " << sum_k;
        return 0;
        }
    while (k == 0);
    }
    while (i <= k)
        { 
            cout << "Enter integer nr. " << i << ": ";
            cin >> number;
            
            while(cin.fail())
            {
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Error code: 1nt-3-g3r. Enter an integer nr. " << i << ": ";
                cin >> number;
            }
            
            sum_k += number;
            i++;
        } 
    
    cout << "The total sum of " << k << " integer is: " << sum_k;
return 0;
}