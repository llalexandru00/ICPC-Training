#include <iostream>
#include <vector>

using namespace std;



int main() {
    vector<int> V = {100, 20, 10, 5, 1};
    int n, nr=0;
    cin>>n;
    while (n)
    {
        for (auto i : V)
        {
            nr += n/i;
            n %= i;
        }
    }
    cout<<nr;
    return 0;
}