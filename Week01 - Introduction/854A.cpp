#include <iostream>

using namespace std;

int main()
{
    int n; //sum of numerator and denominator
    int nom; //numerator
    int den; //denominator

    cin >> n;

    if(n%2 == 0) {
        nom = n/2 - 1;
        den = n/2 + 1;
        for(int i=2; i<=nom; i++) { //adding the denominator and numerator to keep both relatively prime
            if(nom%i == 0 && den%i == 0) {
                nom--;
                den++;
            }
        }
    } else {
        nom = n/2;
        den = n/2 + 1;
    }

    cout << nom << " " << den;

    return 0;
}
