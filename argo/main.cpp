#include "pigpio/pigpio.h"

#include <iostream>
#include <chrono>
#include <thread>

int main() {
    constexpr int myGpioPin = 26;

    const int myStatus = gpioInitialise();

   if (myStatus < 0)
   {
      std::cerr << "pigpio initialisation failed." << std::endl;
      return 1;
   }

    std::cout << "START" << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        gpioWrite(myGpioPin, PI_HIGH);
        std::this_thread::sleep_for(std::chrono::seconds{1});

        gpioWrite(myGpioPin, PI_LOW);
        std::this_thread::sleep_for(std::chrono::seconds{1});
    }

    std::cout << "END" << std::endl;
    return 0;
}

