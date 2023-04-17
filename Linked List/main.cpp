#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list;

    int choice, value, after;

    do {
    	cout << endl;
    	cout << "Menu :" << endl;
        cout << "1. Insert to Head" << endl;
        cout << "2. Insert to Tail" << endl;
        cout << "3. Insert after a value" << endl;
        cout << "4. Delete from Head" << endl;
        cout << "5. Delete from Tail" << endl;
        cout << "6. Delete by value" << endl;
        cout << "7. Print all" << endl;
        cout << "8. Exit" << endl;
        cout << "Pilih : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Value: ";
                cin >> value;
                list.insertToHead(value);
                break;
            case 2:
                cout << "Masukkan Value : ";
                cin >> value;
                list.insertToTail(value);
                break;
            case 3:
                cout << "Masukkan Value : ";
                cin >> value;
                cout << "Masukkan Value Setelah : ";
                cin >> after;
                list.insertAfter(after, value);
                break;
            case 4:
                list.deleteToHead();
                break;
            case 5:
                list.deleteToTail();
                break;
            case 6:
                cout << "Masukkan Value yang Ingin Dihapus : ";
                cin >> value;
                list.deleteByValue(value);
                break;
            case 7:
                list.printAll();
                break;
            case 8:
                break;
            default:
                cout << "Silahkan Pilih Angka dari Menu" << endl;
        }
    } while (choice != 8);

    return 0;
}