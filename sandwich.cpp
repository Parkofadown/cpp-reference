#include <iostream>
#include <string>
using namespace std;

int main(){
string meat;
cout << "Enter your sandwiches meat: " << endl;
getline(cin, meat);


string vegetables;
cout << "Enter your sandwiches vegetables: " << endl;
getline(cin,vegetables);


string condiments;
cout << "Enter your sandwiches condiments: " << endl;
getline(cin, condiments);

string sides;
cout << "Enter your side dish: " << endl;
getline(cin, sides);


cout << "Your order is " << "Meat:" << meat << " " <<"Veggie: "<<  vegetables << " " <<"Condiment: " << condiments << " " << "Side:" << sides;

}
