# Hardware Simulation

Tinkercad circuit link: https://www.tinkercad.com/things/4lsVAhrudrO/editel?returnTo=%2Fdashboard%2Fdesigns%2Fcircuits&sharecode=z0-4HrJd3bBuFtiwTQ00p-ReyuXu932Nv8ZT7HZqdSU

## Components
- Arduino Uno
- 16x2 LCD Display
- 2 Pushbuttons (Next Token, Reset)
- 2x 220-ohm Resistors
- Breadboard

## What it demonstrates
Pressing "Next Token" increases the token count and updates the LCD display, simulating what the physical ESP32 + LED board would show at the canteen counter. In the real deployment, this update would happen automatically over WiFi from Firebase instead of a manual button press.
