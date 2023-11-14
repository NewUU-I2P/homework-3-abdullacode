#include <string>
#include <sstream>
using namespace std;

string problemSolution4(const string &macAddress) {

    if (macAddress[1]=='F')
        return "Broadcast";
    else if (macAddress[1]%2==0)
        return "Unicast";
    else
        return "Multicast";
}
