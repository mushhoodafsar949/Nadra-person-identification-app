#include<iostream>
#include"header.h"
#include<fstream>
#include<string>
using namespace std;

void Buisnessman::AskInformation()
{
	cout<<"WELCOM TO NADRA'S PERSON IDENTIFIER APPLICATION "<<endl;
	cout<<"*************************************************"<<endl;
	cout<<"What's Your Name ?:";
	getline(cin,name);
	cout<<"Enter Your 13 digit CNIC :";
	getline(cin,cnic);
	cout<<"Enter Your Gender :";
	getline(cin,gender);
	cout<<"What is Your Profession :";
	getline(cin,profession);
}


void Buisnessman::showfilenames()
{
	cout<<"We have only data of Following peoples "<<endl;
	cout<<"For Buisnessman class"<<endl;
	cout<<"1) Daud Adil "<<endl;
	cout<<"2) Muneeb Iqbal "<<endl;
	cout<<"3) Sohaib Khan "<<endl;
	cout<<"4) Tashfeen Haider "<<endl;
	cout<<"***************************************"<<endl;

	cout<<"For Student Class "<<endl;
	cout<<"1) Ahsan Adil "<<endl;
	cout<<"2) Shaheen Iqbal "<<endl;
	cout<<"3) Shizza Saqib "<<endl;
	cout<<"4) Haider Ali "<<endl;
	cout<<"**************************************"<<endl;
	
	cout<<"For Law Enforcement Agencies Class "<<endl;
	cout<<"1) Hashir Afsar "<<endl;
	cout<<"2) Noor Lehri "<<endl;
	cout<<"3) Shizza "<<endl;

}


void Buisnessman::Profession()
{
	cout<<"************************************************"<<endl;
	cout<<"Select Your Profession"<<endl;
	cout<<"1) Buisnessman "<<endl;
	cout<<"2) Student "<<endl;
	cout<<"3) Law Enforcement "<<endl;
	cout<<"4) Civilian "<<endl;
	cin>>choice;
	cout<<"***********************************************"<<endl;
	switch(choice)
	{
	case 1: cout<<"You Are A Buisnessman"<<endl;
			cout<<"Your Access to our Database is limited "<<endl;
			cout<<"Lets Start:"<<endl;
			cout<<"***************************************"<<endl;
			cout<<"Enter the Name of Person You want to search :";
			cin.ignore();
			getline(cin,nameofsearch);
			if(nameofsearch=="Daud Adil")
			{
				ifstream file;
	
				file.open("Daud Adil.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             }//else closing bracket
				file.close();
			}//if closing bracket


			else if(nameofsearch=="Muneeb Iqbal")

			{
				ifstream file;
	
				file.open("Muneeb Iqbal.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             
				}
				file.close();
			}

			else if(nameofsearch=="Sohaib Khan")
			{
				ifstream file;
	
				file.open("Sohaib Khan.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	            }

				file.close();
			}


			else if(nameofsearch=="Tashfeen Haider")
			{
				ifstream file;
	
				file.open("Tashfeen Haider.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             }
			}

			break;


	case 2:
			cout<<"You Are A Student"<<endl;
			cout<<"Your Access to our Database is very limited "<<endl;
			cout<<"We will only Provide you access of Educational Background of your Fellow "<<endl;
			cout<<"Lets Start:"<<endl;
			cout<<"***************************************"<<endl;
			cout<<"Enter the Name of Person You want to search :";
			cin.ignore();
			getline(cin,nameofsearch);
			if(nameofsearch=="Ahsan Adil")
			{
				ifstream file;
	
				file.open("Ahsan Adil.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             }//else closing bracket
				file.close();
			}//if closing bracket


			else if(nameofsearch=="Shaheen Iqbal")

			{
				ifstream file;
	
				file.open("Shaheen Iqbal.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             
				}
				file.close();
			}

			else if(nameofsearch=="Shizza Saqib")
			{
				ifstream file;
	
				file.open("Shizza Saqib.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	            }

				file.close();
			}


			else if(nameofsearch=="Haider Ali")
			{
				ifstream file;
	
				file.open("Tasheen Haider.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             }
			}

			break;


	case 3: 
			cout<<"You Are A Law Enforment Agency's Member"<<endl;
			cout<<"Your Access to our Database is  limited "<<endl;
			cout<<"We will only Provide you access of Educational Background of your Fellow "<<endl;
			cout<<"Lets Start:"<<endl;
			cout<<"***************************************"<<endl;
			cout<<"Enter the Name of Person You want to search :";
			cin.ignore();
			getline(cin,nameofsearch);
			if(nameofsearch=="Hasir Afsar")
			{
				ifstream file;
	
				file.open("Hashir Afsar.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             }//else closing bracket
				file.close();
			}//if closing bracket


			else if(nameofsearch=="Noor Lehri")

			{
				ifstream file;
	
				file.open("Noor Lehri.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	             
				}
				file.close();
			}

			else if(nameofsearch=="Shizza")
			{
				ifstream file;
	
				file.open("Shizza.txt");
				string str;
				
				if(!file)
				{
					cout<<"sorry can not open "<<endl;
				}
				else
				{
				  while(getline(file,str))
				  {
					cout<<str<<endl;
			       }
	            }

				file.close();
			}

			break;

	case 4:
		cout<<"You Are A Civilian"<<endl;
			cout<<"Your Access to our Database is Not Allowe Unless you visit Personally "<<endl;
			cout<<"Send Your Information Before Coming To Nadra"<<endl;
			cout<<"Lets Start:"<<endl;
			cout<<"***************************************"<<endl;
			
				break;

	}//switch closing bracket

}//function clossing bracket
