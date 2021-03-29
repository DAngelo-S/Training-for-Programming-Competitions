#include<bits/stdc++.h>

using namespace std;

int main() {
    //odd is male
    //otherwise female
    
    int alpha[26], resp = 0;

    for(int i=0; i<26; i++) alpha[i] = 0;
    
    string nick;
    
    cin >> nick;
    
    for(int i=0; i<nick.size(); i++) {
        alpha[nick[i]-'a'] = 1;
    }
    
    for(int i=0; i<26; i++) resp += alpha[i];
    
    if (resp % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
    
    return 0;
}
