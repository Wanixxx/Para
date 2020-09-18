#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	int Array[5] = {1, 2, 3, 4, 5};
	int choise;
	while(true){
		cout << "Выберите функцию: 0 - выйти |1 - вывод массива | 2 - Выбор номера элемента массива по индексу" << endl;
		cout << "Введите число: ";
		cin >> choise;
		switch(choise){
			case 0:{
				cout << "Exit" << endl;
				return 0;
		}
		case 1:{
			cout << "Вывод массива"<< endl;
			for (int i = 0; i < 5; i++){
				cout << Array[i] << " ";
			}
			cout << " " << endl;
			break;
		}
		case 2:{
			cout << "Введите индекс массива: ";
			int numberEL;
			cin >> numberEL;
			int numberValue;
			cin >> numberValue;
			Array[numberEL] = numberValue;
			cout << " " << endl;
			break;
			}
		}
	}
	system("pause");
	return 0;
}
