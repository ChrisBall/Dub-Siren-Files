# Dub Siren 0.2 Manual

### Contents

1. Introduction
2. Features and Parts
3. Signal Chain Diagram
4. Using
5. Schematic
6. Contact

### 1. Introduction


### 2. Features and Parts

![alt text](https://github.com/ChrisBall/Dub-Siren-Files/blob/master/PartsDiagram.png "Features and Parts")

1. DC Power Jack

   This dub siren uses an Arduino Due (http://www.arduino.cc/en/Main/ArduinoBoardDue) . The recommended input voltage is 7-12V. The dub siren will consume approx 65mA current at 12V.  

2. Delay Indicator LED

   This LED flashes in time with the delay loop, for tempo matching purposes.

3. Main Output Volume Control

   This potentiometer control the main volume of the line output.

4. Feedback Level Control

   Feedback from the delay loop is controlled with this potentiometer: from 0 - 150%. 

5. Delay Access Speed COntrol

   This potentiometer controls the read/write speed from/to the delay buffer, from slow to fast.

6. Main Frequency Control

   This potentiometer controls the frequency of the main oscillator.

7. Main Waveform Control

   This switch controls the waveform being used by the main oscillator. There are three choices, from top to bottom:  
   Sine Wave  
   Square Wave  
   Sawtooth Wave

8. Modulation Frequency Control

   This potentiometer controls the frequency of the modulation oscillator.

9. Main Waveform Control

   This switch controls the waveform being used by the modulation oscillator. There are three choices, from top to bottom:  
   Sine Wave  
   Square Wave  
   Sawtooth Wave

10. Scale Lock Trigger

   While pressed, the main oscillator will play, and the main oscillator frequency will be locked to the nearest note on a chromatic scale, referenced to A4 = 440 Hz.

11. Main Oscillator Trigger

   While pressed, the main oscillator will play.

12. Line Output

   This output should be connected to an amplifier; never directly to a loudspeaker or headphones, or you risk damaging the DAC on the Arduino Due.  
   If you suspect you have damaged the DAC, there is a spare one that can be used instead. Use the contact section to get help with this.

### 3. Signal Chain Diagram

![alt text](https://github.com/ChrisBall/Dub-Siren-Files/blob/master/SignalChainDiagram.png "Signal Chain")

### 4. Using

### 5. Schematic

### 6. Contact


