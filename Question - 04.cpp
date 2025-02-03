#include<bits/stdc++.h>
using namespace std;

const int SIZE=10;

void reverseA(int arr[],int s){
     for (int i = 0; i < s / 2; ++i) {
        swap(arr[i], arr[s-i- 1]);
    }

}

bool checkSorted(int arr[],int s){
    for (int i = 1; i < s; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void findMinMax(int arr[], int size, int &min, int &max){
     min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}

void displayA(int arr[],int s){
    for (int i=0;i<s;i++){
         cout << arr[i] << " ";
    }
    cout << endl;
    }

int main(){
 int arr[SIZE];
    cout << "Enter " << SIZE << " integer values: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    int choice;
    while (true) {

        cout << "1. Reverse Array\n";
        cout << "2. Check if Sorted\n";
        cout << "3. Find Max and Min\n";
        cout << "4. Display Original Array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            reverseA(arr, SIZE);
            cout << "Reversed Array: ";
            displayA(arr, SIZE);
        } else if (choice == 2) {
            if (checkSorted(arr, SIZE))
                cout << "The array is sorted in ascending order.\n";
            else
                cout << "The array is not sorted.\n";
        } else if (choice == 3) {
            int min, max;
            findMinMax(arr, SIZE, min, max);
            cout << "Maximum element: " << max << "\n";
            cout << "Minimum element: " << min << "\n";
        } else if (choice == 4) {
            cout << "Original Array: ";
            displayA(arr, SIZE);
        } else if (choice == 5) {
            cout << "Exiting program.\n";
            break;
        } else {
            cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;


}

