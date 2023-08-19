#include <iostream>
using namespace std;

bool check_rotation(string str1, string str2)
{
	string temp = str1 + str1;
	return (temp.find(str2) != string::npos);
}

int main()
{
    string str1 = "AACD", str2 = "CADA";
 
    if (check_rotation(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
    return 0;
}