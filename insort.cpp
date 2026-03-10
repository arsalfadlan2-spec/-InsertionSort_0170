#include <iostream>
using namespace std;

int arr[20];
int n;

int main() {
    return 0;
}
void input (){
    while (true){
        cout << "Masukkan jumlah data Pada Array : ";
        cin >> n;
        if (n <= 20) break;
        else cout << "\nArray Tidak Boleh Lebih Dari 20\n";
    }
    // ... (input data loop)
}