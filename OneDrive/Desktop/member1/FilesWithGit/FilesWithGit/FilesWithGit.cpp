#include <fstream>
#include <string>
#include <iostream>
using namespace std;



struct style {

    int size;
    string brand;
    string colour;
    float price;



};



int main()
{
    int i;
    string colour;
    struct style shoes[5];

    for (i = 0; i < 2; i++) {
        cout << "please enter the following information about the shoes in stock: ";

        cout << "\nPlease enter the color of the shoes:";
        cin >> shoes[i].colour;

        cout << "\n Please enter the brand of the shoes ";
        cin >> shoes[i].brand;

        cout << "\n Please enter the price of the shoes ";
        cin >> shoes[i].price;

    }
    for (i = 0; i < 2; i++) {
        ofstream myfile("shoes.txt");

        myfile << shoes[i].colour;
        myfile.close();



    }
     ifstream myfile("shoes.txt");
    cout << "\nReading from the file: ";
    while (getline(myfile,shoes[i].colour)) {
        cout<<"\n"<<shoes[i].colour;
    }
    

    
}

