#include <iostream>
using namespace std;

int main()
{ 
    int x, arr[50], i, sval, status = 0, cval = 0;
    cout << "Please enter number of elements: ";
    cin >> x;
    cout << "Elements : ";
    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search : ";
    cin >> sval;
    for (i = 0; i < x; i++)
    {
        cval++;
        if (arr[i] == sval)
        {
            status = 1;
            break;
        }
    }
    if (status == 1)
    {
        cout << "Element position is" << i + 1;
    }
    else
    {
        cout << "Entered element is not found";
    }
    cout << "\ncomparisons made to search element is = " << cval;
    return 0;
}