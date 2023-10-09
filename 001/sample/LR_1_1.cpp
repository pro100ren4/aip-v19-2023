#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <limits>

using namespace std;

struct product {

	int number;
	char name[10];
	int date;
	int bb_date;
	char perfomance[10];
	int price;
};


product * create_data(int size);
void enter_data(int size, product  * x);
void out_data(int size, product * x);
void treatment_data(int size, product * x);
void exit(product * x);


int main() {

	int answer, size;
	product * x;
	
cout << "Enter size of struct >> ";
	cin >> size;
	x = create_data(size);
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
				
				enter_data(size, x);
				break;

			case 2:
				
				out_data(size, x);
				break;

			case 3:
				
				treatment_data(size, x);
				break;
				
			case 4:
				
				exit(x);
				return 0;
				break;
				
				
		}
	}
}

product * create_data(int size){

	product * x  =  new  product[size];
	
	return x;
	
}

void enter_data(int size, product * x){
	
	system("cls");
	
	for(int i = 0; i < size; i++){
		
		system("cls");
		cout << "Enter number >> ";
		cin >> x[i].number;
		
		cout << "Enter name >> ";
		cin >> x[i].name;
		
		cout << "Enter date of manufacture >> ";
		cin >> x[i].date;
		
		cout << "Enter best before date >> ";
		cin >> x[i].bb_date;
		
		cout << "Enter perfomance >> ";
		cin >> x[i].perfomance;
		
		cout << "Enter price >> ";
		cin >> x[i].price;
		
	}
	
}

void out_data(int size, product * x){
	system("cls")	;
	cout << "Number\t Name\t Date\t BB_Date\t Perf\t Price"<< endl;
	for(int i = 0; i < size; i++){
					
		cout << x[i].number << "\t  " << x[i].name << "\t " << x[i].date << "\t " << x[i].bb_date << "\t\t " << x[i].perfomance << "\t " << x[i].price << endl;
	
	}
	getch();
}

void treatment_data(int size, product * x){
	
	system("cls");
	char key[10];
	cout << "Enter perfomance >> ";
	cin >> key;
	cout << endl <<"Name of product is: ";
	
	for(int i = 0; i < size; i ++){
		
		if (strcmp(x[i].perfomance, key) == 0){
			
			cout << x[i].name;
		}
	}
	
	getch();
}

void exit(product * x){
	
	delete[]x;
}