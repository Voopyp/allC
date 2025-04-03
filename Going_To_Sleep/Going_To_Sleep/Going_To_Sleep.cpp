#include <iostream>
#include <csignal>

using namespace std;
void signalHandler(int signum)
{
    cout << "Interput aignal(" << signum << ")received. \n";

    //cleanup and close up stuf here
    //terminate program

    exit(signum);
}
int main()
{
    int i = 0;
    signal(SIGINT, signalHandler);

    while (++i) {
        cout << "Going to sleep..." << endl;
        if (i == 3 ) {
            raise(SIGINT);
        }
    }
    return 0;
}

