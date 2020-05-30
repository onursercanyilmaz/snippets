

#include <iostream>
#include<string>

using namespace std;
//Constructor Deconstructor UNUTMA!
//-------------CLIENT----------------
class Client
{
public:
    string name = "Onur Sercan Yilmaz";
    int pin = 1234;
    double ChequingBalance = 4000;
    double AccNum = 30718062;
    double savingBalance = 0;

  
public:
    string getName() { return name; }
    int getPin() { return pin; }
    double getChequingBalance() { return ChequingBalance; }
    double getAccNum() { return AccNum; }
    double getsavingBalance() { return savingBalance; }
  

}person1;

//-----------------------------------------------------------------------------------------------------------------------------
class ChequeC //Process of sending money by using account numbers. 
{
public:
    void  fromAccNum();
    double theAmount();
    void toAccNum();

}che;

void ChequeC::fromAccNum()
{
    double AccNum;
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|           Please enter your account number :    |" << endl;
    cout << "                 "; cin >> AccNum;
    cout << "|                                                 |" << endl;
    if (AccNum == person1.AccNum)
    {
        theAmount();
    }
    else
    {
        cout << "|       Your Account Number is not correct!       |" << endl;
        che.fromAccNum();
    }

}

double ChequeC::theAmount() 
{
    double amount;
    cout << "|                                                 |" << endl;
    cout << "|           Please enter the amount:              |" << endl;
    cout << "                       "; cin >> amount;
    person1.ChequingBalance = person1.ChequingBalance - amount;
    toAccNum();
    return amount;
}

void ChequeC::toAccNum()
{
    double toAccNum;
    
    cout << "|                                                 |" << endl;
    cout << "|        Please enter him/her account number :    |" << endl;
    cout << "                  "; cin >> toAccNum;
    cout << "|                                                 |" << endl;
    cout << "|          Sent from you to " << toAccNum << "              |" << endl;
 
}
//------------------------------------------------------------------------------------------------------------------------
//------------ACCOUNTS----------------
class Account
{
protected:
    double balance;
    double balancePending;
    int deposited;
public:
    void otherTransactions();
    void deposit();
    float perhapsDeposit();
    void confirmDeposit(); //OK
    void checkDetails();
    void withdraw(); //OK
    void chequeWithdraw();
    void checkFunds(); //OK
}account;

void Account::checkFunds() //Shows the Funds
{
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                   USD/TRY : 6.80                |" << endl;
    cout << "|                   EUR/TRY : 7.43                |" << endl;
    cout << "|                   XAU/TRY : 380.5               |" << endl;
    cout << "|                   BTC/TRY : 63101.74            |" << endl;
    cout << "|                                                 |" << endl;
    cout << "---------------------------------------------------" << endl;
    account.otherTransactions(); // Turns back the Other Transactions Screen
}
void Account::otherTransactions()
{
    int choice;
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                   1) Deposit                    |" << endl;
    cout << "|                   2) Withdraw                   |" << endl;
    cout << "|                   3) Cheque Withdraw            |" << endl;
    cout << "|                   4) Funds                      |" << endl;
    cout << "|                   5) Check Details              |" << endl;
    cout << "|                   6) Money Transfer             |" << endl;
    cout << "|  Go Entry : 0                                   |" << endl;
    
    cout << "                       "; cin >> choice;
    switch (choice)
    {
    case 1:
        account.deposit();
        break;
    case 2:
        account.withdraw();
        break;
    case 3:
        account.chequeWithdraw();
        break;
    case 4:
        account.checkFunds();
        break;
    case 5:
        account.checkDetails();
        break;
    case 6:
        che.fromAccNum();
    case  0:
        account.withdraw();
        break;
    default:
        account.otherTransactions();
        

    }   
}

