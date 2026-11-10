#include <iostream>
using namespace std;
const int CAPACITY = 10;
void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "   (size = " << size << ")" << endl;
}
int insertAt(int arr[], int size, int pos, int value) {
    if (size == CAPACITY) {              
        cout << "Array is full\n";
        return size;
    }
    if (pos < 0 || pos > size) {         
        cout << "Invalid position\n";
        return size;
    }
    for (int i = size; i > pos; i--)     
        arr[i] = arr[i - 1];
    arr[pos] = value;                    
    return size + 1;                     
}
int main() {
    int arr[CAPACITY] = {10, 20, 30, 40, 50};
    int size = 5;
    cout << "Original:              ";
    display(arr, size);
    size = insertAt(arr, size, 2, 25);       /
    cout << "Insert 25 at index 2:  ";
    display(arr, size);
    size = insertAt(arr, size, 0, 5);       
       cout << "Insert 5 at beginning: ";
    display(arr, size);
    size = insertAt(arr, size, size, 60);   
    cout << "Insert 60 at end:      ";
    display(arr, size);
    size = insertAt(arr, size, 20, 99);      
    return 0;
}
