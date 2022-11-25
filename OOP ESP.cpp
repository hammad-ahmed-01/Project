/* ==========================================

           " Banking System "
         OOP End Semester Project
   
 ==========================================  */

 //HEADER FILES

#include<iostream>
#include<fstream>
#include <string>
#include<ctime>
#include<stdlib.h>
using namespace std;

/*CLASS accounts*/

class accounts
{
public:

    int acc1 = 10000000;
    int acc2 = 12000000;
    int acc3 = 12300000;
    int acc4 = 12340000;
    int acc5 = 12345000;
    int acc6 = 12345600;
    int acc7 = 12345670;
    int acc8 = 12345678;
    int count = 1;
    int transfer_money = 0;
    int b;
    long balance;
    int transaction;
    int retain = 0;

    void display(); //FUNCTION TO DISPLAY ALL ACCOUNT NUMBERS ON THE INTEFACE
    void user1(string name, int age, string address, int pin, int mob_no);
    void user2(string name, int age, string address, int pin, int mob_no);
    void user3(string name, int age, string address, int pin, int mob_no);
    void user4(string name, int age, string address, int pin, int mob_no);
    void user5(string name, int age, string address, int pin, int mob_no);
    void user6(string name, int age, string address, int pin, int mob_no);
    void user7(string name, int age, string address, int pin, int mob_no);
    void user8(string name, int age, string address, int pin, int mob_no);
};

/*CLASS bank*/

class bank : public accounts
{
    string name;
    int age;
    string address;
    int pin;
    int mobileno;
    int deposite;
    long amount;
    long accountno;
    int choice1;

public:
    void opennewaccount(); //FUNCTION TO CREATE NEW ACCOUNT
    void depositeamout(); //FUNCTION TO DEPOSIT AMOUNT IN ACCOUNT
    void withdrawtheamount(); //FUNCTION TO WITHDRAW AMOUNT FROM THE ACCOUNT
    void transfer();
    void balanceenquiry(); //FUNCTION FOR BALANCE ENQUIRY
    void closingaccount();  //FUNCTION TO CLOSE THE ACCOUNT
    void modifyingaccount();  //FUNCTION TO MODIFY THE USER DATA
    void issue(); //FUNCTIONS IF USER HAVE ANY ISSUE REGARDING BANKS AND WANT TO COMPLAINT ABOUT IT
    void loan(); //FUNCTIONS TO APPLY FOR LOAN
    void Exit(); //FUNCTION TO EXIT
    void check(int acc_no); //FUNCTION TO CHECK BETWEEN ACCOUNTS
};


/* FUNCTION DEFINATIONS */

/* Base Class(accounts) Function Definations */

// display defination
void accounts::display()
{
    cout << "\n The avaialble accounts in our bank are as follows : \n" << endl << "  " << acc1 << endl << "  " << acc2 << endl << "  " << acc3 << endl << "  " << acc4 << endl << "  " << acc5 << endl << "  " << acc6 << endl << "  " << acc7 << endl << "  " << acc8 << endl;
}

// user1 defination
void accounts::user1(string name, int age, string address, int pin, int mob_no)
{
    name = "Hammad Ahmed";
    age = 19;
    address = "Islamabad";
    pin = 0000;
    mob_no = 00000000000;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }

    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user2 defination
