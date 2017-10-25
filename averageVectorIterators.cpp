#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<long> numbers;

    for (int i = 0; i < 1000; i++)
    {
        numbers.push_back(i);
    }

    long sum;

    for (vector<long>::const_iterator iter = numbers.begin(); iter != numbers.end(); ++iter)
    {
        sum += (*iter);
    }

    double average = sum / numbers.size();

    cout << "The average is: ";

    cout << average << endl;
}