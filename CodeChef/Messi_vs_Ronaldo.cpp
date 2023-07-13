#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messi = 2 * a + b;
    int ronaldo = 2 * x + y;
    if (messi > ronaldo)
        cout << "Messi\n";
    else if (messi < ronaldo)
        cout << "Ronaldo\n";
    else
        cout << "Equal\n";
    return 0;
}
