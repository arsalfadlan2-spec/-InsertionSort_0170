#include <iostream>
using namespace std;

int arr[20];
int n;

void input (){
    while (true){
        cout << "Masukkan jumlah data Pada Array : ";
        cin >> n;

        if  (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh Lebih Dari 20\n";
        }
    }
    cout << endl;
    cout << "=============================================";
    cout << "=============Masukkan element array==========";
    cout << "=============================================" << endl;

    for (int i = 0; i < n; i++ ){
        cout << "Data ke-" << (i+1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort()
{
    int temp;
    int j;

    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr [j] > temp)
        {
            arr[j +1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
    }
}

void display(){
    cout << endl;
    cout << "\n====================";
    cout << "\nElement Array" << endl;
    cout << "\n====================" << endl;

    for(int j = 0; j < n; j++){
        cout << arr[j]<< endl;
    }
    cout << endl;
}

int main()
{
    input();
    insertionsort();
    display();
    system("pause");
}