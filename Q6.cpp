#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    float basic[n], bonus[n], net[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter basic salary of employee " << i+1 << ": ";
        cin >> basic[i];
    }
    for(int i = 0; i < n; i++)
    {
        bonus[i] = basic[i] * 0.12;   
        net[i] = basic[i] + bonus[i];
    }
    cout << "\nEmployee Salary Details\n";
    cout << "---------------------------------------------\n";
    cout << setw(10) << "Emp No"
         << setw(15) << "Basic"
         << setw(15) << "Bonus"
         << setw(15) << "Net Salary\n";
    for(int i = 0; i < n; i++)
    {
        cout << setw(10) << i+1
             << setw(15) << basic[i]
             << setw(15) << bonus[i]
             << setw(15) << net[i] << endl;
    }
    return 0;
}