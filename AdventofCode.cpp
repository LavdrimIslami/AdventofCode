// AdventofCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
int main()
{
    std::ifstream myfile; myfile.open("D1Sampletext.txt");

    std::string mystring;

    if (myfile.is_open()) {
        while (getline(myfile, mystring)) {
            if (!mystring.empty()) {
                std::string numericPart;
                for (char ch : mystring) {
                    if (isdigit(ch)) {
                        numericPart += ch;
                    }
                }
                if (!numericPart.empty()) {
                    if (numericPart.size() >= 2) {
                        char firstchar = mystring.front();
                        char lastchar = mystring.back();
                        //std::cout << numericPart << std::endl;
                        char overTwo = firstchar + lastchar;
                        int newOverTwo = static_cast<int>(overTwo);
                        std::cout << newOverTwo << std::endl;
                    }
                    else {
                        char newfirstchar = mystring.front();
                        char newqwer = newfirstchar + newfirstchar;
                        int realqwer = static_cast<int>(newqwer);
                        std::cout << realqwer << std::endl;
                    }
                }
            }
        }
        myfile.close();
    }
    else {
        std::cout << "cant open sry" << std::endl;
    }
    return 0;


}
