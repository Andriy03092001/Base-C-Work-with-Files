#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

int main() {

	/*
	fstream - �����������
	ifstream - ���������
	ofstream - ������
	*/


	//ofstream - ������� 
	//ofstream fout;
	string fileName = "text.txt";
	//fout.open(fileName, ofstream::app);
	//bool isOpen = fout.is_open();
	//if (isOpen == false) {
	//	cout << "Error: File not open!" << endl;
	//}
	//else {
	//	string name;
	//	cin >> name;
	//	fout << name << endl;
	//}
	//fout.close();


	ifstream fin;
	fin.open(fileName);

	bool isReadOpen = fin.is_open();

	if (isReadOpen == false) {
		cout << "File not fount!" << endl;
	}
	else {
		cout << "File opened!" << endl;
		char data;
		string data2;

		//�� ������ �������
		/*while (fin.get(data)) {
			cout << data;
		}*/

		//�� ������
		/*while (!fin.eof()) {
			data2 = "";
			fin >> data2;
			cout << data2 << endl;
		}*/


		//�� ����� �����
		/*while (!fin.eof()) {
			data2 = "";
			getline(fin, data2);
			cout << data2 << endl;
		}*/

		char data3[50];
		//����� �������
		while (!fin.eof()) {
			fin.getline(data3, 50);
		}


	}



	fin.close();



	return 0;
}