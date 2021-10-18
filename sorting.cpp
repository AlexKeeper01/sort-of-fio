#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

const int N = 4;
string arr[N];

void inp() {
    for (int i = 0; i < N; i++) {
        string a;
        getline(cin, a);
        if (a == "") {
            break;
        }
        for (int q = 0; q < a.length(); q++) {
            a[q] = (char)tolower(a[q]);
        }
        arr[i] = a;
        
    }
}

void sort() {
    for (int i = 0; i < N - 1; i++) {
        for (int j = (N - 1); j > i; j--) {
            const char *a = arr[j].c_str();
            const char *b = arr[j - 1].c_str();
            if (strcmp(a, b) > 0) {
                string temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void out() {
    int p = 0;
    for (int i = N; i >= 0; i--) {
        if (arr[i] == "") {
            p++;
        } else {
            break;
        }
    }
    for (int i = N - p; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}



int main() {

inp();
sort();
out();
    
}
