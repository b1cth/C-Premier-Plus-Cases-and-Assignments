#include "functions.h";
void ass4() {
	double CurrentMoney_Daphne=100, CurrentMoney_Cleo=100;
	double Intrest_Daphne = 0, Intrest_Cleo = 0;
	int i = 0;
	while (++i) {
		Intrest_Daphne += CurrentMoney_Daphne * 0.1;
		Intrest_Cleo += CurrentMoney_Cleo * 0.05;
		CurrentMoney_Cleo += Intrest_Cleo;
		if (Intrest_Cleo > Intrest_Daphne) {
			cout <<"At the #"<<i<<" year, "
				 << "Cleo's investment value exceeds Daphne's investment value" << endl;
			cout << "Daphne's investment value: " << Intrest_Daphne << endl;
			cout << "Cleo's investment value: " << Intrest_Cleo << endl;
			break;
		}
	}
	

}