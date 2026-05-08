#include <iostream>
using namespace std;
// Base class
class Device {
protected:
    string deviceName;
    int deviceID;
    int* data;   // dynamically allocated

public:
    // Constructor
    Device(string name, int id, int value) {
        deviceName = name;
        deviceID = id;

        data = new int;   // allocate memory
        *data = value;

        cout << "Device Constructor Called" << endl;
    }

    // Destructor
    ~Device() {
        delete data;   // free memory
        cout << "Device Destructor Called (Memory Freed)" << endl;
    }
};

// Derived class
class Sensor : public Device {
private:
    string sensorType;
    float* sensorValue;   // dynamically allocated

public:
    // Constructor
    Sensor(string name, int id, int value, string type, float val)
        : Device(name, id, value) {

        sensorType = type;

        sensorValue = new float;   // allocate memory
        *sensorValue = val;

        cout << "Sensor Constructor Called" << endl;
    }

    // Destructor
    ~Sensor() {
        delete sensorValue;   // free memory
        cout << "Sensor Destructor Called (Memory Freed)" << endl;
    }
};

int main() {
    // creating object
    Sensor* s1 = new Sensor("TempDevice", 122, 50, "Temp", 27.4);
    delete s1;
    return 0;
}
