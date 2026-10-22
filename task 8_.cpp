#include <iostream>
using namespace std;
int main() {
    int ID, NumberOfSeats;
    float Age, price, Total;
    char Class;
    cout << "Pleas enter your ID and Age....";
    cin >> ID;
    cin >> Age;
    if (Age >= 18)
    {
        cout << "Pleas choose the class type....";
        cin >> Class;
        if (Class == 'A')
            price = 100;
        else if (Class == 'B')
            price = 75;
        else if (Class == 'C')
            price = 50;
        cout << "Pleas enter the number of seats....";
        cin >> NumberOfSeats;
        Total = price * NumberOfSeats;
        cout << "The total cost is " << Total;
    }
    else
        cout << "Sorry, you are not allowed to book a set";

    return 0;
}
