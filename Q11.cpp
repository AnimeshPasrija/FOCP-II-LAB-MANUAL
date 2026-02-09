#include <iostream>
using namespace std;
int main()
{
    int qty;
    float price, total, discount = 0, finalAmount;
    cout << "Enter quantity of items: ";
    cin >> qty;
    cout << "Enter price per item: ";
    cin >> price;
    total = qty * price;
    if(qty > 1000)
        discount = total * 0.10; 
    finalAmount = total - discount;
    cout << "\nTotal Cost = " << total;
    cout << "\nDiscount = " << discount;
    cout << "\nFinal Amount to Pay = " << finalAmount;
    return 0;
}