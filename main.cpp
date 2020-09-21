#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop Go!!!!!!!!!!!!!!!!!!!To*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	int Array[5] = {1, 2, 3, 4, 5};
	int choise;
	while(true){
		cout << "Âûáåðèòå ôóíêöèþ: 0 - âûéòè |1 - âûâîä ìàññèâà | 2 - Âûáîð íîìåðà ýëåìåíòà ìàññèâà ïî èíäåêñó" << endl;
		cout << "Ââåäèòå ÷èñëî: ";
		cin >> choise;
		switch(choise){
			case 0:{
				cout << "Exit" << endl;
				return 0;
		}
		case 1:{
			cout << "Âûâîä ìàññèâà"<< endl;
			for (int i = 0; i < 5; i++){
				cout << Array[i] << " ";
			}
			cout << " " << endl;
			break;
		}
		case 2:{
			cout << "Ââåäèòå èíäåêñ ìàññèâà: ";
			int numberEL;
			cin >> numberEL;
			int numberValue;
			cin >> numberValue;
			Array[numberEL] = numberValue;
			cout << " " << endl;
			break;
			}
			case 3: {
			cout << "";
				cout << " " << endl;
				break;
		}
	}
	system("pause");
	return 0;
}
