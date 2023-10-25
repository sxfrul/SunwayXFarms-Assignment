//initialization
#include <string>
#include <iostream>
using namespace std;

string  prod_name, Vegetable_subscribtion, Farm_kit, Compost_kit, Microgreens_kit;
string  package_type, Monthly_Growner, Annual_Growner;
string  Month_Grow_1_Leaf, Month_Grow_2_Leaf, Month_Grow_3_Leaf, Month_Grow_1_Fru, Month_Grow_2_Fru;
string  Ann_Grow_1_Leaf;
string  Salad_lett, Heart_Asia_Gree, Salad_Asia_mix;
float   item_price;
int     item_quantity;
int     item_num;
   
   //input
 int main() {
    //input
   cout << "Welcome to SUNWAY X FARMS\n";
   
   cout <<  " Here is the list of the product that we sell\n";
   cout <<  " 1) Vegetable subscribtion \n";
   cout <<  " 2) Farm kit\n";
   cout <<  " 3) Compost kit\n";
   cout <<  " 4) Microgreens kit\n";
   
  
   cout <<  " Please enter the product that you like: \n";
   cin  >>    prod_name;

    if (prod_name == "Vegetable_subscribtion") {
        cout << " Here are the package type we offer\n";
        cout << " 1) Monthly Growner\n";
        cout << " 2) Annual Growner\n ";
        } 

    else if (prod_name == "Farm-kit") {
        cout << " Inclusive of:\n";
        cout << " 1. 1 packet Pak Choy seeds\n";
        cout << " 2. x2netpot holder rings\n";
        cout << " 3. AB nutrients (1 bottle each)\n";
        cout << " 4. Clay pebbles\n";
        cout << " 5. Netpot.\n";   
        cout << " 6. x4 sponges\n";
    }
    
    else if (prod_name == "Compost-kit")
    {
        cout << " Inclusive of:\n";
        cout << " 1.	Compost bag\n";
        cout << " 2.	1 pack of bokashi powder\n";
        cout << " 3.	1 set of tools\n";
    }
        
    else
    { 
        cout << " ERROR\n";
    }
   
        

   return 0;
 }