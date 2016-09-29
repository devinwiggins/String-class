#include <iostream>
#include <string>
#include "MyString.h"
using namespace std;
int main()
{
	int inputint;
	MyString d = MyString("JAMIN MUSIC");
	MyString s = MyString("programmin");
	printf("I have two strings that i will be manipulating. my first string is");
	printf("'JAMIN MUSIC' and my second string is 'programmin'");
	printf("first I will reveal the sizes of each string");
	cout << "the size of the first string 'JAMIN MUSIC' is "<<  d.Size() << endl;
	cout << "the size of the second string 'programmin' is " << s.Size() << endl;
	printf("Type an index number of a letter that you would like to present from the string\n");
	printf("'JAMIN MUSIC': ");
	cin >> inputint;
	cout << d.Index(inputint) << endl;
	printf("the two strings will be compared. if they are different a 0 will print if they\nare");
	printf(" the same 1 will print\n");
	system("pause");
	cout << d.Compare(s) << endl;
	printf("'programmin' will be appended to 'JAMIN MUSIC'\n");
	cout << d.Append(s) << endl;
	printf("programmin will be prepended to 'JAMIN MUSIC'\n");
	cout << d.Prepend(s) << endl;
	printf("JAMIN MUSIC will be converted to lower case letters\n");
	d.ToLower();
	printf("programmin will be conveted to upper case letters\n");
	s.ToUpper();
	printf("if the string 'MUSUC' is in the 'JAMIN MUSIC' string a 1 will print else, 0 \n");
	cout << d.findSub("MUSUC");
	printf("type a number within the index range of the string 'JAMIN MUSIC' if the string 'MUSIC'");
	printf("exists there 1 will print if not a 0 will print: ");
	cin >> inputint;
	cout << d.findIndexSub(inputint, "MUSIC");
	system("cls");
	printf("And thats my mystring class assessment");
	system("pause");
	return 0;
}