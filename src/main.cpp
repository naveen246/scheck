
#include <iostream>
#include <string>
#include "dictionary.h"

using namespace std;

int main() {
	cout << "scheck project" << endl;
    Dictionary d( "data/mydict.dat" );
    string word;
    while( getline( cin, word ) ) {
	    if( d.Check( word ) ) {
	    	cout << word << " is Ok" << endl;
	    } else {
	    	cout << word << " is misspelt" << endl;
	    }
	}

    return 0;
}