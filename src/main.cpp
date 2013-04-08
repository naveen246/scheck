
#include <iostream>
#include <string>
#include <vector>
#include "dictionary.h"
#include "parser.h"
#include "error.h"

using namespace std;

int main() {
	cout << "scheck project" << endl;
    Dictionary d( "data/mydict.dat" );
    
    ifstream sub( "data/sub1.txt" );
    if( ! sub.is_open() ) {
        throw ScheckError( "cannot open data/sub1.txt" );
    }

    Parser p( sub );

    string word;
    while( ( word = p.NextWord() ) != "" ) {
        if( d.Check( word ) ) {
            cout << word << " is OK" << endl;
        } else {
            cout << word << " is misspelt at line " << p.LineNumber() << endl;
        }
    }

    return 0;
}