#include<stdio.h>

int main() {
    //odd is male
    //otherwise female
    
    int alpha[26], resp = 0;

    for(int i=0; i<26; i++) alpha[i] = 0;
    
    char c;
    
    while(scanf("%c", &c) && c != '\n') {
        alpha[c-'a'] = 1;
    }
    
    for(int i=0; i<26; i++) resp += alpha[i];
    
    if (resp % 2 == 0)
        puts("CHAT WITH HER!");
    else
        puts("IGNORE HIM!");
    
    return 0;
}
