#include "traffic_light.h"

// Trafik ışığı durumunu ve süresini gösteren metot
void displayStateAndDuration(const TrafficLight& trafficLight) {
    switch (trafficLight.state) {
        case RED:
            std::cout << "Red Light - Duration: " << trafficLight.redDuration << " seconds\n";
            break;
        case YELLOW:
            std::cout << "Yellow Light - Duration: " << trafficLight.yellowDuration << " seconds\n";
            break;
        case GREEN:
            std::cout << "Green Light - Duration: " << trafficLight.greenDuration << " seconds\n";
            break;
    }
}

// Trafik ışığını kontrol eden metot
void controlTrafficLight(TrafficLight& trafficLight) {
    while (true) {
        displayStateAndDuration(trafficLight);
        switch (trafficLight.state) {
            case RED:
                std::this_thread::sleep_for(std::chrono::seconds(trafficLight.redDuration));
                trafficLight.state = YELLOW;
                break;
            case YELLOW:
                std::this_thread::sleep_for(std::chrono::seconds(trafficLight.yellowDuration));
                trafficLight.state = GREEN;
                break;
            case GREEN:
                std::this_thread::sleep_for(std::chrono::seconds(trafficLight.greenDuration));
                trafficLight.state = RED;
                break;
        }
    }
}

