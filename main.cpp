#include <iostream>
#include <fstream>
#include <mysql/jdbc.h>
#include <string>
using namespace std;



//connection to database. 
int databaseConnect(char database){
	SAConnection con;
	try
	{
	con.Connect (database, "qrz", "blank", )
	
	
	}	





}











bool isLoggedin() {


	string username;
	string userpassword;
	string un, pw;

	cout << "type in username \n";
	cin  >> username;
	cout << "type in password \n";
	cin  >> userpassword;


	ifstream read("data" + username + ".txt");
	getline(read, un);
	getline(read, pw);

		
	if (un == username && pw == userpassword) {
		return true;
	}
	else {
		return false;
	}	
}

void firstPage() {

	int choice;
	cout << "1: Create database  \n";
       	cout << "2: Insert Data  \n";
	cout << "3: Delete Data  \n";
	cout << "4: Search Data  \n";
	cout << "5: Print Data   \n";
	cout << "6: Save         \n";
	cout << "7: Exit         \n";


	cin >> choice;

	if (choice == 1)  {
	  cout << "creating database";
	}

}

void createDatabase() {
	


}

int main() {

	int userInput;
	cout << "Press 1 to Login\n ";
	cout << "Press 2 to create a new account\n";
       	cin >> userInput;	
	if (userInput == 1) {
		
			
		bool status = isLoggedin();	
	 	if (!status){
		cout << " false login" << endl;
		return 0;	
			
		}
		else  {
			cout << "login successfull" << endl;
			firstPage();
			return 1;
			
		}
	}
	else if (userInput == 2) {
	string username, password; 
	cout << "select a username \n";
	cin >> username;
	cout << "select a password \n";
	cin >> password;

	ofstream file;
	file.open ("data" + username + ".txt");

	file << username << endl << password;

	file.close();
	main();

			
	 
	// if logged in  => give options to create database, insert , modify, 
	//
		

	}

	


     }
