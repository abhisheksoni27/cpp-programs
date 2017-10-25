#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<double> numbers;

    for (int i = 0; i < 1000; i++)
    {
        numbers.push_back(i);
    }

    double sum;
    for (vector<double>::size_type vec_sz = 0; vec_sz < numbers.size(); vec_sz++)
    {
        sum += numbers[vec_sz];
    }

    cout << "The average is: " << (sum / numbers.size()) << endl;
}