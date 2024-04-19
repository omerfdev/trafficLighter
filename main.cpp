#include "traffic_light.h"

int main() {
    TrafficLight trafficLight = {RED, 60, 2, 28}; // Trafik ışığı yapısı ve parametreleri
    controlTrafficLight(trafficLight); // Trafik ışığını kontrol eden metodu çağır
    return 0;
}
