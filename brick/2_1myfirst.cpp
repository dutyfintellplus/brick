/*
 * 2_1myfirst.cpp
 *
 *  Created on: 27.11.2012
 *      Author: __radar__
 */
// myfirst.cpp--displays a message
// http://archive.williamspublishing.com/cgi-bin/materials.cgi?isbn=978-5-8459-1778-2

#include <iostream>							// a PREPROCESSOR directive
int main(void)								// function header
{											// start of function body
    //using namespace std;					// make definitions visible
	using std::cout;						// делает доступным cout
	using std::endl;						// делает доступным endl
	using std::cin;							// делает доступным сіn
	cout << "Привет с Криму!!!";			// message
    cout << endl;							// start a new line
    cout << "You won't regret it!" << endl;	// more output
// If the output window closes before you can read it,
// add the following code (так и сделал):
    cout << "Press any key to continue." <<endl;
    cin.get();
    return 0;								// terminate main()
}											// end of function body
// todo 0




