#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void dispStatus(int ac);
void getInput(int &a, int &b, int &c, int &d);
void dispOutput(int ac);
double calcAverage(int s, int ac);

int main(){
    char state_name[50]; 
    int total_cases, new_cases, total_death, total_recovered, active_cases, i=1; 
    int choice;
    do{
        cout << "<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>>" << endl;
        cout << "State Name         : ";
        cin >> state_name[50];
        void getInput(int &a, int &b, int &c, int &d);
        cout << "<<<<<<<<<<<<< SUMMMARY >>>>>>>>>>>" << endl;
       void dispOutput(int ac);
    }while(toupper(choice == 'n'));

//function named dispSatus
void dispStatus(int ac){
    if(ac>40)
        cout << "red";
    else if(ac>=21 && ac<=40)
        cout << "orange";
    else if(ac>=1 && ac<=20)
        cout << "yellow";
    else 
        cout << "green";        
}

//function named getInput
void getInput(int &a, int &b, int &c, int &d){
    cout << "Total cases        : ";
    cin >> a >> endl;
    cout << "New cases          : ";
    cin >> b >> endl;
    cout << "Total death        : ";
    cin >> c >> endl;
    cout << "Total recovered    : ";
    cin >> d >> endl;
}

//function named dispOutput
void dispOutput(int ac){
    int nActive_cases = total_cases + new_cases - total_death - total_recovered;
    cout << "Active cases       : " << nActive_cases << endl;
    cout << "Status             : ";
    cin >> dispStatus(active_cases) >> endl;
}

//function named caclAverage
double calcAverage(int s, int ac){
    double average;
    average=ac/s;
    return average;
}
}
