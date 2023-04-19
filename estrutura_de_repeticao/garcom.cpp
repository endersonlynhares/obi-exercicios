//link do exercicio: https://neps.academy/br/exercise/324

#include<iostream>

using namespace std;

int main(){

    int N, qtdCopos = 0;
    cin >> N;

    while(N > 0){

        int L, C;
        cin >> L >> C;

        if(L > C){
            qtdCopos += C;
        }

        N--;
    }

    cout << qtdCopos << endl;

    return 0;
}