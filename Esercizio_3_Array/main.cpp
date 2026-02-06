#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector numbers = {-5, -10, 20, 25, -30, 40, 0, -1, 60, 7};
    auto positive = find_if(numbers.begin(), numbers.end(), [](int x) { return x >= 0; });
    if (positive != numbers.end())
    {
        cout << "First non-negative number: " << *positive << endl;
    }
    else
    {
        cout << "No non-negative numbers found." << endl;
    }
    auto value = find_if(numbers.begin(), numbers.end(), [](int x) { return x > 30; });
    if (value != numbers.end())
    {
        cout << "First number greater than 30: " << *value << endl;
    }
    else
    {
        cout << "No numbers greater than 30 found." << endl;
    }
    auto remove = remove_if(numbers.begin(), numbers.end(), [](int x) { return x < 0; });
    numbers.erase(remove, numbers.end());
    sort(numbers.begin(), numbers.end());
    cout << "Final array: ";
    for (int number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;
    return 0;
}