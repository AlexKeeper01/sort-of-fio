#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

const int N = 100;
string arr[N];

bool isupper(char k) {
  if (k >= 'A' && k <= 'Z') {
    return true;
  } else {
    return false;
  }
}

void inp() {
    for (int i = 0; i < N;) {
        string a;
        int p = 0;
        int h = 0;
        getline(cin, a);
        if (a == "") {
            break;
        }
        for (int q = 0; q < a.length(); q++) {
          if (isupper(a[q])) {
              p++;
            }

          if (a[q] == ' ') {
              h++;
            }
          a[q] = (char)tolower(a[q]);   
        }
        if (p == 3 && h == 2) {
          arr[i] = a;
          i++;
        }
        
        
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
        string u = arr[i];
        u[0] = (char)toupper(u[0]);   
        for (int q = 0; q < u.length(); q++) {
          if (u[q] == ' ') {
            u[q + 1] = (char)toupper(u[q + 1]);   
          }
        }
        cout << u << endl;
    }
}



int main() {

inp();
sort();
out();
    
}
