#include <iostream>
#include <string>

using namespace std;
void rec(string, char,int);
string s("ab");
int i = 0;

int main(){
	char c;
	cout << "enter the symbol" << endl;
	cin >> c;

	rec(s,c,i);
	system("pause");
	return 0;
}

void rec(string s, char c,int i){
		if  (i <= s.size() && s[i] == c){
			cout << "found" << endl;
		}
		else if (i <= s.size() && s[i] != c)
			rec(s, c, i + 1);
		else if (i > s.size()){
			cout << "not found" << endl;
		}
}