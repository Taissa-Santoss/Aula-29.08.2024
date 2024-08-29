#include <iostream>
#include <vector>

using namespace std;

struct Carro{
	string modelo;
	int ano;
	string placa;
};

int main() {
	int opcao;
	string placa;
	Carro carro;
	vector<Carro> carros;
	
	do{
		cout << "\nMenu de opcoes:\n";
	    cout << "1. Inserir Carros\n";
	    cout << "2. Mostrar Todos os Carros\n";
	    cout << "3. Buscar um Carro e Mostrar\n";
	    cout << "0. Sair\n";
	    cout << "Escolha uma opcao: ";
		cin >> opcao;
		
		switch(opcao) {
			case 0:
				cout << "\nFinalizado...\n";
				break;
			
			case 1:
				cout << "\nInserir Carro: \n";
				cout << "Modelo:";
				cin >> carro.modelo;
				cout << "\nAno:";
				cin >> carro.ano;
				cout << "\nPlaca:";
				cin >> carro.placa;
				carros.push_back(carro);
				break;
				
			case 2:
				cout << "\nListar carros: \n";
				for(Carro carro : carros) {
				cout << "Carro: \n";
				cout << "Modelo:";
				cout << carro.modelo;
				cout << "\nAno:";
				cout << carro.ano;
				cout << "\nPlaca:";
				cout << carro.placa;
				cout << endl;
				}
				break;
				
			case 3:
				cout << "\nBuscar por carro: ";
				cout << "\nPlaca: ";
				cin >> placa;
				for(Carro carro: carros) {
					if(carro.placa == placa){
						cout << "Modelo:";
						cout << carro.modelo;
						cout << "\nAno:";
						cout << carro.ano;
						cout << "\nPlaca:";
						cout << carro.placa;
						cout << endl;
					}
				}
				break;
			default:
				cout << "Opcao invalida! \n";
		}
		
		
	} while(opcao !=0);
	
	
	return 0;
}