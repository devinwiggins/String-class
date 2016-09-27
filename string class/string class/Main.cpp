#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{
	MyString d = MyString("JAM");
	MyString s = MyString("programmin");
	//cout << d.Size() << endl;
	//cout << d.Index(2) << endl;
	//cout << d.Compare(s) << endl;
	//cout << d.Prepend(s) << endl;
	/*cout << d.getSubIndex(4, "sound");*/
	/*cout << d.getSub("sound");*/
	/*d.ToLower();*/
	cout << d.ToC_str();
	system("pause");
	return 0;
}