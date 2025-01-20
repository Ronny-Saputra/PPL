#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;

    for (int t = 0; t < T; t++){
        int N;
        cin >> N;

    int M; 
    cin >> M;

    int total = 0;

        for (int i = 0; i < N; i++) {
            int numbers[N];
            cin >> numbers[i];

            if ((i % 2 == 0 && M == 1) || (i % 2 == 1 && M == 2)){
                total = (total + numbers[i]) % 2;   
            } else {
                total = (total - numbers[i]) % 2;
            }
        }

        if (total == 0) {
            cout << "1" << endl;
        } else {
            cout << "2" << endl;
        }
    }

    return 0;
}