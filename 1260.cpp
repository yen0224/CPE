#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int ans = 0;
        int array_l;
        cin >> array_l;
        int array[array_l];
        for (int j = 0; j < array_l; j++)
        {
            cin >> array[j];
            for (int k = 0; k < j; k++)
            {
                if (array[j] >= array[k])
                {
                    ans++;
                }
            }
        }
        cout << ans;
    }

    return 0;
}
