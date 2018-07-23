 #include <iostream>
 #include <fstream>
 #include <string>
using namespace std;

void choice(string input)
{
	ifstream file;
	string st;


	if(input =="val=1")
	{
		file.open("\\home\\wm\\wm014\\public_html\\conor.html");
		while (getline(file, st)) {cout << st <<endl;}
	}
	if(input =="val=2")
	{
		file.open("\\home\\wm\\wm014\\public_html\\kara.html");
		while (getline(file, st)) {cout << st <<endl;}
	}
	if(input =="val=3")
	{
		file.open("\\home\\wm\\wm014\\public_html\\markus.html");
		while (getline(file, st)) {cout << st <<endl;}
	}
}
