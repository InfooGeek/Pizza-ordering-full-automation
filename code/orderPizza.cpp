/*
You have been tasked with  developing a pizza ordering machine for  the new Student Centre café.  You are
required to implement a proof-of-concept console-based pizza ordering application to demonstrate to the café
managers.

The pizza ordering application requires the size of the pizza to be selected as well as at least one topping.
A list of available sizes and toppings is available in the table below.
The total price of the pizza is the size price + the price of all toppings added
*/
#include <iostream>
#include <string>
using namespace std;
double balance = 0.0;
double spending = 0.0;
void addCredit();
void orderPizza();
void displayMenu();
void addTopping();

int main()
{

    int choice;
    char pizzaOption, creditOption, processOption, mainOption = 'N';
    cout << "UCLAN Student Cafe" << endl;
    cout << "=========" << endl;

    do{
    displayMenu();
    cin >> choice;
    switch (choice)
    {
    case 1:
        addCredit();
        cout << "Go to Main Menu (Y/N) : ";
        cin >> mainOption;
        if(mainOption == 'N'){
             cout << "Thank you. Goodbye!" << endl;
            return 0;
        }
        break;
    case 2:
        orderPizza();
        addTopping();
        break;
    case 3:
        cout << "Thank you. Goodbye!" << endl;
        return 0;
    default:
        cout << "Invalid choice" << endl;
        return 1;
    }
    }while(mainOption == 'Y');
    cout << "------------------------------------------------------" << endl;
    cout << "Total credit  balance :  " << balance <<"credits"<< endl;
    cout << "Pizza Price :  " << spending << "credits"<<endl;
    cout << "------------------------------------------------------" << endl;
    if (balance - spending > 0){
    cout << "Remaining new balance : " << balance - spending <<" credits"<< endl;
    cout<<"Would you like to order another pizza? (Y/N)"<<endl;
    cin>>pizzaOption;
    if(pizzaOption=='Y'||pizzaOption=='y'){
        orderPizza();
        addTopping();
    }
    else{
        cout<<"Thank you. Goodbye!"<<endl;
    }
    }
    else{
        cout<<"You have insufficient credits available. You require "<<spending<< "credits."<<endl;

cout<<"Would you like to add more credits? "<<endl;
cout << "Please enter 'Y' for yes and 'N' for no : " << endl;
cin >> creditOption;
if (creditOption == 'Y' || creditOption == 'y')
{
    addCredit();
    cout<<"Would you like to continue processing your order? "<<endl;
    cout << "Please enter 'Y' for yes and 'N' for no : " << endl;
    cin>>processOption;
    if(processOption=='Y'||processOption=='y'){
        cout << "------------------------------------------------------" << endl;
    cout << "Avilable balance :  " << balance <<"credits"<< endl;
    cout << "Pizza Price :  " << spending << "credits"<<endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Remaining new balance : " << balance - spending <<" credits"<< endl;
    cout<<"Thank You. Goodbye!"<<endl;
    }
    else{
        cout<<"Thank you. Goodbye!"<<endl;
    }
 
}
else{
    cout<<"Thank You. Goodbye!"<<endl;
}
    }
   
   
    return 0;
}




void displayMenu()
{
    cout << "Main Menu" << endl;
    cout << "=========" << endl;
    cout << "1. Add credit" << endl;
    cout << "2. Order a pizza" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}
void addCredit()
{
    double amount;
    cout << "------------------------------------------------------------" << endl;
    cout << "Please enter how many credits you would like to add to your balance: ";
    cin >> amount;
    balance += amount;
    cout << "Your new balance is: " << balance << endl;
    cout << "------------------------------------------------------------" << endl;
}
void orderPizza()
{
    cout << "------------------------------------------------------------" << endl;
    cout << " ORDER PIZZA – Select Size    [Current Balance = " << balance << "  credits]" << endl;
    cout << "Please choose from the following sizes: " << endl;
    cout << "1. 7 inch                  [3.0 credits]" << endl;
    cout << "2. 9 inch                  [5.5 credits]" << endl;
    cout << "3. 14 inch                [7.25 credits]" << endl;
    cout << "0. Return to Main Menu" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Please enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:

        spending += 3.0;

        cout << "You have ordered a 7 inch pizza" << endl;
        cout << "------------------------------------------------------------" << endl;
        break;
    case 2:

        spending += 5.5;

        cout << "You have ordered a 9 inch pizza" << endl;
        cout << "------------------------------------------------------------" << endl;
        break;
    case 3:

        spending += 7.25;

        cout << "You have ordered a 14 inch pizza" << endl;
        cout << "------------------------------------------------------------" << endl;
        break;
    case 0:

        cout << "Returning to Main Menu..." << endl;
        cout << "------------------------------------------------------------" << endl;
        break;
    default:

        cout << "Invalid choice" << endl;
        cout << "------------------------------------------------------------" << endl;
        break;
    }
}
void addTopping()
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Please choose from the following toppings: " << endl;
    cout << "1. Ham                          [0.80 credits]" << endl;
    cout << "2. Mushroom                [0.50 credits] " << endl;
    cout << "3. Pepperoni                 [1.0 credits] " << endl;
    cout << "4. Olives                       [0.30 credits]" << endl;
    cout << "5. Pineapple                 [0.60 credits]" << endl;
    cout << "6. Extra Cheese            [1.20 credits]" << endl;
    cout << "0. Return to Main Menu" << endl;
    cout << "------------------------------------------------------------" << endl;
   
    int choice;
    char option = 'N';
 
    do
    {
         cout << "Please enter your choice: ";
           cin >> choice;
        switch (choice)
        {
        case 1:
            spending += 0.80;
            cout << "You have added Ham to your pizza. Your current spending is : " << spending << " credits" << endl;
            cout << "Would you like to add additional toppings?(Y/N)" << endl;
            cin >> option;
            cout << "------------------------------------------------------------" << endl;
            break;
        case 2:
            spending += 0.50;
            cout << "You have added Mushroom to your pizza. Your current spending is : " << spending << " credits" << endl;
            cout << "Would you like to add additional toppings?(Y/N)" << endl;
            cin >> option;
            cout << "------------------------------------------------------------" << endl;
            break;
        case 3:
            spending += 1.0;
            cout << "You have added Pepperoni to your pizza. Your current spending is : " << spending << " credits" << endl;
            cout << "Would you like to add additional toppings?(Y/N)" << endl;
            cin >> option;
            cout << "------------------------------------------------------------" << endl;
            break;
        case 4:
            spending += 0.30;
            cout << "You have added Olives to your pizza. Your current spending is : " << spending << " credits" << endl;
            cout << "Would you like to add additional toppings?(Y/N)" << endl;
            cin >> option;
            cout << "------------------------------------------------------------" << endl;
            break;
        case 5:
            spending += 0.60;
            cout << "You have added Pineapple to your pizza. Your current spending is : " << spending << " credits" << endl;
            cout << "Would you like to add additional toppings?(Y/N)" << endl;
            cin >> option;
            cout << "------------------------------------------------------------" << endl;
            break;
        case 6:
            spending += 1.20;
            cout << "You have added Extra Cheese to your pizza. Your current spending is : " << spending << " credits" << endl;
            cout << "Would you like to add additional toppings?(Y/N)" << endl;
            cin >> option;
            cout << "------------------------------------------------------------" << endl;
            break;
        case 0:
            cout << "Returning to Main Menu..." << endl;
            return;
        default:
            cout << "Invalid choice" << endl;
            cout << "------------------------------------------------------------" << endl;
            break;
        }
    } while (option == 'Y' || option == 'y');
}
