# Ultrasonic Distance Sensor — Arduino Uno R4 WiFi

## Overview
This project reads distance measurements from an ultrasonic sensor (e.g., HC-SR04) using an Arduino `Uno_R4_WiFi` board and prints distances over the serial monitor. Firmware is written in C++ using the Arduino framework and built with PlatformIO.

## Repository files
- `main.cpp` — application code that triggers the ultrasonic sensor and prints distance values.
- `platformio.ini` — PlatformIO project configuration (board, platform, framework, serial settings).

## Hardware
- Arduino Uno R4 WiFi board (`uno_r4_wifi`)
- Ultrasonic sensor (HC-SR04 or similar)
- Jumper wires
- Optional: voltage divider or level shifter (see Safety note)

## Wiring (typical)
- Sensor VCC -> 5V (check board and sensor voltage)
- Sensor GND -> GND
- Sensor TRIG -> digital pin (example: D2)
- Sensor ECHO -> digital pin (example: D3) — if the board's I/O is 3.3V, use a level shifter or voltage divider for the ECHO line to avoid damage

Verify the actual pins used in `main.cpp` and adjust wiring accordingly.

## Software / Build
- Language: C++ (Arduino)
- Framework: Arduino (via PlatformIO)
- PlatformIO environment configured for `uno_r4_wifi` in `platformio.ini`.

Build and upload commands (PlatformIO CLI):
- Build: `pio run`
- Upload: `pio run -t upload -e uno_r4_wifi`
- Serial monitor: `pio device monitor -p COM11 -b 9600` (adjust `COM` port and baud rate to match your environment)

In CLion on Windows, use the integrated terminal or PlatformIO/PIO plugin to build, upload, and open the serial monitor.

## Runtime
- After upload, open the serial monitor at the baud rate set in `main.cpp` (commonly 9600).
- The device prints distance values (typically in centimeters).

## Troubleshooting
- No output: check correct `COM` port, wiring, and power.
- Incorrect/unstable readings: verify sensor orientation, stable power, and ensure TRIG/ECHO pins match `main.cpp`.
- Protect 3.3V I/O: if your board uses 3.3V logic, add a voltage divider or level shifter on the ECHO pin.

## Notes
- Inspect `platformio.ini` to confirm board, platform, framework, and serial settings.
- Adjust pins and serial baud in `main.cpp` as needed.

## License
MIT
