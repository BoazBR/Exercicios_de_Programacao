#include <bits/stdc++.h>
using namespace std;

int main(){
    string p1, p2, p3;

    cin >> p1 >> p2 >> p3;

    if(p1 == "vertebrado"){
        if(p2 == "ave"){
            if(p3 == "carnivoro"){
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if(p3 == "onivoro"){
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else{
        if(p2 == "inseto"){
            if(p3 == "hematofago"){
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if(p3 == "hematofago"){
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}