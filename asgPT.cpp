#include <iostream>
#include <string>
#include <iomanip>
double calc(double, int, double, int);
using namespace std;

int main() {
    int model, variant, region, dpayment, period;
    double price = 54600, rate;
    string paint;
    char choice;
    do{
        cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
    cin >> model;
    cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
    cin >> variant;
    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
    cin >> region;
    cout << "\n";
    cout << "Car Info" << "\n"; 
    
    //model 
    if(model==1)
        cout << "Model: X50" << "\n";
    else if(model==2)
        cout << "Model: Exora" << "\n";
    else
        cout << "Model: Persona" << "\n";
        
    //variant
    if(variant==1)
        cout << "Variant: 1.6L Standard CVT" << "\n";
    else
        cout << "Variant: 1.6L Premium CVT" << "\n";
        
    //region
    if(region==1)
        cout << "Region: Peninsular Malaysia" << "\n";
    else
        cout << "Region: East Malaysia" << "\n";
        
    //paint type
    cout << "Paint: Metallic" << "\n";
    
    //price
    cout << "Price (MYR): 54600" << "\n";
    
    cout << "\n";
    cout << "Down Payment (MYR): ";
    cin >> dpayment;
    cout << "Interest Rate (%): ";
    cin >> rate;
    cout << "Repayment period (in years): ";
    cin >> period;
    cout << "\n";
    double monthlyinstallment = calc(price, dpayment, rate, period);
    cout << "MONTHLY INSTALLMENT (MYR): " << fixed << setprecision(2) << monthlyinstallment << "\n";

    cout << "Do you want to enter other data? [Y @ N]: ";
    cin >> choice;
    cout << "\n";
    cout << "Thank you :)" << "\n";
    }while(tolower(choice =='y'));
    return 0;
    
}

//montly installment
    double calc(double price, int dpayment, double rate, int period){ 
        double loan = price-dpayment;
        double total_rate = (rate/100)*loan*period;
        double monthlyinstallment = (loan+total_rate)/(period*12);
        return monthlyinstallment;
    }
