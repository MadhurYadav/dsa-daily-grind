// Brute Force

// #include <iostream>
// using namespace std;

// bool canbechunked(int i, int j, int* a) {
//     int cnt = 0;
//     for (int k = i; k <= j; k++) {
//         if (a[k] >= i && a[k] <= j) {
//             cnt++;
//         }
//     }
//     if (cnt == (j - i + 1)) {
//         return true;
//     }
//     return false;
// }

// int main() {
//     int N;
//     cin >> N;
//     int a[N];
//     for (int i = 0; i < N; i++) {
//         cin >> a[i];
//     }
    
//     int i = 0, ans = 0;
//     while (i < N) {
//         for (int j = i; j < N; j++) {
//             if (canbechunked(i, j, a)) {
//                 break;
//             }
//             i = j + 1;
//             ans++;
//         }
//     }
    
//     cout << "ans: " << ans << endl;
//     return 0;
// }



// Optimized

#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int N;
	cin>>N;
	
	int Arr[N];
	for(int i=0; i<N; i++){
		cin>>Arr[i];
	}
	
    // Calculated in O(N)
	int Pmax[N];
	Pmax[0] = Arr[0];
	for(int i=1; i<N; i++){
		Pmax[i] = max(Pmax[i-1], Arr[i]);
	}
	
	int chunks = 0;
	for(int i=0; i<N; i++){
        // Chunks break when Pmax[i] and index are equal
		if(Pmax[i] == i){
			chunks++;
		}
	}
	cout<<chunks;
    return 0;
}