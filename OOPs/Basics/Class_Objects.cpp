#include<iostream>
using namespace std;
/*
class class_name {
access_modifers:    -> for definingthe scope of methods & attributes
    attribute_1
    attribute_2
    .
    .
    .
    attribute_n

    method_1
    .
    .
    .
    method_n
};
*/

class Pen {
private:
    string brand;
    string color;
    double price;
    string penType;

public:
    void setPenData(string b, string c, double p, string type) {
        brand = b;
        color = c;
        price = p;
        penType = type;
    }

    void write() {
        cout << brand << " pen writes in " << color << " ink." << endl;
    }

    void refill() {
        if (penType == "ballpoint" || penType == "gel") {
            cout << "This pen can't be refilled." << endl;
        } else {
            cout << "This pen cannot be refilled." << endl;
        }
    }
};

class Pencil {
private:
    string brand;
    string hardness;
    double price;

public:
    void setPencilData(string b, string h, double p) {
        brand = b;
        hardness = h;
        price = p;
    }

    void write() {
        cout << brand << " pencil writes with " << hardness << " lead." << endl;
    }

    void sharpen() {
        cout << "The pencil has been sharpened." << endl;
    }
};


int main() {
    Pen pen;

    pen.setPenData("Parker", "blue", 10.99, "ballpoint");
    pen.write();
    pen.refill();

    Pencil pencil;

    pencil.setPencilData("Faber-Castell", "HB", 2.50);
    pencil.write();
    pencil.sharpen();

    return 0;
}