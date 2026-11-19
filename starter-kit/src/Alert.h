#include <string>

class Alert {
public:
    std::string topic;
    std::string message;
    std::string time;

    Alert() {
        topic = "";
        message = "";
        time = "";
    }

    Alert(std::string t, std::string m, std::string tm) {
        topic = t;
        message = m;
        time = tm;
    }
};