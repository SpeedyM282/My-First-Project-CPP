/*
Name: Akhadbek Rizakulov
ID: 2010227
Project name: Library maintenance
Beginning date: 18.11.2020
Ending date: 27.04.2021
*/

#include<iostream>
#include<string>
#include"MyHeader.h"
#include"Users.h"

int main() {

	system("Color 0F");
	
	int n, a, obj = 0;
	std::string fname, lname, mname, addr,number, username;
	
	Users us[100];
	
/*  Main menu  */
	for(;;){
		std::cout << "1. Enter the system as guest\n\n";
		
		std::cout << "2. Enter the system as staff\n\n";
		
		std::cout << "0. Exit\n\n";
		
		std::cout << "Please enter the command: ";
		std::cin >> n;
		
		switch(n){
			case 1:{
				
				break;
			}
			case 2:{
				
				break;
			}
			case 0:{
				std::cout << "Goodbye!\n\n";
				
				exit(0);
				
				break;
			}
		}
	}
	
	system("pause");
	return 0;
}












