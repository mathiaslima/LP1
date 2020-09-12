#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int result;
    
    int sumAll = 0;

    for (int i = 1; i < argc; i++)
    {
       sumAll += atoi(argv[i]);
    }
    
    result = sumAll/(argc - 1);

    cout << result << endl;

    return 0;
}