#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3, res1, res2, res3, menor;
    cin >> a1 >> a2 >> a3;

    res1 = a2 * 2 + a3 * 4;
    res2 = a1 * 2 + a3 * 2;
    res3 = a1 * 4 + a2 * 2;

    menor = min(min(res1, res2), res3);

    printf("%d\n", menor);

    return 0;
}