#include <iostream>
#include <string>
using namespace std;
const int m = 23;
bool FindWord(char matrik[m][m], string kata, int baris, int kolom){
    for (char& c : kata){
        if (c >= 'A' && c <= 'Z'){
            c = c - 'A' + 'a';
        }
    }
    for (int i = 0; i < baris; i++){
        for (int j = 0; j <= kolom-kata.length(); j++){
            string barisStr(matrik[i] + j, matrik[i] + j + kata.length());
        

int main()
{
    cout << "Kelompok 6 Petruk";
    return 0;
}
