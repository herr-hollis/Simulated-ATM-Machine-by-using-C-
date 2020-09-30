#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void first();
void second();
void third();
void second(void third());

int main() {
	
	string name,bank;
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"\t\t\tWELCOME TO THE HOLIS WORLD"<<endl;
	cout<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"Please enter your full name as your IC:"<<endl;
	cin>>name;
	cout<<"Please register your bank number"<<endl;
	cin>>bank;
	system("pause");
	first();
	second();

	}

	void first(){
	system("cls");
	cout<<"-----------------------------------------------------------------------------"<<endl<<endl;
	cout<<"\t\tYour Registration Is Successfuly Recorded To Our System."<<endl;
	cout<<"\t\tThank You For Seleting For Our Bank."<<endl;
	cout<<"\t\tYou May Proceed To The Next Step."<<endl;
	cout<<"\t\tPlease Press Any Key To Continue."<<endl<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl<<endl;
	system("pause");
	}
		
	void second(){
	
	char option,ch;
	string yesno,name,bank,pin="",pin1="",pin2="0000";
	int amount,withdraw,balance=1000,balance1;
	
	system("cls");
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"\t\tHOLLIS BANK SDN. BHD."<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"\t\t(1) Balance Inquiry"<<endl<<endl;
	cout<<"\t\t(2) Deposit"<<endl<<endl;
	cout<<"\t\t(3) Withdraw"<<endl<<endl;
	cout<<"\t\t(4) Change Password"<<endl<<endl;
	cout<<"\t\t(5) Save And Exit"<<endl<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"\t\tPLEASE CHOOSE YOUR OPTION TO CONTINUE"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<endl;cin>>option;
	
	switch(option){
	
	case '1': 
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	cout<<"\t\tYour Balance is: "<<balance<<endl;
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	cout<<endl;
	cout<<"Do You Want To Proceed To Another Transaction? (yes/no) "<< endl;cin>>yesno;
	if(yesno=="yes") second();
	else if (yesno=="no") third();
	
	
	case '2': 
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"\t\tEnter The Amount Of Deposited Money: ";cin>>amount;
	system("pause");
	cout<<"Trasaction Succesful"<<endl;
	balance=balance+amount;
	cout<<"\t\tYour Balance is: "; cout<<balance;
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"Do You Want To Proceed To Another Transaction? (yes/no) "<< endl;cin>>yesno;
	if(yesno=="yes") second();
	else if (yesno=="no") system("cls");
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	cout<<"Thank You For Using Our Services. Please Come Again!!"<<endl<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	system("pause");
	
	case '3': 
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"Enter The Total Amout Of Withdraw: "; cin>>withdraw;
	if(withdraw>>balance){
	cout<<"Sorry, You Don't Have A Sufficient Amount In Your Acount'"<<endl;
	system("cls");
	second();}
	system("pause");
	cout << "Enter password: ";
	ch = _getch();
	while(ch != 13){
	pin.push_back(ch); 
	cout << '*';
	ch = _getch();}
	if(pin==pin2){
	cout<<"Trasaction Succesful"<<endl; 
	second();}		
	else{
	cout<<"Trasaction Not Succesful"<<endl; system("pause"); 
	third();}
	
}}
	void third(){
			char option,ch;
	string yesno,name,bank,pin="",pin1="",pin2="0000";
	int amount,withdraw,balance,balance1;
	cout<<"Trasaction Succesful"<<endl;
	balance1=balance-withdraw;
	cout<<"Baki Wang Simpanan: "; cout<<balance;
	cout<<"-------------------------------------------------------------------";
	cout<<"Do You Want To Proceed To Another Transaction? (yes/no) "<< endl;cin>>yesno;
	if(yesno=="yes") third();
	else if(yesno=="no") 
	cout<<"-------------------------------------------------------------------"<<endl<<endl;
	cout<<"Thank You For Using Our Services. Please Come Again!!"<<endl<<endl; 
	cout<<"-------------------------------------------------------------------"<<endl<<endl;}

	
