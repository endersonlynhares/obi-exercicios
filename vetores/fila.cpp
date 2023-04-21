// link do exercicio: https://olimpiada.ic.unicamp.br/pratique/pj/2014/f1/fila/

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N, M;
	vector<int> persons;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int identify;
		cin >> identify;
		persons.push_back(identify);
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		int deleteIdentify;
		cin >> deleteIdentify;

		for (int j = 0; j < persons.size(); j++) {
			if (deleteIdentify == persons[j]) {
				persons.erase(persons.begin() + j);
			}
		}

	}

	for (int person : persons) {
		cout << person << " " << flush;
	}

	

	return 0;
}