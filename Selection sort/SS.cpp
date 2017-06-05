#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	vector < int > vec {3, 2, 1, 5, 6, 23, 0 ,15 };
	auto beg = vec.begin(), end = vec.end();
	vector<int>::iterator least = beg;
	for (; beg < end - 1; least++){
		while (beg < end){
			if (*least > *beg){
				swap(*least, *beg);
			}
			else
				beg++;
		}
		beg = least + 1;
	}
	for (auto c : vec)
		cout << c << " ";
	system("pause");
	return 0;
}