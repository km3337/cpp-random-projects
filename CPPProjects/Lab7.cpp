#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std; 
/*
README!
This program opens a text file for reading, taking contact information and formatting it in a way that is acceptable.
*/

int main()
{
	string information;
	string first_name;
	string last_name;
	string phone_number;
	ifstream info_stream("nameAndNumber.txt");

	if (info_stream.is_open())//test if my file stream is open
	{
		while (getline(info_stream, information)) //loops through the file stream to get information
		{//beginning of the loop
			istringstream string_stream(information); //creates a string stream to iterate through the line just grabbed.
			getline(string_stream, last_name, ','); //last name
			getline(string_stream, first_name, ','); //first name
			getline(string_stream, phone_number, ','); //phone number
			phone_number.insert(0, "("); //format the phone #
			phone_number.insert(4, ")");
			phone_number.insert(8, "-");
			//Prints out the formatted response.
			cout << last_name << ", " << first_name << ": " << phone_number << endl;

		}
	}
}

;