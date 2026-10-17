## Lessons learned
Make use of the ASCII values of the characters to easily identify and filter only letters
[ASCII Charset](https://en.cppreference.com/cpp/language/ascii)

use the inbuilt standard library functions in string for string manipulation

- std::tolower(char) ==> function returns the ASCII value of the 'char' after converting it to lowercase. Hence it is essential to cast it to char if character is to be extracted.
  - (cast)std::tolower(char);
- keep in mind that '+' operator is overloaded for string class and hence can be used for easy string concatenation. ==> new_str = str1 + str2;
- reverse(str.begin(), str.end()) ==> has a return type of void and hence do not return anything. This function just modifies the string it operates on. Hence use this function on the copy of the string obtained after extraction+conversion to lowercase

After a reversed string is created, compare it with the string created after extraction of letters + conversion to lowercase using the overloaded '==' operator. And then return the bool status *true* if the string comparison succeeds. else return a *false*
On a side-note, the comparison of string can also be performed using the inbuilt strcmp() too!!

HAPPY CODING!!
