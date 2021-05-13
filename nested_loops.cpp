#include <iostream>
using namespace std;

int main()
{
    int outer_val{1};
    int inner_val{1};

    for (outer_val; outer_val <= 10; ++outer_val)
        for (inner_val; inner_val <= 10; ++inner_val)
            cout << outer_val << ", " << inner_val << endl;
}
