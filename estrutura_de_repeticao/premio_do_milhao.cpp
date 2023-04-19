// link do exercicio: https://neps.academy/br/exercise/48

#include<iostream>

using namespace std;

int main(){

    int N, dias = 1, soma=0;

    cin >> N;

    while(N > 0){
        int A;
        cin >> A;
        soma += A;

        if(soma < 1000000){
            dias++;
        }

        N--;
    }

    cout << dias << endl;

    return 0;
}