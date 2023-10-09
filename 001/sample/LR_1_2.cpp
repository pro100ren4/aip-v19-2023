#include <iostream>
#include <conio.h>

using namespace std;

class product {


	private:
		int number;
		char name[10];
		int date;
		int bb_date;
		char perfomance[10];
		int price;

	public:
		
	
		void fill_data() {

			cout << "Enter number >> ";
			cin >> number;

			cout << "Enter name >> ";
			cin >> name;

			cout << "Enter date of manufacture >> ";
			cin >> date;

			cout << "Enter best before date >> ";
			cin >> bb_date;

			cout << "Enter perfomance >> ";
			cin >> perfomance;

			cout << "Enter price >> ";
			cin >> price;
		};

		void read_data() {

			cout << number << "\t  " << name << "\t " << date << "\t " << bb_date << "\t\t " << perfomance << "\t " << price << endl;
		};


		void treatment_data(char * key) {

			if (strcmp(perfomance, key) == 0) {

				cout << name;
			}


		};

};

product ** create_data(int size);
void enter_data(int size, product ** products);
void show_data(int size, product ** products);
void treat_data(int size, product **  products);
void exit(int size, product ** products);


int main() {

	int answer, size;

	cout << "Enter size of struct >> ";
	cin >> size;
	product ** products = create_data(size);

	while(1) {

		system("cls");
		cout <<"1.Enter data"<<endl;
		cout <<"2.Out data"<<endl;
		cout <<"3.Treatment data" << endl;
		cout <<"4.Exit" << endl;
		cout <<"Enter answer >> ";
		cin >> answer;


		switch(answer) {

			case 1:

				enter_data(size, products);
				break;

			case 2:

				show_data(size, products);
				break;

			case 3:

				treat_data(size, products);
				break;

			case 4:
				
				exit(size, products);
				return 0;
				break;


		}
	}
}

product ** create_data(int size) {
	
	
	product ** products = new product*[size];
	
	for(int i = 0; i < size; i ++){
		
		products[i] = new product();
	}

	return products;
}

void enter_data(int size, product ** products) {
	
	for(int i = 0; i < size; i++) {
		
		system("cls");
		products[i]->fill_data();
	}
	
}

void show_data(int size, product ** products) {
	
	system("cls");
	cout << "Number\t Name\t Date\t BB_Date\t Perf\t Price"<< endl;
	
	for(int i = 0; i < size; i++) {
		
		products[i]->read_data();
	}
	
	getch();
}

void treat_data(int size, product **  products) {
	
	system("cls");
	char key[10];
	cout << "Enter perfomance >> ";
	cin >> key;
	cout << "Name is: ";
		
	for(int i = 0; i < size; i++) {
		
		products[i]->treatment_data(key);
	}
	
	getch();
}

void exit(int size, product ** products) {	
	
	for(int i = 0; i < size; i++) {
		
		delete[] products[i];
	}
	
	delete[] products;
}