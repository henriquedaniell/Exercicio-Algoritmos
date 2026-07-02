#include <iostream>

using namespace std;

double calcularMedia(int nota1, int nota2, int nota3) {
	return (nota1 + nota2 + nota3) / 3;
}

int main(){
	int nAlunos;
	cout << "Digite a quantidade de alunos que será calculada a média: ";
	cin >> nAlunos;
	double nota1[nAlunos];
	double nota2[nAlunos];
	double nota3[nAlunos];
	double media[nAlunos];
	string alunos[nAlunos];

	for (int i = 0; i < nAlunos; i++) {
		cout << "Digite o nome do "<< i+1 << "° aluno: ";
		cin >> alunos[i];
		cout << "Digite a primeira nota de " <<alunos[i] << ": ";
		cin >> nota1[i];
		cout << "Digite a segunda nota de " << alunos[i] << ": ";
		cin >> nota2[i];
		cout << "Digite a terceira nota de " << alunos[i] << ": ";
		cin >> nota3[i];
		media[i] = calcularMedia(nota1[i], nota2[i], nota3[i]);
	}
	
	cout << "\n----------\n\nALUNO" << endl;
	for (int i = 0; i < nAlunos; i++) {
		cout << alunos[i] << "   N1: " << nota1[i] << "  N2: " << nota2[i] << "  N3: " << nota3[i] << "  Média: " << media[i] << "    Situação: ";
		if (media[i] >= 7) {
			cout << "Aprovado" << endl;
		}
		else {
			cout << "Reprovado" << endl;
		}
	}
	double maiorMedia = 0;
	string alunoMaiorMedia;
	for (int i = 0; i < nAlunos; i++) {
		if (media[i] > maiorMedia) {
			maiorMedia = media[i];
			alunoMaiorMedia = alunos[i];
		}
	}

	cout << "---------\n\nMaior média foi de " << alunoMaiorMedia << ", com a nota: " << maiorMedia << ".";

	return 0;
}