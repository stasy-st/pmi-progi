#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<vector<int>> a(3, vector<int>(3, 0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << a[i][j];
        }
        cout << endl;
    }
}