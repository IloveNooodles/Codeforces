#include <iostream>
using namespace std;

void tukar(int &a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n, t, a[2][1001];
    cin >> n;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++)
        cin >> a[i][j];
    }
    cin >> t;
        for(int i  = 0; i < t; i++){
            char inp1, inp2;
            int x, y;
            cin >> inp1 >> x >> inp2 >> y;
        int p = inp1 - 'A';
        int q = inp2 - 'A';
        tukar(a[p][x-1], a[q][y-1]);
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j];
            if(j < n-1) cout << " ";
    }
    cout << endl;
    }
    cin.get();
}