#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Bn_search(vector<int> A, int low, int high,int value)
{
	int mid = (low + high) / 2;
	//cout << low << "  " << high << "  " << mid << endl;
	if (low > high)
		return -1;

	if (A[mid] == value)
		return mid;

	if (A[mid] > value)
		return Bn_search(A, low, mid-1, value);

	if (A[mid] < value)
		return Bn_search(A, mid+1, high, value);
	

}
void B_search(vector<int> A,int value)
{
	cout << Bn_search(A, 0, A.size() - 1,value) << endl;;
}
int main()
{
	vector<int> A;
	A.push_back(2);
	A.push_back(5);
	A.push_back(8);
	A.push_back(10);
	A.push_back(15);
	A.push_back(25);
	A.push_back(35);
	A.push_back(45);
	A.push_back(55);
	A.push_back(65);
	A.push_back(75);
	A.push_back(85);
	A.push_back(95);
	B_search(A,85);

	system("pause");
	return 0;
}