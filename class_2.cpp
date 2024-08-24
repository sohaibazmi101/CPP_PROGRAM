#include <iostream>
using std::cin, std::cout, std::string, std::endl;

int main()
{
    double length;
    string unit = "";
    string newunit = "";
    const double cm_per_inch = 2.55;
    cout << "Welcome To Unit Conversion Program" << endl;
    cout << "Convert from CM to inch OR inch to CM\n\n\n";
    bool cond = true;
    string ask = "yes";
    while (cond)
    {
        cout << "Enter the value of Length : " << endl;
        cin >> length;
        cout << "Enter the Unit of length (cm or in) : " << endl;
        cin >> unit;

        if (unit == "cm")
        {
            length = length / cm_per_inch;
            newunit = "inch";
            cout << "Given length = " << length << " " << newunit << endl;
        }
        else if (unit == "in")
        {
            length = length * cm_per_inch;
            newunit = "cm";
            cout << "Given Length = " << length << " " << newunit << endl;
        }
        else
        {
            cout << "Please Enter the correct unit or length!";
        }
        cout<<"Want to change Other : yes OR no : ";
        cin>>ask;
        if(ask == "no"){
            cond = false;
        }
    }

    return 0;
}