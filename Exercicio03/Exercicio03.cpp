//1 – Peça para o usuário informar dois números, e veja se um é maior que o outro.
//- Se o primeiro número for maior, escreva, “o primeiro número é maior”
//- Se o segundo número for maior, escreva, “o segundo número é maior”
//- Senão, escreva, “os números são iguais”

/*
#include <iostream>

using namespace std;

int main() {

	int num1;
	int num2;

	cout << "Digite um número: ";
	cin >> num1;
	cout << "Digite um número: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "O primeiro número é maior";
	}
	else if (num2 > num1) {
		cout << "O segundo número é maior";
	}
	else {
		cout << "Os números são iguais";
	}

	return 0;
}
*/

//2 – Um mercado solicitou um sistema para avaliar a quantidade de produtos no estoque. No sistema, o funcionário deve informar a quantidade de produtos que tem no estoque.
//- Se o número for maior ou igual a 100, escreva “Quantidade suficiente no estoque “
//- Se o número for maior ou igual a 50, escreva “Atenção ao estoque”
//- Senão, escreva “Faça um novo pedido e reabasteça o estoque”

/*
#include <iostream>

using namespace std;

int main() {

	int estoque;
	cout << "Qual a quantidades de produtos no estoque? ";
	cin >> estoque;

	if (estoque >= 100) {
		cout << "Quantidade suficiente no estoque";
	}
	else if (estoque >= 50) {
		cout << "Atenção ao estoque";
	}
	else {
		cout << "Faça um novo pedido e reabasteça o estoque";
	}

	return 0;
}
*/


//3 – Peça para o usuário informar um número e veja onde ele se encaixa :
//-Se o número for maior que zero, escreva, “o número é positivo”
//- Se o número for menor que zero, escreva, “o número é negativo”
//- Senão, escreva, “o número é igual a zero”

/*
#include <iostream>

using namespace std;

int main() {

	int num;
	cout << "Informe um número: ";
	cin >> num;

	if (num > 0) {
		cout << "O número é positivo";
	}
	else if (num < 0) {
		cout << "O número é negativo";
	}
	else {
		cout << "O número é igual a zero";
	}



	return 0;
}
*/