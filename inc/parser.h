
#ifndef INC_PARSER_H
#define INC_PARSER_H

#include <iostream>
#include <string>
#include <sstream>

class Parser {
    public :

        Parser( std::istream & is );
        std::string NextWord();
        unsigned int LineNumber() const;
        std::string Context() const;

    private :

    	char NextChar();
    	bool ReadLine();

    	enum State { stInSpace, stInNum, stInWord };
    	State mState;
    	std::istream & mIn;
    	std::string mLine;
    	unsigned int mLineNo, mPos;
};

#endif