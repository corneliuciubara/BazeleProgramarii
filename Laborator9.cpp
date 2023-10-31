#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    // Citim numărul de elemente al vectorului
    cout << "Introduceți numărul de elemente ale vectorului: ";
    cin >> n;
    
    vector<int> A(n);
    
    // Citim elementele vectorului
    cout << "Introduceți " << n << " numere naturale pentru vectorul A:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    int pozitie = -1; // Inițializăm cu -1 pentru a indica că nu s-a găsit niciun element egal cu 0
    
    // Căutăm ultimul element egal cu 0 în vector
    for (int i = n - 1; i >= 0; --i) {
        if (A[i] == 0) {
            pozitie = i;
            break; // Ieșim din buclă după ce am găsit prima apariție a lui 0 în sens invers
        }
    }
    
    if (pozitie != -1) {
        cout << "Ultimul element egal cu 0 se află la poziția: " << pozitie << endl;
    } else {
        cout << "Nu s-a găsit niciun element egal cu 0 în vector." << endl;
    }
    
    return 0;
}
