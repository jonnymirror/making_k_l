#include <iostream>

using namespace std;
//���Ԍv�Z�ʂ�O(n^2),�X�e�b�v����n*(n+1)/2������.
int main() {
	long long int n;
	cin >> n;
	for (long long int parameter_sum = 0; parameter_sum < n+1; parameter_sum++) {
		for (long long int k = 0; k < parameter_sum+1; k++) {
			long long int l = parameter_sum - k;
			cout << "k: " << k <<" " << "l: " << l << endl;
		}
	}
	return 0;
}