void Account::withdraw() // Get momey from your Chequing Account
{
    int withdrawed;
    int choice;
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                   1) Withdraw                   |" << endl;
    cout << "|                   2) Other Transactions         |" << endl;
    cout << "|                                                 |" << endl;
    

    cout << "                       "; cin >> choice;
    if (choice == 1) // Withdraw
    {

        cout << "|                                                 |" << endl;
        cout << "|           Please enter the amount:              |" << endl;
        cout << "                       "; cin >> withdrawed;
        person1.ChequingBalance = person1.ChequingBalance - withdrawed;
        cout << "|           Please get your money...              |" << endl;
        cout << "|                                                 |" << endl;
        cout << "|           0) Turn Back To Menu                  |" << endl;
        cout << "|           9) EXIT                               |" << endl;
        cout << "|                                                 |" << endl;
        cout << "                       "; cin >> choice;
        if (choice == 0)
        {
            account.withdraw();
        }
        else if (choice == 9) // EXIT from program
        {
            cout << "|               Have a nice day.                  |" << endl;
            cout << "---------------------------------------------------" << endl;
            exit(0);

        }
        withdraw();
    }
    else if (choice == 2) // Other Transactions
    {
        cout << "---------------------------------------------------" << endl;
        account.otherTransactions(); // Go Other Transactions part
    }
    else
        withdraw(); // If user don't enter number which we want, repeat the function.


}
void Account::confirmDeposit() // Ask that amount which is entered correct or not.
{
    int choice;
    cout << "|                     Confirm "<<deposited<<"                 |" << endl;
    cout << "|            0: Wrong           1:True            |" << endl;
    cout << "                       "; cin >> choice;

    if (choice == 0)
        account.deposit();
    else if (choice == 1)
    {
        person1.ChequingBalance = person1.ChequingBalance + deposited; // Adding money to Chequing Acount
        cout <<"|           "<<deposited << " deposited on your account         |" << endl;
        cout << "|                                                 |" << endl;
        cout << "|           0) Turn Back To Menu                  |" << endl;
        cout << "|           9) EXIT                               |" << endl;
        cout << "|                                                 |" << endl;
        cout << "                       "; cin >> choice;
        if (choice == 0)
        {
            account.withdraw();
        }
        else if (choice == 9)
        {
            cout << "|               Have a nice day.                  |" << endl;
            cout << "---------------------------------------------------" << endl;
            exit(0);

        }
        else
            confirmDeposit();

    }

}
void Account::deposit() // Deposit momey to your Chequing Account
{ 
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|             Please enter the amount:            |" << endl;
    cout << "                       "; cin >> deposited;

    account.confirmDeposit(); 
}

void Account::checkDetails() //Show the my details and accounts
{
    int choice;
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|            Name: "<<person1.getName()<<"             |" << endl;
    cout << "|            Chequing Balance: "<<person1.getChequingBalance()<<"               |" << endl;
    cout << "|            Saving Balance: " << person1.getsavingBalance() << "                  |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|  BACK : 8                           EXIT : 9    |" << endl;
    
    cout << "                       "; cin >> choice;
    if (choice == 8)
    {
        account.otherTransactions();
    }
    else if (choice == 9)
    {
        cout << "|               Have a nice day.                  |" << endl;
        cout << "---------------------------------------------------" << endl;
        exit(0);

    }
    else
        account.checkDetails(); // Repeat the function if user enters a number that we don't want.
}

void Account::chequeWithdraw() // Create a cheque from your account, will be decreased money from your Chequing Account.
{

    double chequeNum;
    double amount;
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|           Please enter cheque number:           |" << endl;
    cout << "|                  WAITING...                     |" << endl;
    cout << "                 "; cin >> chequeNum;
    cout << "|              Cheque is reading...               |" << endl;
    cout << "|                                                 |" << endl;
    cout << "|             Please enter amount:                |" << endl;
    cout << "                 "; cin >> amount;
    person1.ChequingBalance = person1.ChequingBalance - amount;
    cout << "|     "<<amount<<" of money identified as a cheque.       |" << endl;
    cout << "|                                                 |" << endl;

    account.checkDetails();
}
//-------First Account Subclass : SavingAccount ---------
class SavingAccount : public Account
{
public:
    void interest();
}savacc;

void SavingAccount::interest() //It increases or decreases your money by interest rate.
{
    double interestRate;
    double amount;
    int choice;

    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|    Withdraw : 4                Deposit : 6      |" << endl;
    cout << "                 "; cin >> choice;

    if (choice == 4)
    {
        cout << "--------------------IZU BANK-----------------------" << endl;
        cout << "|                                                 |" << endl;
        cout << "|           Please enter interest rate            |" << endl;
        cout << "|           0.05        0.08       0.12           |" << endl;
        cout << "|                                                 |" << endl;
        cout << "                      "; cin >> interestRate;
        cout << "|                                                 |" << endl;
        cout << "|             Please enter amount:                |" << endl;
        cout << "                      "; cin >> amount;
        person1.savingBalance = person1.savingBalance - (amount + amount * interestRate);
        cout << "|             You will pay  " << (amount + amount * interestRate) << " of money.         |" << endl;
        cout << "|                                                 |" << endl;

        account.checkDetails();
    }
    else if (choice == 6)
    {
        cout << "--------------------IZU BANK-----------------------" << endl;
        cout << "|                                                 |" << endl;
        cout << "|           Please enter interest rate            |" << endl;
        cout << "|           0.05        0.08       0.12           |" << endl;
        cout << "|                                                 |" << endl;
        cout << "                      "; cin >> interestRate;
        cout << "|                                                 |" << endl;
        cout << "|             Please enter amount:                |" << endl;
        cout << "                      "; cin >> amount;
        person1.savingBalance = person1.savingBalance + amount;
        cout << "|             You will get  " << (amount + amount * interestRate) << " of money.         |" << endl;
        cout << "|                   1 year later                  |" << endl;
        cout << "|                                                 |" << endl;

        account.checkDetails();
    }
}
//---------------Second Account Subclass : ChequingAccount -------------------
class ChequingAccount : public Account
{
public:
   void chequeWithdraw();
    int checkPin(int pin) {/*association with pin*/ }
};

