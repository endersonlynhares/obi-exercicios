// link do exercicio: https://neps.academy/br/exercise/47

#include<iostream>

using namespace std;

int main(){
    
    int N, qtd=0;
    bool countStart = false,countProgress = false;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        if(num == 1){
            countStart = true; // abre chave para iniciar a primeira contagem
            countProgress = false; //fecha chave da segunda contagem
        }else{
            if(countStart){
                if(num == 0){
                    if(countProgress){
                        qtd++;
                        countStart = false; // fecha chave da primeira contagem
                        countProgress = false; //fecha chave da segunda contagem
                    }
                    countProgress = true; // abre chave para iniciar a segunda contagem       
                }
            }
        }
        
    }

    cout << qtd << endl;

    return 0;
}