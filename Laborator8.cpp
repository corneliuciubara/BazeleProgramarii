#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;

    // Citim numărul de elemente al vectorului
    cout << "Introduceți numărul de elemente ale vectorului: ";
    cin >> n;

    vector<int> A(n);

    // Citim elementele vectorului
    cout << "Introduceți " << n << " numere întregi pentru vectorul A:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    // Citim poziția k
    cout << "Introduceți poziția k: ";
    cin >> k;

    // Verificăm dacă k este în intervalul valid
    if (k < 0 || k >= n) {
        cout << "Poziția k nu este validă. Programul se va încheia." << endl;
        return 1;
    }

    // Sortăm vectorul A în ordine descrescătoare până la poziția k
    sort(A.begin(), A.begin() + k, greater<int>());

    // Sortăm restul vectorului A în ordine crescătoare
    sort(A.begin() + k, A.end());

    // Afișăm vectorul rezultat
    cout << "Vectorul obținut:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
