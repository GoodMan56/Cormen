#include <iostream>
#include <string>

using namespace std;

int main(){
	string s(" ");
	cout << "enter the symbol" << endl;
	char sym;
	cin >> sym;
	auto beg = s[0];
	auto beg_i = s.begin();
	auto end_i = s.end();
	int len = s.length() - 1;
	char temp = s[len];
	s[len] = sym;
	bool found = 0;
	int i;
	for (; beg_i != end_i - 1; beg_i++)
		found = true;

	if (found = 1)
		if (beg_i < end_i || temp == *beg_i)
			cout << "found" << endl;
		else
			cout << "not found" << endl;

	system("pause");
	return 0;
}