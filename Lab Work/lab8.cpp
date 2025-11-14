#include <iostream>
using namespace std;
int main()
{
    int books, totalfine;
    cout << "enter the number of books late" << endl;
    cin >> books;
    for (int i = 1; i <= books; i++)
    {
        int numberdays, fine = 5;
        cout << "enter number of days book " << i << " is late" << endl;
        cin >> numberdays;
        for (int j = 2; j <= numberdays; j++)
        {
            fine = fine * 2;
            if (fine > 1000)
            {
                fine=1000;
            }
            else
            {
                continue;
            }
        }
        cout << "fine for book " << i << " is " << fine << endl;
        totalfine = totalfine + fine;
    }
    cout << "total fine is " << totalfine << endl;
    return 0;
}