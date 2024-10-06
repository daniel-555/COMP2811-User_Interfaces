#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


// Const reference better than by value as data cannot be edited
//  and the program is more space efficient as a copy of the data
//  doesn't need to be created

float mean_value(const vector<float>& data)
{
    float mean;

    float total = 0;
    for (int i = 0; i < data.size(); i++)
    {
        total += data[i];
    }

    mean = total / data.size();

    return mean;
}

void read_data(istream& input, vector<float>& data)
{
    float value;
    while (input >> value)
    {
        data.push_back(value);
    }
}

int main (int argc, char* argv[])
{
    if (argc != 2)
    {
        cerr << "Usage: ./mean <filename>" << endl;
        return 1;
    }

    ifstream infile(argv[1]);
    if (not infile)
    {
        cerr << "Error: cannot access " << argv[1] << endl;
        return 2;
    }

    vector<float> data;

    read_data(infile, data);

    cout << data.size() << " values read from file" << endl;
    cout << "Mean value = " << mean_value(data) << endl;



    return 0;
}