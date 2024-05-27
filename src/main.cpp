#include<iostream>
#include<stdio.h>
#include"lexicalAnalysis.cpp"
int main() {

    tokens* token = new tokens();
    token->getTokens();
    delete token;
    return 0;
}