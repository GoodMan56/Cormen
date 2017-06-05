#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> vec{ 1, 9, 2, 5, 4, 3, 0 };

	vector<int>::iterator beg = vec.begin(), end = vec.end(), i = beg + 1, j;
	int key;
	for (; i < end; i++){
		key = *i;
		j = i - 1;
		while (j >= beg && *j > key){
			*(j + 1) = *j;
			j--;
		}
		*(j + 1) = key;
	}

	for (auto c : vec)
		cout << c << " ";
	system("pause");
	return 0;
}