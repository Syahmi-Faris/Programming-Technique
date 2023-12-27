#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void dispStatus(int);
void getInput(int* , int* , int* , int* );
void dispOutput(int) ;
int calcAverage(int , int);

int main(){
    char higheststate[10];
    char state_name[10]; 
    int total_cases=0, sum_cases=0, new_cases, total_death=0, total_recovered=0, active_cases, total_activecases=0, num_state=0; 
    char choice;
    do {
        cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>" << endl;
        cout << "State Name         : ";
        cin >> state_name;
        getInput(&total_cases, &new_cases, &total_death, &total_recovered);
        cout << endl;
        int nActive_cases = total_cases + new_cases - total_death - total_recovered;
        cout << "<<<<<<<<<<<<< SUMMMARY >>>>>>>>>>>" << endl;
        dispOutput(nActive_cases);
        cout << endl;
        cout << "Press <ENTER> to continue...";
        cin >> choice;
        if(active_cases>sum_cases){
            sum_cases=active_cases;
            strcpy(higheststate, state_name);
        }
        cout << endl;
        total_activecases+=active_cases;
        num_state++;
    } while(choice != 'n' && choice != 'N');

    cout << "<<<<<<<<< ACTIVE CASES >>>>>>>>>" << endl;
    cout << "Total  : " << total_activecases << endl;
    cout << "Highest: " << sum_cases << " (" << higheststate << ")" << endl;
    cout << "Average for " << num_state << " states: " << calcAverage(num_state, total_activecases);
}

//function named dispStatus
void dispStatus(int ac){
    if(ac>40)
        cout << "Red";
    else if(ac>=21 && ac<=40)
        cout << "Orange";
    else if(ac>=1 && ac<=20)
        cout << "Yellow";
    else 
        cout << "Green";        
}

//function named getInput
void getInput(int* a, int* b, int* c, int* d){
    cout << "Total cases        : ";
    cin >> *a;
    cout << "New cases          : ";
    cin >> *b;
    cout << "Total death        : ";
    cin >> *c;
    cout << "Total recovered    : ";
    cin >> *d;
}

//function named dispOutput
void dispOutput(int ac){
    cout << "Active cases       : " << ac << endl;
    cout << "Status             : ";
    dispStatus(ac);
    cout << endl;
}

//function named calcAverage
int calcAverage(int s, int totalac){
    int average;
    average=totalac/s;
    return average;
}
