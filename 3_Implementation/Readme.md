## Working of the Project

![image](https://user-images.githubusercontent.com/102902624/164967724-ef4eada2-46d8-44e9-bda8-76d0db84e69a.png)


We use LDR in the circuit for the following reason: if only LDR is used, then there is no chance of saving any energy as the street lights will glow as soon as the intensity of light on LDR decreases and when the intensity increases, the street lights are turned off. If only RTC is used, the street lights are turned on and off at pre-set time irrespective of the outside lighting conditions. 

When the device is turned on, RTC starts with the pre-set time in the code.

The microcontroller waits for the signal from LDR and when the intensity of light on LDR decreases, the output of the microcontroller is activated and the street lights start to glow. This event occurs only when the current time is in the range of pre-set time i.e. only after 5PM.

The lights continue to glow at full intensity up to 3 AM. When the time reaches some time (ex: - 3AM), the intensity of the street light gradually decreases and will turn off either at some time (ex: - 6AM) or when the light on LDR in increasing, whichever is first.

Hence, the auto intensity control of street lights is achieved with the above circuit which has an LDR, an RTC, a Atmega328 microcontroller and an LED array.
