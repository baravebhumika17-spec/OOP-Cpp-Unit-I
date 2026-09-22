#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SmartDevice
{
private:
    string deviceId;
    string deviceName;
    string location;
    string status;
    string lastUpdated;

public:
    // Constructor
    SmartDevice(string id, string name, string loc)
    {
        deviceId = id;
        deviceName = name;
        location = loc;
        status = "OFF";
        lastUpdated = "Not updated";
    }

    // Turn device ON
    void turnOn(string time)
    {
        status = "ON";
        lastUpdated = time;
    }

    // Turn device OFF
    void turnOff(string time)
    {
        status = "OFF";
        lastUpdated = time;
    }

    // Display device details
    void display() const
    {
        cout << "Device ID: " << deviceId << endl;
        cout << "Device: " << deviceName << endl;
        cout << "Location: " << location << endl;
        cout << "Status: " << status << endl;
        cout << "Last Updated: " << lastUpdated << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    vector<SmartDevice> devices;

    devices.emplace_back("D001", "Smart Light", "Bedroom");
    devices.emplace_back("D002", "Smart Camera", "Main Door");
    devices.emplace_back("D003", "Smart Thermostat", "Living Room");
    devices.emplace_back("D004", "Smart Lock", "Main Door");

    // Change device status
    devices[0].turnOn("10:00 AM");
    devices[1].turnOn("10:05 AM");
    devices[2].turnOn("10:10 AM");

    cout << "===== SMART HOME DASHBOARD =====" << endl;

    for (const auto& device : devices)
    {
        device.display();
    }

    return 0;
}
