#include <iostream>
using namespace std;

// Function extendida de eclides
int gcdExtended(int a, int b, int* x, int* y)
{
    if (a == 0) { *x = 0, *y = 1; return b; }

    int x1, y1; int gcd = gcdExtended(b % a, a, &x1, &y1);
 
    *x = y1 - (b / a) * x1; 
    *y = x1;
 
    return gcd;
}


// Calcular inverso multiplicativo
void modInverse(int a, int n)
{
    int x, y;
    int g = gcdExtended(a, n, &x, &y);
    
    if (g != 1)
        cout << "El inverso multiplicativo no existe";
    else
    {
        int res = (x % n + n) % n;
        cout << "El inverso multiplicativo es: " << res;
    }
}
 

int main()
{
    int a, n;
    cout<<"ingresa a: "; cin>>a;
    cout<<"ingresa n: "; cin>>n;
   
    modInverse(a, n);
    return 0;
}