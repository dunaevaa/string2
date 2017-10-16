#include<iostream>
using namespace std;
int main(int argc, char* argv[]) {
    string str1 = argv[1];
    char symbol = argv[2][0];
    for (int i=0; i < str1.length(); i++) {
        if (str1[i] == symbol)
        cout << i+1 << endl;
    }
}
