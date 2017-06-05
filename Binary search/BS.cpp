#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto left = vec.begin(), right = end(vec) - 1;
	auto mid = left + distance(left, right) / 2;
	cout << "enter the num" << endl ; 
	int n;
	cin >> n;
	while (left <= right){
		if (*mid == n){
			cout << "found" << endl;
			break;
		}
		else if (n < *mid){
			right = mid - 1;
			mid = left + distance(left, right) / 2;
		}
		else if (n > *mid){
			left = mid + 1;
			mid = left + distance(left, right) / 2;
		}
	}
		
	if (left > right)
		cout << "not found" << endl;
	system("pause");
	return 0;
}