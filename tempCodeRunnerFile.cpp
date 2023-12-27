#include <iostream>
#include <cstring>
using namespace std;

void dispStatus(ac){
    String statofzone;
    if(ac>40)
        statofzone = red;
    else if(ac>=21 && ac<=40)
        statofzone = orange;
    else if(ac>=1 && ac<=20)
        statofzone = yellow;
    else 
        statofzone = green        
}