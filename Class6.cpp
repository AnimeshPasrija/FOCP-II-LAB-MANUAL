#include <iostream>
using namespace std;

class Student {
private:
    int rn;
    string name;
    int m1, m2, m3;

public:
    void inputDetails() {
        cout << "Enter rno, name, m1, m2, m3: ";
        cin >> rn >> name >> m1 >> m2 >> m3;
    }
    int calculateTotal() const {
        return m1 + m2 + m3;
    }
    void displayDetails() const {
        cout << "Name: " << name
             << "\nRno: " << rn
             << "\nM1: " << m1
             << "\nM2: " << m2
             << "\nM3: " << m3
             << "\nTotal: " << calculateTotal();
    }
};
int main() {
    Student s1, s2;
    s1.inputDetails();
    cout << endl;
    s2.inputDetails();
    cout << endl;
    s1.displayDetails();
    cout << endl;
    s2.displayDetails();

    return 0;
}
