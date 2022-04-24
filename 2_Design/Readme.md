## Design

The project implemented here is one such project where the microcontroller Atmega328 based system automatically controls the street lights.

![image](https://user-images.githubusercontent.com/102902624/164917145-b5bcaa29-87a3-4008-8bc4-857203f32683.png)

## Circuit Description
This is the circuit diagram sketching. We will define this in three part
1) Power input circuit
2) Operation in LDR and Microcontroller.
3) Output of relay.


In this section we came to know that how the parts connected and how they work. The threemost important sections will describe through this process. In this circuit diagram we useddifferent electronics parts. They are following: Resistors, Transistor, Capacitors, voltageregulator, LDR, LED, power supply, microcontroller and relay

## BLOCK DIAGRAM

![image](https://user-images.githubusercontent.com/102902624/164917207-b5a94d2f-28dc-4d45-94a9-bdeb95d508d8.png)

## Component Description

### 5V Relay Module
A 5V Relay Module is used in this project which helps 8051 Microcontroller to operate high voltage AC loads like a light. The detailed circuit of the Relay Module is shown in the following image. It consists of a 5V Electromechanical Relay, an Optocoupler IC, transistor, two resistors and two diodes

![image](https://user-images.githubusercontent.com/102902624/164917475-8348cf80-f562-40d3-a912-96f9165c53a1.png)


LDRs or Light dependent resistors are very useful especially in light/dark sensorcircuits. Normally the resistance of an LDR is very high, sometimes as high as 1000000 ohms, but when they are illuminated with light resistance drops dramatically. Electronic onto sensorsare the devices that alter their electrical characteristics, in the presences of visible or invisible light. The best-known devices of this type are the light dependent resistor (LDR), the photodiode and the phototransistors.Light dependent resistors as the name suggests depend on light for the variation of resistance LDR are made by depositing a film of cadmium sulphide or cadmium selenide on asubstrate of ceramic containing no or very few free electrons when not illuminated. Thelonger the strip the more the value of resistance.

When light falls on the strip, the resistance decreases. In the absence of light theresistance can be in the order of 10K ohm to 15K ohm and is called the dark resistance.Depending on the exposure of light the resistance can fall down to value of 500ohms. The power ratings are 
usually smaller and are in the range 50mW to 0.5W. Thoughvery sensitive to light, the switching time is very high and hence cannot be used for highfrequency applications. They are used in chopper amplifiers. Light dependent resistorsare available as disc 0.5cm to 2.5cm. The resistance rises to several Mega ohms underdark conditions.The below figure shows that when the torch is turned on, the resistance of the LDRfalls, allowing current to pass through it 

![image](https://user-images.githubusercontent.com/102902624/164917665-b616f79e-0ca0-4391-a285-d0a78e5e3462.png)

## Working of the Project

![image](https://user-images.githubusercontent.com/102902624/164967724-ef4eada2-46d8-44e9-bda8-76d0db84e69a.png)


We use LDR in the circuit for the following reason: if only LDR is used, then there is no chance of saving any energy as the street lights will glow as soon as the intensity of light on LDR decreases and when the intensity increases, the street lights are turned off. If only RTC is used, the street lights are turned on and off at pre-set time irrespective of the outside lighting conditions. 

When the device is turned on, RTC starts with the pre-set time in the code.

The microcontroller waits for the signal from LDR and when the intensity of light on LDR decreases, the output of the microcontroller is activated and the street lights start to glow. This event occurs only when the current time is in the range of pre-set time i.e. only after 5PM.

The lights continue to glow at full intensity up to 3 AM. When the time reaches some time (ex: - 3AM), the intensity of the street light gradually decreases and will turn off either at some time (ex: - 6AM) or when the light on LDR in increasing, whichever is first.

Hence, the auto intensity control of street lights is achieved with the above circuit which has an LDR, an RTC, a Atmega328 microcontroller and an LED array.
