#include <iostream>
using namespace std  ;
int main() {
    float dollar = 0 ;
    int all = 0 ;

    cout << "錢"  ;
    cin >> dollar ;

    while(dollar > 0){
          if (dollar >= 1000) {
            cout <<"1000元\n";
            dollar=dollar-1000;   
        } else if (dollar >= 100) {
            cout <<"100元\n";
            dollar=dollar-100;
        } else if (dollar >= 10) {
            cout <<"10元\n"  ;
            dollar=dollar-10;
        } else if (dollar >= 1) {
            cout <<"1元\n"  ;
            dollar=dollar-1;
        }
        all=all+1 ;
    }
    cout << "共要" << all << "個錢";
}
