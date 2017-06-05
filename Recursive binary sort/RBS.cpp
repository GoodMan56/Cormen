#include <iostream>
#include <vector>

using namespace std;

void rec(vector<int>, vector<int>::iterator, vector<int>::iterator, int);
int main(){
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7 };
	auto left = vec.begin(), right = end(vec);
	cout << "enter the num" << endl;
	int n;
	cin >> n;
	rec(vec, left, right, n);
	
	system("pause");
	return 0;
}

void rec(vector<int> v, vector<int>::iterator left, vector<int>::iterator right, int n){
	while (left < right){
		auto mid = left + distance(left, right) / 2;
		if (*mid == n){
			cout << "found" << endl;
			break;
		}
		else if (n < *mid){
			right = mid - 1;
			rec(v, left, right, n);
		}
		else if (n > *mid){
			left = mid + 1;
			rec(v, left, right, n);
		}
		if (left == right){
			cout << "not found" << endl;
		}
		break;
	}
}