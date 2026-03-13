#include <iostream>
using namespace std;

class Candy 
{
    string color;
    int points;
public:
    void setCandy(string c, int p);
    void displayCandy();
    void losePoint(int p);
    void gainPoint(int p);   
};
void Candy::setCandy(string c, int p)
{ 
    color = c; 
    points = p;
}
void Candy::displayCandy()
{
    cout << "Candy Color: " << color << endl;
    cout << "Your points are: " << points << endl;
}
void Candy::losePoint(int p)
{
    points = points - p;   
}
void Candy::gainPoint(int p)
{
    points = points + p;   
}
int main() 
{
    Candy candy1, candy2;

    candy1.setCandy("Red", 10);
    candy2.setCandy("Blue", 20);

    candy1.gainPoint(15);   
    candy2.losePoint(5);    

    candy1.displayCandy();
    candy2.displayCandy();

    return 0;
}