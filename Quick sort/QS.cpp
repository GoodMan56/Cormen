#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator partinition(vector<int> &vec, vector<int>::iterator p, vector<int>::iterator r){
// q - левая граница массива элементов элементов больших опорного 
	vector<int>::iterator q = p;
	for (vector<int>::iterator u = p; u < r; u++){
// опорный элемент r - с ним сравнивается текущий элемент массива
		if (*u <= *r){
			swap(*q, *u);
			q++;
		}
	}
// обмен опорного элемента и q (опорный элемент встает на свое место)
	swap(*q, *r);
	return q;
}

void quickSort(vector<int> &vec, vector<int>::iterator p, vector<int>::iterator r){
	if (p >= r) return;
	else{
		auto q = partinition(vec, p, r);
		if (q != vec.begin())
			quickSort(vec, p, q - 1);
		quickSort(vec, q + 1, r);
	}
}

int main(){
	vector<int> vec{ 2, 315, 100, 1, 20, 8 };
	auto p = vec.begin(), r = vec.end() - 1;
	quickSort(vec, p, r);
	for (auto c : vec)
		cout << c << " ";
	system("pause");
	return 0;
}

