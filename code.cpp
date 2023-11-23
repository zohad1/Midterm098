#include<iostream>
using namespace std;
int main()
{
	char choice;
	do 
	{
	double amount, discount = 0;
	double point = 0;
	char ch;
	cout<<"Enter the amount you have purchased= ";
	cin>>amount;
	cout<<"The amount you have purchased of= "<<amount<<"$"<<endl;
	
	point = amount / 10;
	cout<<"The points you have earned by purchase: "<<point<<" points"<<endl;
	discount = point * 0.5;
	cout<<"Do you want to use points for discount (y/n): ";
	cin>>ch;
	if (ch == 'Y' || ch == 'y')
	{
		double purchase = 0;
		purchase = amount - discount;
		cout<<"Discount you will get: "<<discount<<"$"<<endl;
		cout<<"Toatl purchase after discount= "<<purchase<<"$"<<endl;
	}
	else
	{
		cout<<"Your total purchase= "<<amount<<endl;
		cout<<"Total points remaining: "<<point<<endl;
		
	}
	cout<<"Do you want to do it again (y/n): ";
	cin>>choice;
   }while (choice == 'Y' || choice == 'y');
   cout<<"**Thank you.Do come back again**";
   return 0;
}
