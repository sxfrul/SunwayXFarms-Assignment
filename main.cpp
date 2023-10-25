//initialization
#include <string>
#include <iostream>
using namespace std;

//initialization
string  prod_name, Vegetable_subscription, Farm_kit, Compost_kit, Microgreens_kit;
string  package_type, Monthly_Growner, Annual_Growner;
string  Month_Grow_1_Leaf, Month_Grow_2_Leaf, Month_Grow_3_Leaf, Month_Grow_1_Fru, Month_Grow_2_Fru;
string  Ann_Grow_1_Leaf;
string  Salad_lett, Heart_Asia_Gree, Salad_Asia_mix;
float   item_price;
float   price_balance;
int   total_price=0;
int     item_quantity;
int     item_num;

void Homepage() {
    cout << " \nWelcome to SUNWAY X FARMS\n";
    cout << "Your cart current total: RM" << total_price;

    cout <<  " \nHere is the list of the product that we sell\n\n";

    cout <<  "1) Vegetable-subscription \n";
    cout <<  "2) Farm-kit\n";
    cout <<  "3) Compost-kit\n";
    cout <<  "4) Microgreens-kit\n";
    cout << " 5) Checkout\n";
  
    cout <<  "\tPlease enter the number of option that you like: ";
}

int main() {
    Homepage();
    while (true) {
        string prompt;
        cin >> prompt;
        //Vegetable Subscription
        if (prompt == "1") {
            cout << " Here are the package type we offer\n";
            cout << " 1) Monthly-Growner\n";
            cout << " 2) Annual-Growner\n ";

            cout << "Which package would you like to select?: ";
            string prompt2;
            cin >> prompt2;
            if (prompt2 == "1") {
                cout << " 1)Monthly-Growner-1-Leafy:\n";
                cout << " a) Min. 0.75KG of leafy vegetables x 4 weeks/ month\n";
                cout << " b) Suitable for 2-3 pax households\n\n";
                
                cout << " 2)Monthly-Growner-2–Leafy:\n";
                cout << " a) Min. 1.5KG of leafy vegetables x 4 weeks/ month\n";
                cout << " b) Suitable for 4-6 pax households\n\n";
                
                cout << " 3)Monthly-Growner-3–Leafy\n";
                cout << " a) Min.2.2KG of leafy vegetables x 4 weeks/ month\n";
                cout << " b) Suitable for 7-10 pax households\n\n";
                
                cout << " 4)Monthly-Growner-1–Fruity\n";
                cout << " a) Min. 1.7KG of fruity vegetables x 4 weeks/ month\n";
                cout << " b) Suitable for 2-3 pax households\n\n";
                
                cout << " 5)Monthly-Growner-2– Fruity\n";
                cout << " a) Min. 3.4KG of fruity vegetables x 4 weeks/ month\n";
                cout << " b) Suitable for 4-6 pax households\n\n";

                cout << "Which Monthly-Growner would you like to view?: ";
                string prompt3;
                cin >> prompt3;

                if (prompt3 == "1") {
                    cout << " Here are the items and price:\n";
                    cout << " 1) Salad lettuces = RM 105\n";
                    cout << " 2) Heart Asian greens = RM 105\n";
                    cout << " 3) Salad & Asian mix = RM 105\n";

                    while (true) {
                        cout << "Would you like to purchase an item? (y/n): ";
                        string prompt4;
                        cin >> prompt4;
                        if (prompt4 == "y") {
                            cout << "Enter an item: ";
                            string itemChoice;
                            cin >> itemChoice;
                            if (itemChoice == "Salad-lettuce" || itemChoice == "Hearty-Asian" || itemChoice == "Mix-Asian") {
                                total_price = total_price + 105;
                            }
                        }
                        else if (prompt4 == "n") {
                            cout << "Your total is : RM" << total_price;
                            break;
                        }
                        else {
                            cout << "Error \n";
                        }
                    }
                    Homepage();
                }
                if (prompt3 == "2") {
                    
                }
                if (prompt3 == "3") {
                    
                }
                if (prompt3 == "4") {
                    
                }
                if (prompt3 == "5") {
                    
                }
            }
            else if (prompt2 == "2") {
                cout <<  " Annual-Growner-1–Leafy:\n";
                cout <<  " 1) Min. 0.75KG of leafy vegetables x 4 weeks per month x 12 months\n";
                cout <<  " 2) Suitable for 2-3 pax households\n";
            }
            else {
                cout << "Error \n";
                Homepage();
            }
        }
        //Farm-kit
        else if (prompt == "2") {
            cout << " Inclusive of:\n";
            cout << " 1. 1 packet Pak Choy seeds\n";
            cout << " 2. x2netpot holder rings\n";
            cout << " 3. AB nutrients (1 bottle each)\n";
            cout << " 4. Clay pebbles\n";
            cout << " 5. Netpot.\n";   
            cout << " 6. x4 sponges\n";
            cout << " Total price = RM 19.00\n\n";
            cout << "Would you like to purchase the Farm-kit? (y/n): ";
            while(true) {
                string prompt2;
                cin >> prompt2;
                if (prompt2 == "y") {
                    total_price = total_price + 19;
                    break;
                }
                else if (prompt2 == "n") {
                    break;
                }
                else {
                    cout << "Error \n";
                }
            }
            Homepage();
        }
        //Microgreens Growing Kit
        else if (prompt == "3") {
            
        }
        //Compost kit
        else if (prompt == "4") {
            
        }
        //Checkout
        else if (prompt == "5") {
            
        }
        else {
            cout << "Error\n";
            Homepage();
        }
    }

    return 0;
}
