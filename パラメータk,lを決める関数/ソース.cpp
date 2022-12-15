#include <iostream>

using namespace std;
//時間計算量はO(n^2),ステップ数がn*(n+1)/2だから.
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