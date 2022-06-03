#include <iostream>
using namespace std;

int main() {
	double totalmass = 0;
	double mass = 0;

	cout << " Enter mass of your luggage" << endl;
	cin >> mass;

	while (mass != 0) {


		totalmass += mass;
		cout << " Enter mass of your  next item" << endl;
		cin >> mass;

	}
	if (totalmass <= 10000) {
		cout << " The total mass of your luggage is " << totalmass << "  Your luggage is allowed";

	}
	else {
		cout << " The total mass of your luggage is " << totalmass << "  Your luggage is not allowed";


	}


	return 0;




}