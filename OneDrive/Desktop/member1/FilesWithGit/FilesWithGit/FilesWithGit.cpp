#include <fstream>
#include <string>
#include <iostream>
using namespace std;



struct style {

    int size;
    string brand;
    string colour;
    float price



};



int main()
{
    int i;

    struct style shoes[5];

    for (int i = 0; i < 5:i++) {
        cout << "please enter the following information about the shoes in stock: ";

        cout << "\nPlease enter the color of the shoes:";
        cin >> shoes[i].color;

        cout << "\n Please enter the brand of the shoes ";
        cin >> shoes[i].brand;

        cout << "\n Please enter the price of the shoes ";
        cin >> shoes[i].price;

    }
    ofstream myfile("shoes.txt");

    myfile << "hello world!";


    myfile.close();
}

