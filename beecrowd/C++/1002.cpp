#include <iostream>
 
using namespace std;
 
int main() {
 
    double raio, area;
    cin >> raio;

    area = 3.14159 * (raio * raio);
    printf("A=%.4f\n", area);

    return 0;
}