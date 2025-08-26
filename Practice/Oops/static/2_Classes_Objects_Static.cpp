#include <iostream>
#include <iomanip> // for setw()
using namespace std;

class KeyboardBuy
{
    static int fixedCharge; // shared among all objects
    double price;
    string company, model;
    string keyboardType, customerName;

public:
    void setData(string company, string model, string KeyboardType, string customerName, double price)
    {
        this->company = company;
        this->model = model;
        this->keyboardType = KeyboardType;
        this->customerName = customerName;
        this->price = price;
        fixedCharge += 120; // add charge each time purchase is made
    }

    void getData()
    {
        cout << left << setw(15) << customerName
             << setw(15) << company
             << setw(15) << model
             << setw(20) << keyboardType
             << setw(10) << price
             << setw(10) << fixedCharge << endl;
    }
};

// initialize static member
int KeyboardBuy ::fixedCharge = 0;

int main()
{
    // Create multiple objects with funny country-inspired names
    KeyboardBuy kb1, kb2, kb3, kb4, kb5;

    cout << "\n\n"
         << left
         // Print table header
         << setw(15) << "Customer"
         << setw(15) << "Company"
         << setw(15) << "Model"
         << setw(20) << "KeyboardType"
         << setw(10) << "Price"
         << setw(10) << "ChargeCnt" << endl;
    cout << string(85, '-') << endl; // line separator

    // Print objects
    kb1.setData("Logitech", "K220", "Mechanical", "USA-Fun    ", 4500);
    kb1.getData();
    kb2.setData("HP", "HyperX69", "Gaming Beast", "India-Bolt ", 2999);
    kb2.getData();
    kb3.setData("Razer", "BladeX", "RGB Warrior", "Brazil-Joy ", 7999);
    kb3.getData();
    kb4.setData("Dell", "SilentType", "Office Pro", "Canada-XO  ", 1999);
    kb4.getData();
    kb5.setData("CosmicByte", "Destroyer9000", "Spacebar King", "Japan-Lol  ", 999);
    kb5.getData();

    cout << "\n\n";
    return 0;
}
