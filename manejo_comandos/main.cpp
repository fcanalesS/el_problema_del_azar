#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "ARGC: " << argc << endl;


    for (int i=0; i<argc; i++)
    {
        cout << "ARGV: " << argv[i] << endl;

    }
    return 0;
}
