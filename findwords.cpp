#include <iostream>
#include <string>
using namespace std;
const int m=23;
bool FindWord(char matrik[m][m], string kata, int baris, int kolom){
    for (char& c : kata){
        if (c >= 'A' && c <= 'Z'){
            c=c-'A'+'a';
        }
    }
    for (int i=0; i<baris; i++){
        for (int j=0; j <= kolom-kata.length(); j++){
            string barisStr(matrik[i]+j, matrik[i]+j+kata.length());
            for (char &c : barisStr){
                if (c >= 'A' && c <= 'Z'){
                    c=c-'A'+'a';
                }
            }
            if (barisStr == kata)
                return true;
        }
    }
    for (int i=0; i <= baris-kata.length(); i++){
        for (int j=0; j<kolom; j++){
            string kolomStr;
            for (int k=i; k<i+kata.length(); k++){
                kolomStr.push_back(matrik[k][j]);
            }
    for (char& c : kolomStr){
                if (c >= 'A' && c <= 'Z'){
                    c=c-'A'+'a';
                }
            }
            if (kolomStr==kata) return true;
        }
    }
    for (int i=0; i <= baris-kata.length(); i++){
        for (int j=0; j <= kolom-kata.length(); j++){
            string diagStr;
            for (int k=0; k<kata.length(); k++){
                diagStr.push_back(matrik[i+k][j+k]);
            
int main(){
    int caribrp;
    cin>>caribrp;
    string katakey[caribrp];
    for (int i=0; i<caribrp; i++){
        cin>>katakey[i];
    }
    char matrik[m][m]={
    {'A','A','F','L','K','H','P','F','S','S','U','F','I','C','I','C','L','E','S','G','N','N','H'},
    {'S','F','V','R','E','O','M','R','W','L','R','T','T','S','X','O','Q','Q','N','A','O','A','O'},
    {'Q','E','I','A','I','F','X','A','E','I','R','F','V','F','Y','S','X','I','M','I','N','J','I'},
    {'W','S','T','R','L','G','O','C','A','P','B','I','A','F','I','W','I','W','T','U','A','C','M'},
    {'F','E','Y','A','E','A','I','S','T','P','C','R','L','U','J','K','O','A','K','C','E','R','S'},
    {'R','V','D','A','K','P','N','D','E','E','H','D','E','M','S','N','C','K','K','F','O','A','H'},
    {'M','R','N','E','D','S','L','C','R','R','I','W','N','R','S','A','A','F','I','T','M','M','I'},
    {'Y','A','A','E','C','I','E','A','H','Y','M','O','T','A','V','H','R','S','S','T','I','S','B'},
    {'R','J','S','E','W','E','L','C','C','E','N','N','I','E','T','O','H','W','S','G','L','S','E'},
    {'A','T','A','N','Y','Y','M','O','I','E','E','S','N','E','S','I','O','I','R','E','L','T','R'},
    {'U','T','E','N','E','W','E','B','H','M','Y','B','E','T','N','N','R','A','I','E','B','E','N'},
    {'R','C','L','K','U','T','E','A','E','Q','J','L','S','G','S','H','T','G','D','S','K','O','A'},
    {'B','H','O','I','C','A','T','N','R','R','S','D','D','E','C','E','H','O','O','L','G','I','T'},
    {'E','N','S','L','U','A','R','I','R','S','E','T','A','L','O','C','O','H','C','T','O','H','E'},
    {'F','Z','F','U','D','Q','J','Y','M','A','D','O','Y','I','W','Y','G','L','O','V','E','S','U'},
    {'T','E','K','A','L','F','W','O','N','S','N','A','E','B','M','I','E','J','T','Z','N','T','G'},
    {'E','S','W','P','O','S','J','X','E','U','T','U','Y','O','Z','U','W','A','K','E','Z','H','M'},
    {'K','Z','U','H','B','P','E','Z','E','E','R','F','L','M','S','N','O','W','B','A','L','L','H'},

}
