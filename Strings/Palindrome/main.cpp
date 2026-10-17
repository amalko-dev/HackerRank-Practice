#include <iostream>
#include<string>

using namespace std;

bool isAlphabeticPalindrome(string code)
{
    bool RetStatus = false;
    string sub_str;
    string rev_str;

    //extract only letters
    //iterate through all the character strings in code
    for (auto ch : code)
    {
        //use ASCII values to identify the letters and convert them to lowercase
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            //only letters are identified
            sub_str+= (char)tolower(ch); //converting to lowercase and appending to sub_str
        }
    }

    //create a copy of sub_str to be later used for comparison
    rev_str = sub_str;

    //reverse the copy
    reverse(rev_str.begin(), rev_str.end());

    //compare the reversed and extracted strings
    if (sub_str == rev_str)
    {
        RetStatus = true;
    }

    return RetStatus;

}
