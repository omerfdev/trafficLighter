#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <iostream>
#include <thread>
#include <chrono>

// Trafik ışığı durumları
enum TrafficLightState {
    RED,
    YELLOW,
    GREEN
};

// Trafik ışığı yapısı
struct TrafficLight {
    TrafficLightState state; // Durum
    int redDuration;         // Kırmızı ışık süresi (saniye)
    int yellowDuration;      // Sarı ışık süresi (saniye)
    int greenDuration;       // Yeşil ışık süresi (saniye)
};

// Trafik ışığını kontrol eden metot
void controlTrafficLight(TrafficLight& trafficLight);

#endif // TRAFFIC_LIGHT_H
