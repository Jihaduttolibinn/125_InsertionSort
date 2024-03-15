
#include <iostream>
using namespace std;

int arr[11];
int n;

void input() {
	while (true) {
		cout << " Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}


void insertionsort() {
    int i, temp, j;
    

    for (i = 1; i <= - 1; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
         
    }


}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element attay yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;

	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{

	input();
	insertionsort();
	display();
}
