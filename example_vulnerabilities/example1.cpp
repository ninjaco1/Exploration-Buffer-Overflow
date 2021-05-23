// #include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

// https://owasp.org/www-community/attacks/Format_string_attack
// format string attack
int main(int argc, char** argv){
    

    // This line is vulnerable
    printf(argv[1]);
    // 
    string str1, str2, str3, str4, str5, str6;
    // char *str11, *str22, *str33, *str44, *str55, *str66;
    // int num1, num2, num3;
    str1 = "idk";
    str2 = "what";
    str3 = "i'm doing";
    // str4 = "help";
    // str5 = "i hate school";
    // str6 = "lol";

    // str11 = "idk";
    // str22 = "what";
    // str33 = "i'm doing";
    // str44 = "help";
    // str55 = "i hate school";
    // str66 = "lol";

    // string* p1 = &str1;
    // string *p2 = &str2;
    // string *p3 = &str3;
    // string *p4 = &str4;
    // string *p5 = &str5;
    // string *p6 = &str6;

    // num1 = 0;
    // num2 = 1;
    // num3 = 2;

    return 0;
}