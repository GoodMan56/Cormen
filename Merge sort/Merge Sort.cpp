#include <iostream>
#include <vector>
#include <string>

using namespace std; 
template<typename T> void mergeSort(vector<T>&, typename vector<T>::iterator, typename vector<T>::iterator);
template<typename T> void merge(vector<T>&, typename vector<T>::iterator, typename vector<T>::iterator, typename vector<T>::iterator);

int main(){

	//vector<int> vecA = {10,9,8,7,6,5,4,3,2,1,0,1,0};
	vector<string> vecA = {"aabbc", "aabba", "aaabc" };
	auto p = vecA.begin(), r = vecA.end() - 1;
	mergeSort(vecA, p, r);
	for (auto c : vecA)
		cout << c << " ";
	system("pause");
	return 0;
}

template<typename T> void mergeSort(vector<T> &A, typename vector<T>::iterator p, typename vector<T>::iterator r){
	if (p >= r)
		return;
	else{
		vector<T>::iterator q = p + distance(p, r) / 2;
		mergeSort(A,p, q);
		mergeSort(A,q + 1, r);
		merge(A, p, r, q);
	}
	
}

template<typename T> void merge(vector<T> &vec, typename vector<T>::iterator p, typename vector<T>::iterator r, typename vector<T>::iterator q){
	vector<T> temp(p,r + 1);

	auto i = temp.begin();
	auto j = i + distance(p, q + 1);
	const auto mid = j;
	for (auto k = p; k <= r; k++){
		if (j == temp.end() ||(i < mid && *i < *j)){
			*k = *i;
			i++;
		}
		else if(j < temp.end()){
			*k = *j;
			j++;
		}
	}
	

}