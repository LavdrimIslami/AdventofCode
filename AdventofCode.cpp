// AdventofCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
GIT GUIDE
cd C:\Users\LM728\source\repos\AdventofCode\
git fetch
git pull origin main
git remote -v
git branch -a
git checkout main
git add .
git commit -m "Your commit message here"
git push origin main
*/
#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::ifstream myfile; myfile.open("D1Sampletext.txt");

    std::string mystring;

    if (myfile.is_open()) {
        while (getline(myfile, mystring)) {
            std::cout << mystring << std::endl;
        }
        myfile.close();
    }
    else {
        std::cout << "cant open sry" << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
