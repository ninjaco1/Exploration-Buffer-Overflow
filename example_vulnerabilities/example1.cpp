#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


// format string attack
int main(int argc, char** argv){
    

    // This line is vulnerable
    printf(argv[1]);
    
    string str1, str2, str3, str4, str5, str6;
    int num1, num2, num3;
    str1 = "idk";
    str2 = "what";
    str3 = "i'm doing";
    str4 = "help";
    str5 = "i hate school";
    str6 = "lol";

    // num1 = 0;
    // num2 = 1;
    // num3 = 2;

    return 0;
}