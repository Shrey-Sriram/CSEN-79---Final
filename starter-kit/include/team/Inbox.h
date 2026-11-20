#include <iostream>
#include <string>
#include "Alert.h"

using namespace std;

class Inbox {
private:
    Alert* alerts;
    int capacity;
    int size;
    int next;

public:
    Inbox(int k) {
        capacity = k;
        size = 0;
        next = 0;
        alerts = new Alert[k];
    }

    ~Inbox() {
        delete[] alerts;
    }


    void addAlert(const Alert& alert) 
    {
        if (capacity <= 0) 
        {
            return;
        }

        alerts[next] = alert;

        next = (next + 1) % capacity;

        if (size < capacity) {
            size++;
        }
    }

    void displayInbox() const 
    {
        if (size == 0) 
        {
            cout << "Inbox is empty." << endl;
            return;
        }

        int oldest = (next - size + capacity) % capacity;

        for (int i = 0; i < size; i++) {
            int index = (oldest + i) % capacity;

            cout << alerts[index].topic << " "
                 << alerts[index].message << " "
                 << alerts[index].time << endl;
        }
    }

    int getSize() const
    {
        return size;
    }
};