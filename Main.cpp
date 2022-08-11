#include<iostream>
#include"header.h"
#include<fstream>
#include<string>
using namespace std;
int main()
{
	Buisnessman B1;
	char choice='y';
	while(choice!='n')
	{
	B1.AskInformation();
	B1.showfilenames();
	B1.Profession();
	cout<<"What do you want next y/n :";
	cin>>choice;
	}
	system("pause");
	return 0;
}