#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Buisnessman
{
private:
	string name,cnic,gender,profession;
	string nameofsearch;
	string filename;
	int choice;
protected:
	


public:
	Buisnessman()
	{
		filename="Mushhood";
	}
	void AskInformation();
	void showfilenames();
	void Profession();
};
	