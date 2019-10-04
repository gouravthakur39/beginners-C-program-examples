
#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n){
    if(n < 2){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

int coeficienteBinomial(int n, int r){
    if(r == 1){
        return n;
    }else{
        if(n == r){
            return 1;
        }else{
            return factorial(n) / (factorial(r) * factorial(n - r));
        }
    }
}


int main() {
    int n = 0;
        cout << "Ingrese el numero de filas ";
        cin >> n;

    cout << "\n\t\tTriangulo de Pascal de " << n << " filas" << endl;
    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n-i; j++){
            cout << "";
        }
        for(int k = 0; k <= i; k++){
            cout << coeficienteBinomial(i,k);
        }
        cout << endl;
    }


    return 0;
}
