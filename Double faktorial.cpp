#include <bits/stdc++.h>
using namespace std;

int rekrusiFaktorial(int x){
    if (x == 1){
        return 1;
    }
    else if(x%2 == 1){
        return x * rekrusiFaktorial(x - 1);
    } else if (x%2 == 0){
        return (x/2) * rekrusiFaktorial(x - 1);
    }
}

int faktorial(int x){
   if(x == 1){
        return 1;
   }
   else return x * faktorial(x - 1);
}

int main(){
    int x;
    cin >> x;
    cout << rekrusiFaktorial(x) << endl;
}
