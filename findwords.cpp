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
    for (char &c : barisStr)
            {
                if (c >= 'A' && c <= 'Z')
                {
                    c = c - 'A' + 'a';
                }
            }
            if (barisStr == kata)
                return true;
        }
    }
    for (int i = 0; i <= baris - kata.length(); i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            string kolomStr;
            for (int k = i; k < i + kata.length(); k++)
            {
                kolomStr.push_back(matrik[k][j]);
            }
        

int main()
{
    int caribrp;
    cin >> caribrp;
    string katakey[caribrp];
    for (int i = 0; i < caribrp; i++)
    {
        cin >> katakey[i];
    }
    char matrik[m][m] = {
        {'A', 'A', 'F', 'L', 'K', 'H', 'P', 'F', 'S', 'S', 'U', 'F', 'I', 'C', 'I', 'C', 'L', 'E', 'S', 'G', 'N', 'N', 'H'},
        {'S', 'F', 'V', 'R', 'E', 'O', 'M', 'R', 'W', 'L', 'R', 'T', 'T', 'S', 'X', 'O', 'Q', 'Q', 'N', 'A', 'O', 'A', 'O'},
        {'Q', 'E', 'I', 'A', 'I', 'F', 'X', 'A', 'E', 'I', 'R', 'F', 'V', 'F', 'Y', 'S', 'X', 'I', 'M', 'I', 'N', 'J', 'I'},
        {'W', 'S', 'T', 'R', 'L', 'G', 'O', 'C', 'A', 'P', 'B', 'I', 'A', 'F', 'I', 'W', 'I', 'W', 'T', 'U', 'A', 'C', 'M'},
        {'F', 'E', 'Y', 'A', 'E', 'A', 'I', 'S', 'T', 'P', 'C', 'R', 'L', 'U', 'J', 'K', 'O', 'A', 'K', 'C', 'E', 'R', 'S'},
        {'R', 'V', 'D', 'A', 'K', 'P', 'N', 'D', 'E', 'E', 'H', 'D', 'E', 'M', 'S', 'N', 'C', 'K', 'K', 'F', 'O', 'A', 'H'},
        {'M', 'R', 'N', 'E', 'D', 'S', 'L', 'C', 'R', 'R', 'I', 'W', 'N', 'R', 'S', 'A', 'A', 'F', 'I', 'T', 'M', 'M', 'I'},
}
