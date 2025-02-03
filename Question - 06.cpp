#include<bits/stdc++.h>

using namespace std;

bool Helper(int n,int &temp) {
    if (n==0)
        return true;

    bool result=Helper(n/ 10, temp)&&(n%10==temp % 10);
    temp /= 10;
    return result;
}


bool isPalindrome(int n) {
    if (n < 0)
        return false;
    int temp = n;
    return Helper(n, temp);
}

int main() {
    int a;
    cout << "Enter a positive integer: ";
    cin >> a;

    if (a < 0) {
        cout << "Enter a positive integer only." << endl;
        return 1;
    }

    //cout << "The sum of the digits of " << a << " is " << sumOfDigits(a) << "." << endl;

    cout << "Is "<<a<<" a palindrome? "<<(isPalindrome(a)?"true" : "false")<< endl;

    return 0;
}

