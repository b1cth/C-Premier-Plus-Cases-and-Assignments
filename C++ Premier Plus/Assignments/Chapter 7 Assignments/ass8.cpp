#include "functions.h";
const char* season[] = { "Spring","Summer","Fall","Winter" };
//main
//int main() {
//    /*double expenses[4];
//    fillExpenses(expenses);
//    showExpenses(expenses);*/
//    expense_s exp{
//          {0,0,0,0}
//    };
//    fillExpenses(&exp);
//    showExpenses(exp);
//}

void fillExpenses(double* pt) {

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the expense of " << season[i] << " : " << endl;
        cin >> pt[i];
        cin.get();
    }
}



void showExpenses(const double* pt) {
    for (int i = 0; i < 4; i++)
    {
        cout << "The expense of " << season[i] << " is " << pt[i] << "$.\n";
    }
}



//struct



void fillExpenses(expense_s* exp) {
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the expense of " << season[i] << " : " << endl;
        cin >> exp->expense[i];
        cin.get();
    }
}



void showExpenses(const expense_s exp) {
    for (int i = 0; i < 4; i++)
    {
        cout << "The expense of " << season[i] << " is " << exp.expense[i] << "$.\n";
    }
}