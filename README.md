# Canteen Token System

Fairness-based token/queue system for canteen rush hours — built for Iotricity Hackathon.

## Problem
Institutional canteens face severe peak-hour overcrowding due to manual, physical queuing and zero visibility into order preparation times. This lack of structure leads to chaotic crowds, lost break time, and inefficient counter management. 

## Solution
- A web app lets users view a categorized menu (Snacks, Meals, Beverages,etc.) with live stock status
- Users book a virtual token and see a predicted serving time
- Staff advance the "Now Serving" token and toggle item stock in real time
- An ESP32-based display board at the counter shows "Token 42 – Now Serving" (prototyped in Tinkercad with an Arduino Uno + 16x2 LCD)

## Demo
- YouTube demo video: https://youtu.be/R2M74hGIQCs?si=hPpXAobChG2rDnd4

- Tinkercad circuit: https://www.tinkercad.com/things/4lsVAhrudrO-magnificent-bruticus?sharecode=oRrtRlCo5V0DvYDCndqisC1yqN00DO_viC3OwHGKJ5o

- Live app: https://subhajitsh2006-prog.github.io/canteen-token-system/app/index.html
  
- Staff panel: https://subhajitsh2006-prog.github.io/canteen-token-system/app/staff.html

## Tech Stack
- **Frontend:** HTML5, CSS3, JavaScript (ES6)
- **Backend / Database:** Firebase Realtime Database
- **Hardware / Embedded:** ESP32 (target board for real deployment), 16x2 LCD display, Arduino C++ firmware
- **Simulation:** Tinkercad Circuits (prototyped with Arduino Uno)

## Project Structure
- app/index.html - customer page (menu, get token, now serving)
- app/staff.html - staff panel (next token, reset, stock control)
- hardware/circuit_code.ino - Arduino code for the LCD display
- hardware/README.md - circuit details and Tinkercad link

## How to Run
Download the repo and open app/index.html and app/staff.html in a browser. Both connect to our Firebase Realtime Database and update live.

## Team — Nexus Syndicate
1. Adrika Kundu
2. Aadya Das
3. Sayan Choudhury
4. Snehasis Sain
5. Subhajit Saha
