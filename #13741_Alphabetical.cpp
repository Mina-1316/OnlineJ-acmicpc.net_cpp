#include <iostream>
#include <string>
#define asciichar_a 97

using namespace std;

int main(){
    string str;

    cin>>str;

    int returncount = 0, alphabetcount = 0, i=0;
    while(1){
        (str[i]-asciichar_a==alphabetcount?alphabetcount++:returncount++);
        if(i==str.length()||alphabetcount>=26){
            break;
        }
        i++;
    }
    cout<<returncount;
    return 0;
}