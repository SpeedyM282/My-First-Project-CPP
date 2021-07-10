#include<iostream>
#include<string>


void detectiveBooks(){
	std::cout << "1. And Then There Were None\t\t\t";
	
	std::cout << "2. Murder on the Orient Express\n";
	
	std::cout << "by Agatha Christie\t\t\t";
	
	std::cout << "by Agatha Christie\n\n";
	
	std::cout << "3. The Cuckoo's Calling\t\t\t";
	
	std::cout << "4. A Study in Scarlet\n";
	
	std::cout << "by Robert Galbraith\t\t\t";
	
	std::cout << "by Arthur Conan Doyle\n\n";
	
	std::cout << "5. The Hound of the Baskervilles\t\t";
	
	std::cout << "6. The Black Echo\n";
	
	std::cout << "by Arthur Conan Doyle\t\t\t";
	
	std::cout << "by Michael Connelly\n\n";
}

void actionBooks(){
	std::cout << "1. Rhythm of War: The Stormlight Archive\t";
	
	std::cout << "2. Daylight\n";
	
	std::cout << "by Brandon Sanderson\t\t\t";	
	
	std::cout << "by David Baldacci\n\n";
	
	std::cout << "3. Ready Player Two: A Nove\t\t";
	
	std::cout << "4. The Sentinel: A Jack Reacher Novel\n";
	
	std::cout << "by Ernest Cline\t\t\t"; 
	
	std::cout << "by Lee Child\n\n";
	
	std::cout << "5. Spellbreaker\t\t\t";
	
	std::cout << "6. The Invisible Life of Addie LaRue\n";
	
	std::cout << "by Charlie N. Holmberg\t\t\t";
	
	std::cout << "by V. E. Schwab\n\n";
}

void comicBooks(){
	std::cout << "1. Nimona\t\t\t\t";
	
	std::cout << "2. Watchmen\n";
	
	std::cout << "by Noelle Stevenson\t\t\t";
	
	std::cout << "by Alan Moore and Dave Gibbons\n\n";
	
	std::cout << "3. Daytripper\t\t\t";
	
	std::cout << "4. This One Summer\n";
	
	std::cout << "by Gabriel Ba and Fabio Moon\t\t";
	
	std::cout << "by Mariko Tamaki and Jillian Tamaki\n\n";
	
	std::cout << "5. Sweet Tooth\t\t\t\t";
	
	std::cout << "6. Blankets\n";
	
	std::cout << "by Jeff Lemire\t\t\t";
	
	std::cout << "by Craig Thompson\n\n";
}

void historicalBooks(){
	std::cout << "1. Silence\t\t\t\t";
	
	std::cout << "2. Waverley\n";
	
	std::cout << "by Shusaku Endo\t\t\t";
	
	std::cout << "by Walter Scott\n\n";
	
	std::cout << "3. A Tale of Two Cities\t\t\t";
	
	std::cout << "4. The Book of Negroes\n";
	
	std::cout << "by Charles Dickens\t\t\t";
	
	std::cout << "by Lawrence Hill\n\n"; 
	
	std::cout << "5. War and Peace\t\t\t";
	
	std::cout << "6. Gone With the Wind\n";
	
	std::cout << "by Leo Tolstoy\t\t\t";
	
	std::cout << "by Margaret Mitchell\n\n";
}

void fantasyBooks(){
	std::cout << "1. A Game of Thrones\t\t\t";
	
	std::cout << "2. The Fellowship of the Ring\n";
	
	std::cout << "by George R.R.Martin\t\t\t";
	
	std::cout << "by J.R.R.Tolkien\n\n";
	
	std::cout << "3. The Lion, the Witch and the Wardrobe\t\t";
	
	std::cout << "4. The Colour of Magic\n";
	
	std::cout << "by C.S.Lewis\t\t\t\t";
	
	std::cout << "by Terry Pratchett\n\n";
	
	std::cout << "5. Assassin’s Apprentice\t\t\t"; 
	
	std::cout << "6. The Lies of Locke Lamora\n";
	
	std::cout << "by Robin Hobb\t\t\t\t";
	
	std::cout << "by Scott Lynch\n\n";
}

void horrorBooks(){
	std::cout << "1. Rosemary's Baby\t\t\t";

	std::cout << "2. The Haunting of Hill House\n";

	std::cout << "by Ira Levin\t\t\t\t";

	std::cout << "by Shirley Jackson\n\n";

	std::cout << "3. Lord of the Flies\t\t\t";

	std::cout << "4. Night Film\n";

	std::cout << "by William Golding\t\t\t";

	std::cout << "by Marisha Pessl\n\n";

	std::cout << "5. Ring\t\t\t\t\t";

	std::cout << "6. Penpal\n";

	std::cout << "by Koji Suzuki\t\t\t";

	std::cout << "by Dathan Auerbach\n\n";
}

/*Declaring functions for items of third menu*/

void addingBook(){
	char name[100], author[100], date[100];

	std::cout << "Enter book name: ";

	std::cin >> name;

	std::cout << "\n\nEnter author name: ";

	std::cin >> author;

	std::cout << "\n\nEnter date (DD/MM/YYYY): ";

	std::cin >> date;

	std::cout <<"\n\n";
}

void searchingBook(){
	char nBook[100], nAuthor[100], issueDate[100]; 

	std::cout << "Enter book's name: ";

	std::cin >> nBook;

	std::cout << "\n\nEnter author's name: ";

	std::cin >> nAuthor;

	std::cout << "\n\nEnter the issued date (DD/MM/YYYY): ";

	std::cin >> issueDate;

	cout << "\n\n";
}

void deletingBook(){
	char nBook[100], nAuthor[100], issueDate[100];

	std::cout << "Enter book's name: ";

	std::cin >> nBook;

	std::cout << "\n\nEnter author's name: ";

	std::cin >> nAuthor;

	std::cout << "\n\nEnter the issued date (DD/MM/YYYY): ";

	std::cin >> issueDate;

	cout "\n\n";
}

void updatingPassword(){
	char newPass[20], passW[20];

	int exit;

	std::cout << "Enter new password: ";

	std::cin >> passW;

	std::cout << "\n\nEnter the new password again: ";

	std::cin >> newPass;

	std::cout << "\n\n0. Exit" << endl << endl;

	std::cin >> exit;
}








