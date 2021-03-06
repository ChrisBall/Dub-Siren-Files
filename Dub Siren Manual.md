# Dub Siren 0.2 Manual

### Contents

1. [Introduction](/Dub%20Siren%20Manual.md#1-introduction)
2. [Features and Parts](/Dub%20Siren%20Manual.md#2-features-and-parts)
3. [Signal Chain Diagram](/Dub%20Siren%20Manual.md#3-signal-chain-diagram)
4. [Using](/Dub%20Siren%20Manual.md#4-using)
5. [Schematic](/Dub%20Siren%20Manual.md#5-schematic)
6. [Contact](/Dub%20Siren%20Manual.md#6-contact)

### 1. Introduction

Congratulations on purchasing/making your very own Arduino Due dub siren! It will meet all of your most basic synthesiser requirements.

This kit uses an Arduino Due development board to generate sound. You can find out more about the Arduino Due here: [http://www.arduino.cc/en/Main/arduinoBoardDue](http://www.arduino.cc/en/Main/arduinoBoardDue).

There is one *main* oscillator, that can generate a sine, square or saw wave. The frequency of the main oscillator can be modulated by a low frequency oscillator (*mod*), which can also be a sine, square or saw wave. The output signal from the oscillators is then passed through a simple 'tape loop' delay effect, with controls for *delay* time and *feedback*.

The main oscillator generates frequencies from 55Hz to 3520 HZ. This corresponds with notes A1 to A7, or midi notes 33 to 105.

### 2. Features and Parts

![alt text](/Images/PartsDiagram.png "Features and Parts")

#####1. DC Power Jack

   This dub siren uses an Arduino Due (http://www.arduino.cc/en/Main/ArduinoBoardDue) . The recommended input voltage is 7-12V. The dub siren will consume approx 65mA current at 12V. The latest version also includes a USB port where the Due can take a 5V supply.

#####2. Delay Indicator LED

   This LED flashes in time with the delay loop, for tempo matching purposes.

#####3. Main Output Volume Control

   This potentiometer control the main volume of the line output.

#####4. Feedback Level Control

   Feedback from the delay loop is controlled with this potentiometer: from 0 - 150%. 

#####5. Delay Access Speed Control

   This potentiometer controls the read/write speed from/to the delay buffer, from slow to fast.

#####6. Main Frequency Control

   This potentiometer controls the frequency of the main oscillator.

#####7. Main Waveform Control

   This switch controls the waveform being used by the main oscillator. There are three choices, from top to bottom:  
   Sine Wave  
   Square Wave  
   Sawtooth Wave

#####8. Modulation Frequency Control

   This potentiometer controls the frequency of the modulation oscillator.

#####9. Main Waveform Control

   This switch controls the waveform being used by the modulation oscillator. There are three choices, from top to bottom:  
   Sine Wave  
   Square Wave  
   Sawtooth Wave

#####10. Scale Lock Trigger

   While pressed, the main oscillator will play, and the main oscillator frequency will be locked to the nearest note on a chromatic scale, referenced to A4 = 440 Hz.

#####11. Main Oscillator Trigger

   While pressed, the main oscillator will play.

#####12. Line Output

   This output should be connected to an amplifier; never directly to a loudspeaker or headphones, or you risk damaging the DAC on the Arduino Due.  
   If you suspect you have damaged the DAC, there is a spare one that can be used instead. Use the contact section to get help with this.

### 3. Signal Chain Diagram

![alt text](/Images/SignalChainDiagram.png "Signal Chain")

### 4. Using



### 5. Schematic

![alt text](/Images/Schematic.png "Schematic")

### 6. Contact

chrisballprojects (at) gmail.com