void ChequingAccount::chequeWithdraw()
{
    account.chequeWithdraw();
}

//-------------------------------------END OF THE ACCOUNTS--------------------------

//-------------Entry Station----subclasses----ATM--or--CT---------------------------
class EntryStation
{
public:
    int choice;
    void menu() // The first menu that program has.
    {
    
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                  1) ATM                         |" << endl;
    cout << "|                  2) Counter Teller              |" << endl;
    cout << "|                                                 |" << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "                       "; cin >> choice;
    while (choice < 1 || choice > 2) //Keep asking until the input is 1 or 2
    {
        cout << "--------------------IZU BANK-----------------------" << endl;
        cout << "|                                                 |" << endl;
        cout << "|                  1) ATM                         |" << endl;
        cout << "|                  2) Counter Teller              |" << endl;
        cout << "|                                                 |" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "                       "; cin >> choice;
    }
    }
    
};

//---------------First EntryStation Subclass : ATM -------------------
class ATM : public EntryStation
{
    //can make changes just on ChequingAccount
protected:
    int pin;
public:
    void withdraw();
    int getPin();
    void readCard();
    
};
void ATM::readCard() // Card reading after inserting process.
{
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|                  Please insert your card...     |" << endl;
    cout<<  "|                  LOADING...                     |" << endl;
    cout << "|                  Card is reading...             |" << endl;
    cout << "|                                                 |" << endl;
    cout << "---------------------------------------------------" << endl;
    
} 

int ATM::getPin() // Getting pin from client
{
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|             Please Enter Your PIN:              |"<<endl;
    cout << "                       "; cin >> pin;  
    
    if (pin == person1.getPin())
    {
        cout << "|                  ACCESS PROVIDED                |" << endl;
        cout << "|                  CONNECTING...                  |" << endl;
        cout << "|                                                 |" << endl;
        cout << "|            Name: " << person1.getName() << "             |" << endl;
        cout << "|         Chequing Account Balance: " << person1.getChequingBalance() << "          |" << endl;
        cout << "|         Saving Account Balance: "<<person1.getsavingBalance()<<"               |" << endl;
        cout << "|                                                 |" << endl;
        cout << "---------------------------------------------------" << endl;
    }

    else
    {
        cout << "|                                                 |" << endl;
        cout << "|                 ACCESS DENIED!                  |" << endl;
        cout << "|          PIN must has 4 digit number!           |" << endl;
        cout << "|                Plese try again.                 |" << endl;
        cout << "|                                                 |" << endl;
       
        for (int i = 2; i>0; i--) //HAVE  3 CHANCE
        { 
            cout << "|             You have LAST " << i << " Attempts            |" << endl;;
            cout << "|               Please Enter Your PIN:            |" << endl;;
            cout << "                        "; cin >> pin;
            cout << "|                    LOADING...                   |" << endl;
            if (pin == person1.getPin())
            {
                cout << "|                ACCESS PROVIDED                  |" << endl;
                cout << "|                  CONNECTING...                  |" << endl;
                cout << "|                                                 |" << endl;
                cout << "---------------------------------------------------" << endl;
                account.checkDetails();
                break;
            }
            else if (i == 1) // End of the 3 wrong attempts program will be closed.
            {
                cout << "|                Your card blocked!               |" << endl;
                cout << "|                                                 |" << endl;
                cout << "---------------------------------------------------" << endl;
                exit(0);
            }
        }
    }
   
    return pin;
}

void ATM::withdraw() //get money and process on person1.balance
{
    account.withdraw();
}


//---------------Second EntryStation Subclass : CounterTeller -------------------
class CounterTeller : public EntryStation
{
    //can make changes on ChequingAccount and  SavingAccount
public:
    void deposit();
    void depositCheque();
};

void CounterTeller::deposit() // Deposite money from CT
{
    int choice;
    cout << "--------------------IZU BANK-----------------------" << endl;
    cout << "|                                                 |" << endl;
    cout << "|For which account would you like to transaction? |" << endl;
    cout << "| Chequings : 4                       Savings : 5 |" << endl;
    cout << "                       "; cin >> choice;
  
    if (choice == 4)
        account.deposit(); //for Chequing Account : Same transaction process with ATM
    else if (choice == 5)
        savacc.interest(); // for Saving Account: Interest rate affects the amount.
    else
        CounterTeller::deposit();

}

void CounterTeller::depositCheque()
{
    che.fromAccNum(); //calling the starting function

}

class ToBank
{
public:
    void chequeWithdraw();
};

void ToBank::chequeWithdraw()
{
    account.chequeWithdraw();
}

int main()
{
   
    EntryStation bank;
    bank.menu();
    ATM atm;
    CounterTeller ct;

    if (bank.choice == 1) // 1 for ATM
    {
        atm.readCard();
        atm.getPin();
        atm.withdraw();
    }
    else if (bank.choice == 2) // 2 for CT
    {
        ct.deposit();
    }
 
}


