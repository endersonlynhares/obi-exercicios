// link do exercicio: https://neps.academy/br/exercise/52

#include<iostream>

using namespace std;

int main(){
    bool A = false, B = false;
    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        int interruptor;

        cin >> interruptor;

        if(interruptor == 1){
            A = !A;
        }
        if(interruptor == 2){
            A = !A;
            B = !B;
        }
    }

    cout << A << endl;
    cout << B << endl;

    return 0;
}