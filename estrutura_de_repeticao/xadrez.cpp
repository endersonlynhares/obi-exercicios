// link do exercicio: https://neps.academy/br/exercise/164

#include<iostream>

using namespace std;

int main(){

    int L, C;

    cin >> L >> C;

    if(L % 2 == C % 2){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;
}