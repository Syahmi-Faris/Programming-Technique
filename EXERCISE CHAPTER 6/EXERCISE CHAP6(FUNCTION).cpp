#include <iostream>
#include <cstring>
using namespace std;

void dispStatus(int);
void getInput(int*, int*, int*, int*);
void dispOutput(int);
int calcAverage(int, int);

int main(){
    int ActiveCases, TotalCases, NewCases, TotalDeath, TotalRecovered, NumState=0, SumActiveCases=0, TotalActiveCases=0;
    string StateName, HighestState; 
    char choice;
    do{
        cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>" << endl;
        cout << "State Name     : ";
        getline(cin, StateName);
        getInput(&TotalCases, &NewCases, &TotalDeath, &TotalRecovered);
        ActiveCases = TotalCases + NewCases - TotalDeath - TotalRecovered;
        cout << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>>>" << endl;
        dispOutput(ActiveCases);
        cout << "Press <ENTER> to continue...";
        cin >> choice;
        cin.ignore();
        cout << endl;
        if(ActiveCases>SumActiveCases){
            SumActiveCases=ActiveCases;
            HighestState = StateName;
        }
        TotalActiveCases+=ActiveCases;
        NumState++;
    }while(choice!='N' && choice!='n');

    cout << "<<<<<<<<< ACTIVE CASES >>>>>>>>>" << endl;
    cout << "Total  : " << TotalActiveCases << endl;
    cout << "Highest: " << SumActiveCases << " (" << HighestState << ")" << endl;
    cout << "Average for " << NumState << " states: " << calcAverage(NumState, TotalCases) << endl;
}

void dispStatus(int ac){
    if(ac>40)
        cout << "Red zone" << endl;
    else if(ac>=21 && ac<=40)
        cout << "Orange zone" << endl;
    else if(ac>=1 && ac<=20)
        cout << "Yellow zone" << endl;
    else
        cout << "Green zone" << endl;
}

void getInput(int* tc, int* nc, int* td, int* tr){
    cout << "Total cases    : ";
    cin >> *tc;
    cout << "New cases      : ";
    cin >> *nc;
    cout << "Total death    : ";
    cin >> *td;
    cout << "Total recovered: ";
    cin >> *tr;
    cout << endl;
}

void dispOutput(int ac){
    cout << "Active cases   : " << ac << endl;
    cout << "Status         : ";
    dispStatus(ac);
    cout << endl;
}

int calcAverage(int ns, int tac){
    int AverageActiveCases;
    AverageActiveCases = tac / ns;
    return AverageActiveCases;
    cout << endl;
}