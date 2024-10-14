# LED Control with IR and LDR Sensor

This project utilizes an Intel Galileo microcontroller connected to multiple LEDs, IR sensors, and an LDR (Light Dependent Resistor) module to create a smart lighting system. The system is designed with energy-saving principles, making it ideal for Smart City applications.

### **Features**
- The LED lights turn on only when the LDR module detects low light intensity (e.g., nighttime or dark environments).
- If an object is detected by the IR sensor in front of a particular LED, the LED will illuminate at full brightness.
- The LED will only light up when the IR sensor detects an object **and** the LDR module detects low ambient light. Otherwise, the LED remains off even if an object is detected in bright environments, saving energy.

### **How it Works**
1. **LDR Sensor (Light Intensity Check):**  
   - Continuously monitors the surrounding light levels.
   - If the detected light intensity falls below a certain threshold, the system allows the LEDs to turn on.
   
2. **IR Sensor (Object Detection):**  
   - Each LED has a paired IR sensor that detects objects in front of it.
   - When an object is detected **and** the light intensity is low, the corresponding LED turns on with high brightness.
   - If the object is detected but the light intensity is sufficient (daytime), the LED stays off, conserving energy.

### **Benefits**
- **Energy Efficient:**  
   By only turning on the LEDs in low-light conditions and when an object is detected, the system significantly reduces unnecessary power consumption, especially in outdoor or street lighting scenarios.
   
- **Smart Illumination:**  
   The system adjusts the brightness of each LED dynamically based on the proximity of objects, ensuring high visibility only when necessary.

### **Ideal Use Cases**
- **Smart Cities:**  
   Perfect for public street lighting or outdoor illumination in urban areas where energy efficiency is prioritized.
   
- **Automatic Night Lights:**  
   Can be adapted for home or garden lighting, automatically adjusting based on the surrounding light levels and movement.
