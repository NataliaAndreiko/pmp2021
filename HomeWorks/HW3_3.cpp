#include <iostream>
using namespace std;

int fact(int n,int l);

int main()
{
    int n, sum = 0, temp_sum=1, count = 0, k = 1;
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "sum= " << sum << endl;
        sum += fact(i*i,i);
    }
   
    cout << "sum=" << sum;
    return 0;
}

int fact(int n,int l) {
    int fact_sum = 1;
    for (int i = l; i <= n; i++) {
        fact_sum *= i;
    }
    return fact_sum;
}
