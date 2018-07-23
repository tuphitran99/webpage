 #include <iostream>
 #include <fstream>
 #include <string>
using namespace std;

int choice(string input)
{
	ifstream file;
	file.open("data.txt");
	string st;


	if(input =="val=1")
	{
		file.open("conor.html");
		while (getline(file, st)) {cout << st <<endl;}
	}
	if(input =="val=2")
	{
		file.open("kara.html");
		while (getline(file, st)) {cout << st <<endl;}
	}
	if(input =="val=3")
	{
		file.open("markus.html");
		while (getline(file, st)) {cout << st <<endl;}
	}
}
