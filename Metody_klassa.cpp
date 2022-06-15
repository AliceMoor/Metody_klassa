#include <iostream>
#include <string>
using namespace std;

//metody klassa=fynkcii klassa


class Human 
{
public: 
	string name; 
	int age;
	double weight;

	void Print() //metod klassa-funkcija
	{
		cout << "Imja - " <<name<< "\nVes - " <<weight<< "\nVozrast - " << age << endl;
	}
};





int main()
{
	setlocale(LC_ALL, "rus");
	Human man; //ekzempljar klassa Human//man - ob'ekt
	man.name = "Ivan";
	man.age = 33;
	man.weight = 93;

	man.Print(); // funkcija vyvoda na ekran 

	Human  man2; //net dannyx y ob'ekta
	man2.Print();

	cout << "################" << endl;
	

	return 0;
}