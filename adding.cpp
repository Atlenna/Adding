//#include "stdafx.h"
#include<iostream>
using namespace std;
void main()
{
	int x,item,price,total=0;
	char answer;


	do
	{
	cout<<"Please enter how many items do you want to buy : ";
	cin>>item;

	for (x=1; x<=item; x++)
	{
		cout<<"Please enter the price for item "<<x<<": RM ";
		cin>>price;
		total= total+price;
	}

cout<<endl;
cout<<"*********************************************"<<endl<<endl;
cout<<"Please pay RM"<<total<<endl<<endl;
cout<<"*********************************************"<<endl<<endl;

cout<<"Do you want to re-use this system? [Y/N] : ";
cin>>answer;
cout<<endl<<endl<<endl;

}

while (answer=='y' || answer=='Y');
cout<<endl<<endl<<endl;


system ("pause");
}