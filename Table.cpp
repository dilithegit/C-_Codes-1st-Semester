//Program to output a table
# include <iostream>
# include <iomanip> 
using namespace std;
int main ()
{
	const int nameWidth = 10;
	const int gameWidth = 6;
	
	cout << setw (nameWidth) << ""
         << setw (gameWidth) << "Game1"
		 << setw (gameWidth) << "Game2"
		 << setw (gameWidth) << "Game3" << endl;
	
	cout << setw (nameWidth) << "Peter"
	     << setw (gameWidth) << "1"
	     << setw (gameWidth) << "0"
	     << setw (gameWidth) << "0" << endl;
	
	cout << setw (nameWidth) << "John"
	     << setw (gameWidth) << "0"
	     << setw (gameWidth) << "2"
	     << setw (gameWidth) << "1" << endl;
	
	cout << setw (nameWidth) << "Ryan"
	     << setw (gameWidth) << "1"
	     << setw (gameWidth) << "0"
	     << setw (gameWidth) << "1" << endl;

    return 0;
	     
		  
	
}
