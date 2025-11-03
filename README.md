# Aurdunio-LM35-Sensor-
Ein Arduino-Projekt mit dem Temperatursensor LM35, das die gemessene Temperatur erfasst und an einen Computer oder ein IoT-Dashboard sendet. Der Sensor liefert analoge Spannungswerte, die über den ADC des Arduino in °C umgerechnet werden

## 🧩 Projektbeschreibung

Dieses Projekt misst die Umgebungstemperatur mit dem **LM35-Sensor**, zeigt sie auf einem **LCD 16×2 Display** an und sendet die Werte zusätzlich über **Bluetooth (HC-05)** an ein mobiles Gerät oder einen PC.  
Es wurde komplett in **C++ (Arduino IDE)** programmiert und im **Tinkercad Circuits**-Simulator getestet.

---

## 🎯 Ziel

Ziel war die Entwicklung eines kompakten Systems, das Sensordaten erfasst, verarbeitet und visuell darstellt.  
Das Projekt dient als Grundlage für IoT- oder Smart-Home-Anwendungen, bei denen Temperaturüberwachung erforderlich ist.

---

## ⚙️ Hardware-Komponenten

| Komponente | Funktion |
|-------------|-----------|
| 🧠 **Arduino UNO (ATMega328)** | Mikrocontroller zur Datenverarbeitung |
| 🌡️ **LM35** | Analoger Temperatursensor (10 mV = 1 °C) |
| 🖥️ **LCD 16×2** | Anzeige der aktuellen Temperatur |
| 🎚️ **Potentiometer (10 kΩ)** | Regelung des Display-Kontrasts |
| 📶 **HC-05 Bluetooth (optional)** | Drahtlose Datenübertragung |
| 🔌 **Breadboard + Jumper-Kabel** | Aufbau der Schaltung |

---

## 🧠 Funktionsweise

1. Der Sensor **LM35** liefert eine analoge Spannung proportional zur Temperatur.  
2. Der **Arduino UNO** liest diese Spannung über den Analogeingang A0.  
3. Die Temperatur wird berechnet und auf dem **LCD-Display** angezeigt.  
4. Über **Bluetooth HC-05** werden die Daten zusätzlich seriell übertragen.  

---

## 💻 Verwendete Software

- **Arduino IDE** – Entwicklung in C++  
- **Tinkercad Circuits** – Simulation und Test der Schaltung  
- **(Optional)** Proteus oder Fritzing – Schaltplanerstellung
  ## 📸 Screenshot
![Arduino LM35 Schaltung](Arduino.png)
