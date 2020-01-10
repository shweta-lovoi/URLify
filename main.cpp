//Write a method to replace all spaces in a string with '%20'. You may assume that the string has sufficient space at the
//end to hold the additional characters, and that you are given the "true" length of string.
#include <iostream>
#include "url.h"
#include <string>

int main() {
    std::string strUrl;
    std::cout << "Please write a string: " << std::endl;
    std::getline(std::cin, strUrl);
    //url(strUrl);
    std::cout << "The new string is: " << url(strUrl) << '\n';
    return 0;
}
