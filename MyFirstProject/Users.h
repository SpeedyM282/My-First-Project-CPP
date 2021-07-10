#include<iostream>
#include<string>

class Users{
	
	public:

/*Set functions*/		
		
		void setAge(int a);
		
		void setBookId(int bookNum);
		
		void setNumber(string num);
		
		void setAddress(string addr);
		
		void setLastName(string lname);
		
		void setFirstName(string fname);
		
		void setMiddleName(string mname);
		
/*Get functions*/		
		
		int getAge();
		
		int getBookId();
		
		string getNumber();
		
		string getAddress();
		
		string getLastName();
		
		string getFirstName();
		
		string getMiddleName();
	
	private:
		
		int age, bookId;
		
		string firstName, lastName, middleName, address, number;
};

/*Set functions*/

void Users::setBookId(int bookId){
	this->bookId = bookId;
}

void Users::setFirstName(string firstName){
	this->firstName = firstName;
}

void Users::setLastName(string lastName){
	this->lastName = lastName;
}

void Users::setMiddleName(string middleName){
	this->middleName = middleName;
}

void Users::setAddress(string address){
	this->address = address;
}

void Users::setAge(int age){
	this->age = age;
}

void Users::setNumber(string number){
	this->number = number;
}

/*Get functions*/

int Users::getBookId(){
	return bookId;
}

int Users::getAge(){
	return age;
}

string Users::getNumber(){
	return number;	
}

string Users::getAddress(){
	return address;
}

string Users::getLastName(){
	return lastName;
}

string Users::getFirstName(){
	return firstName;
}

string Users::getMiddleName(){
	return middleName;
}