void accounts::user2(string name, int age, string address, int pin, int mob_no)
{
    name = "Talha Ahmed";
    age = 18;
    address = "Islamabad";
    pin = 1111;
    mob_no = 11111111111;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user3 defination
void accounts::user3(string name, int age, string address, int pin, int mob_no)
{
    name = "Yusuf Haroon";
    age = 19;
    address = "Islamabad";
    pin = 2222;
    mob_no = 22222222222;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user4 defination
void accounts::user4(string name, int age, string address, int pin, int mob_no)
{
    name = "Hussain Ahmed";
    age = 23;
    address = "Karachi";
    pin = 3333;
    mob_no = 33333333333;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user5 defination
void accounts::user5(string name, int age, string address, int pin, int mob_no)
{
    name = "Ali Ahmed";
    age = 21;
    address = "Lahore";
    pin = 4444;
    mob_no = 44444444444;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user6 defination
void accounts::user6(string name, int age, string address, int pin, int mob_no)
{
    name = "Hasan Khan";
    age = 35;
    address = "Peshawar";
    pin = 5555;
    mob_no = 55555555555;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user7 defination
void accounts::user7(string name, int age, string address, int pin, int mob_no)
{
    name = "Ali Nawaz";
    age = 42;
    address = "Mardan";
    pin = 6666;
    mob_no = 66666666666;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

// user8 defination
void accounts::user8(string name, int age, string address, int pin, int mob_no)
{
    name = "Yousaf Qureshi";
    age = 30;
    address = "Sialkot";
    pin = 7777;
    mob_no = 7777777777;
    b = 100000;
    if (retain == 1)
    {
        balance = balance;
    }
    else
    {
        balance = b;
    }
    if (transaction == 1)
    {
        balance = b - transfer_money;
    }
    else if (transaction == 0)
    {
        balance = b + transfer_money;
    }
    else
        return;
}

/* Derived Class(bank) Function Definations */

// check defination

void bank::check(int acc_no)
{
    if (acc_no == acc1)
    {
        user1(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc2)
    {
        user2(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc3)
    {
        user3(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc4)
    {
        user4(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc5)
    {
        user5(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc6)
    {
        user6(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc7)
    {
        user7(name, age, address, pin, mobileno);
    }
    else if (acc_no == acc8)
    {
        user8(name, age, address, pin, mobileno);
    }
    else
    {
        cout << "Invalid Account number !!";
        count = 0;
    }
}

// new defination

void bank::opennewaccount()
{
    cout << "Thank you for trusting us !! \n We welcome you to our bank service.\n\n";
    cout << "Please fill the below information : \n";
    ofstream os;
    os.open("file.txt");
    cout << "Writing to a text file: " << endl;
    cout << "Enter your name: " << endl;
    cin.ignore();
    getline(cin, name);
    os << name << endl;
    cout << "\nPlease Enter your age: ";
    cin >> age;
    cin.ignore();
    os << age << endl;
    cout << "Enter your address: " << endl;
    cin.ignore();
    getline(cin, address);
    os << address << endl;
    cout << "Please Enter your Account no: ";
    cin >> accountno;
    cin.ignore();
    os << accountno << endl;
    cout << "Please Enter your Pin code: ";
    cin >> pin;
    cin.ignore();
    os << pin << endl;
    cout << "Please Enter your mobile number: ";
    cin >> mobileno;
    cin.ignore();
    os << mobileno << endl;
    cout << "Please Enter the amount you want to deposit: ";
    cin >> balance;
    cin.ignore();
    os << balance << endl;
    os.close();
}

//Deposit defination

void bank::depositeamout()
{
    cout << "\n Dear customer please enter your account no :: " << endl;
    cin >> accountno;
    check(accountno);
    if (count == 0)
    {
        count = 1;
        return;
    }
    cout << " Enter the amount you want to deposit :: " << endl;
    cin >> amount;
    balance += amount;
    cout << " Amount deposited succefully !! " << endl;
    cout << "Total balance in the accout is : Rs. " << balance << "\n";
    retain = 1;

}

// withdraw definatioon

void bank::withdrawtheamount()
{
    cout << "\n Dear customer please enter your account no :: " << endl;
    cin >> accountno;
    check(accountno);
    if (count == 0)
    {
        return;
    }
    cout << "Enter the amount you want to withdraw :: " << endl;
    cin >> amount;
    if (amount > balance)
    {
        cout << "Insuffient balance !! " << endl;
    }
    else
    {
        balance = balance - amount;
        cout << "Amount withdraw succefully.\n Please collect your amount." << endl;
        cout << "Total balance in the accout is : Rs. " << balance << endl;
    }
    retain = 1;
}

// balance enquiry defination

void bank::balanceenquiry()
{
    cout << "\n Dear customer please enter your account no :: " << endl;
    cin >> accountno;
    check(accountno);
    if (count == 0)
    {
        return;
    }
    cout << " \n Your current balance is : Rs. " << balance << endl;
}

// closing defination

void bank::closingaccount()
{
    int reason;
    cout << "\n Dear customer please enter your account no :: " << endl;
    cin >> accountno;
    check(accountno);
    if (count == 0)
    {
        return;
    }
    cout << " \n Please select the reason for Closing your account (1 to 3) : "<< endl;
    cout << "\n Your feedback will be greatly appreciated." << endl;
    cout << " Enter 1 If you have not statisfied with the treatment with our staff." << endl;
    cout << " Enter 2 If you have found our intrest rate low." << endl;
    cout << " Enter 3 for other." << endl;
    cin >> reason;

    switch (reason)
    {
    case 1:
        cout << "Sorry for the inconviene happend to you.\nWe will make sure for better service ahead.\nIf you still want to close the account please drop down the Closing letter in the dropbox.\n";
        break;
    case 2:
        cout << "We are sorry for not fullfilling your expectations.";
        break;
    case 3:
        cout << "Dear customer please enter your Closing account letter in the nearer bank the dropbox.";
        break;
    default:
        cout << "Invalid choice.";
    }
}

// modify defination

void bank::modifyingaccount()
{
    string address;
    string name;
    string mobileno;
    string transfer;

    cout << " Enter 1 for updating Address. \n\n";
    cout << " Enter 2 for updating name.\n\n";
    cout << " Enter 3 for updating mobile number.\n\n";
    cout << " Enter 4 for trasnsfering your account. \n\n";

    cout << " Enter the choice you want to modify: ";
    cin >> choice1;

    switch (choice1)
    {
    case 1:
        cout << " Your current Address:\n";
        cin.ignore();
        getline(cin, address);
        cout << " Enter your updated address:\n";
        cin.ignore();
        getline(cin, address);
        cout << " Your address has been updated\n and new address is: \n" << address;
        break;
    case 2:
        cout << " Your current Name:\n";
        cin.ignore();
        getline(cin, name);
        cout << " Enter your new name: \n";
        cin.ignore();
        getline(cin, name);
        cout << " Your Name has been updated to:\n" << name;
        break;
    case 3:
        cout << " Your current mobile number:\n";
        cin.ignore();
        getline(cin, mobileno);
        cout << " Enter your updated your mobile number:\n";
        cin.ignore();
        getline(cin, mobileno);
        cout << " Your mobile number has been updated:\n" << mobileno;
        break;
    case 4:
        cout << " Your current Branch of bank:\n";
        cin.ignore();
        getline(cin, transfer);
        cout << "Enter the branch of the bank you want to transfer your account:\n";
        cin.ignore();
        getline(cin, transfer);
        cout << "We have accepted your transfer request.\n We will notify you shortly through your Email.\n";
        break;
    default:
        cout << " Invalid choice !! ";
    }
}

// issue defination

void bank::issue()
{
    cout << "\n Please drop down your complaint letter in the dropbox or Mail us your complaint !! " << endl;
}

// loan defination

void bank::loan()
{
    int purpose;
    cout << " Please enter the Purpose for taking loan:" << endl;
    cout << "\n Enter 1 for Education loan. \n\n";
    cout << " Enter 2 for Home loan. \n\n";
    cout << " Enter 3 for Car loan. \n\n";
    cout << " Enter any number for other (except for 1,2 and 3). \n\n";
    cin.ignore();
    cin >> purpose;

    switch (purpose)
    {
    case 1:
        cout << " Please submit the following documents to Education loan department:\n\n";
        cout << " Duly-filled application form.\n2 passport size photographs.\nGraduation, Secondary School Certificate, or High School Certificate or mark sheets.\nKYC documents that include ID, address, and age proof.\nSignature Proof:Income Proof of parents or guardian.\n";
        break;
    case 2:
        cout << " Please submit the following documents to  Home Loan department:\n\n";
        cout << " Employer Identity Card.\nProperty papers.\nIncome proof.\nAccount statement.\n";
        break;
    case 3:
        cout << " Please submit the following documents to car Loan department:\n\n";
        cout << " Employer Identity Card.\nCar documents.\nProperty papers.\nIncome proof.\nAccount statement.\n";

    default:
        cout << "\n Contact to the bank.";
    }
}
void bank::Exit()
{
    cout << " Thank you! \n We are glad to help you!" << endl;
    cout << " Please Visit us again.";
}

// transfer defination

void bank::transfer()
{
    cout << "\n Dear customer please enter your account no :: " << endl;
    cin >> accountno;
    cout << "\n How much moeny do you want to transfer :: ";
    cin >> transfer_money;
    transaction = 1;
    check(accountno);
    if (count == 0)
    {
        count = 1;
        return;
    }

    cout << "\n The balance left in your account after transaction is :: " << balance << endl;
    cout << "\n Please enter the account no you want to transfer money to :: " << endl;
    cin >> accountno;
    transaction = 0;
    check(accountno);
    if (count == 0)
    {
        count = 1;
        return;
    }
    cout << "\n The balance in the reciever's account after transaction is :: " << balance << endl;
    transfer_money = 0;
    transaction = 2;
    retain = 1;
}

int main()
{
    int choice;
    bank* b = new bank;

    cout << "\n\n\n";
    cout << "=========================================================" << endl;
    cout << "                  WELCOME TO THE BANK                    " << endl;
    cout << "=========================================================" << endl;
    cout << "\n\n\n";
    b->display();
    cout << "\n\n\n";
Main_Menu:
    cout << "====================== MAIN MENU ========================" << endl << endl;
    cout << "Enter 1 for opening a new account.\n\n";
    cout << "Enter 2 for deposting the amount.\n\n";
    cout << "Enter 3 for Withdrawing the amount.\n\n";
    cout << "Enter 4 for Balance Enquiry.\n\n";
    cout << "ENter 5 for Closing your Account.\n\n";
    cout << "Enter 6 for modifing your Current data of account.\n\n";
    cout << "Enter 7 If you want to complain about anything.\n\n";
    cout << "Enter 8 If you want to apply for Loan.\n\n";
    cout << "Enter 9 If you want to exit.\n\n";
    cout << "Enter 10 If you want to Transfer.\n\n";

    cout << "Please Enter Your choice (1 to 10) :: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        b->opennewaccount();
        break;
    case 2:
        b->depositeamout();
        break;
    case 3:
        b->withdrawtheamount();
        break;
    case 4:
        b->balanceenquiry();
        break;
    case 5:
        b->closingaccount();
        break;
    case 6:
        b->modifyingaccount();
        break;
    case 7:
        b->issue();
        break;
    case 8:
        b->loan();
        break;
    case 9:
        b->Exit();
        break;
    case 10:
        b->transfer();
        break;
    default:
        cout << "Invalid choice";
    }
    cout << "\n\n Do you want anything else? \n If yes press 1." << endl;
    int yes;
    cin >> yes;
    if (yes == 1)
    {
        goto Main_Menu;
    }
    return 0;
}
