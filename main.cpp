#include <iostream>
using namespace std;


int main()

{   // 1 пункт

    int a, b, c;

    cin >> a >> b >> c;
    if ((a < b) && (b > c))
    {
        cout << b + a - c << endl; 
    }
    else if (b % c == 0)
    {
        cout << b / c - b << endl;
    }
    else
    {
        cout << a * b - c << endl;
    }

    // 2 пункт

    int n;
    cin >> n;
    if ((n > 0) & (n <= 12))
    {
        switch(n)
        {
            case 1:
                cout << "January" << endl;
                break;
            case 2:
                cout << "February" << endl;
                break;
            case 3:
                cout << "Marth" << endl;
                break;
            case 4:
                cout << "April" << endl;
                break;
            case 5:
                cout << "May" << endl;
                break;
            case 6:
                cout << "June" << endl;
                break;
            case 7:
                cout << "July" << endl;
                break;
            case 8:
                cout << "August" << endl;
                break;
            case 9:
                cout << "September" << endl;
                break;
            case 10:
                cout << "October" << endl;
                break;
            case 11:
                cout << "November" << endl;
                break;
            case 12:
                cout << "December" << endl;
                break;
        }    
    }
    else 
    {
        cout << "N must be form 1 to 12" << endl;
    }

    // 3 пункт

    int x;
    cin >> x;
    switch(x)
    {
        case -1:
            cout << "Negative number" << endl;
            break;
        case 1:
            cout << "Positive number" << endl;
            break;
        default:
            cout << "X must be -1 or 1" << endl;
            break;
    } // выбрал switch-case, т. к. на мой взгляд на данную задачу уходит менше времени и строчек



    


}