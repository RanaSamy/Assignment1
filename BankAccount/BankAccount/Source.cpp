# include <iostream>
using namespace std;
class BankAccount
{
public:
	BankAccount(){balance=0;}
	void setName (string name)
	{clientName=name;}
//	string getName()
//	{return clientName;}
	void setAccount (string acc)
	{AccountNum=acc;}
//	string getName ()
//	{return AccountNum;}
	void setBalance (double bal)
	{balance=bal;}
	double getBalance ()
	{return balance;}
	void deposite (double money)
	{if (money<0)
	cout<<"no money in negative :o ";
	else
		balance +=money;
	}
	void withdraw(double money)
	{if (money<0 || money> balance)
	cout<<"errorrrrrrrrr ";
	else
		balance -=money;
	}
private:
	double balance;
	string AccountNum;
	string clientName;
};
void main()
{
	BankAccount b;
	b.setName("Rana");
	b.setAccount("234");
	b.setBalance(20);
	b.deposite(1024);
	b.deposite(1024);
	cout<<b.getBalance();
	system("pause");


}
