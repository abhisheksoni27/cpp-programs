#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

struct Squared_num{
    double num;
    double square;
};

int main()
{
    vector<Squared_num> numbers;

    for(int i = 0; i<100; i++){
        Squared_num snum;
        snum.num = i+1;
        snum.square = (i+1) * (i+1);
        numbers.push_back(snum);
    }

    vector<Squared_num>::size_type size = numbers.size();

    for(int j = 0; j<size; j++){
        cout << numbers[j].num << "\t" << numbers[j].square << endl;
    }
}