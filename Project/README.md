## Table of Contents
 ### DIGITAL VOLTMETER CIRCUIT
1. Description
2. Identifying features
3. State of art
4. 5W's & 1H and S.W.O.T analysis

 ### Requirements
5. High level requirements
6. Low level requirements

 ### Block Diagram and Blocks explination
7. Block Diagram
8. Micro controller and memory
9. Sub-system and others
10. Application

## About the DIGITAL VOLTMETER CIRCUIT

#### 1. Description:
    
Digital Voltmeter is a voltage sensitive device. It measures AC or DC voltage and displays the value directly in numeric form instead of pointer deflection. DVM is an acronym for Digital Voltmeter. DVM was first invented in 1954 by Andrew Kay. There exist many factors that affect the measurement accuracy of a digital voltmeter (DVM).Voltmeter is an electrical measuring instrument which is used to measure potential difference between two points. The voltage to be measured may be AC or DC. Two types of voltmeters are available for the purpose of voltage measurement i.e. analog and digital.

#### 2. Identifying features:

* Measures potential difference between two points when connected across a circuit in parallel.
* Displays the measured value in the Lcd screen.
* The internal resistance is kept high in a voltmeter.

#### 3. State of art:

* Voltmeters allow to safely measure the voltage or the difference in electrical potential between two points of a circuit, and at the same time they do not change the voltage of that circuit.
* The ability to measure voltage is critical in the design and handling of advanced technology, but it also has other applications.
* For example, you want to turn on a fan but when you connect and turn it on nothing happens. Although the fan may be damaged, the wall outlet may not be receiving electricity.
* A voltmeter could be used to measure the voltage of the plug; If it is not around 120 V, then the plug could be damaged.
* Another use is to determine if a battery is charged or discharged. When a car does not start, you can measure the voltage of the battery with a voltmeter to see if the problem is there.

#### 4. 5W's & 1H and S.W.O.T analysis

#### SWOT

##### Strengths:

* Digital voltmeter has automatic range selection.
* A digital voltmeter gives good stability.
* It provides better resolution. For example can be read on 1 volt input range.
* The internal calibration does not depend on the measuring circuit.

##### Weakness:

* It gives some extra feature are expensive.
* Speed of operation is limited due to the digitizing circuit.
* It is usually very hard to spot transient voltage spikes.

##### Oppertunities: 

* Can be used to measure the relative voltage output of various electronic appliances. Most electronics get power through a series of voltage currents that course through them.

##### Threats:

* Digital Voltmeters are prone to damage if the voltage is increased beyond the limit. The display depends on the external power source or battery.

#### 5W's and 1H 

##### WHAT:
Voltmeters are used to measure the gain or loss of voltage between two points in a circuit, and they capture both alternating current (AC) and direct current (DC) outputs.

##### WHO:
Used by many electricians and mechanical manufacturers. to measure the relative voltage output of various electronic appliances.

##### WHY:
To measure the relative voltage output of various electronic appliances.

##### WHEN:
Didital Voltmeter has a greater speed of taking voltage readings as compared to analog instruments.

##### WHERE:
Commercial and household purposes.

##### HOW:
The required potential difference is measured with the help of multiple voltage divider circuits

#### 5. Requirements:

##### -> High Level Requirements:

ID  | Description
------------- | -------------
HLR01  | It shall display the required potential difference on 16*2 LCD Display
HLR02  | It shall require a power supply of +5V
HLR03  | It shall require a 10bit ADC
HLR04  | It shall require Status and selection registers

##### -> Low Level Requirements:

ID  | Description | Status
------------- | ------------- | -------------
LLR01  | Whenever power supply is given | Displays potential difference
LLR02  | Voltage divider circuits | To increase the required input voltage
LLR03  | If input is fed as 25 volts | Output is displayed as 5volts

#### Block Diagram and Blocks explination

##### Block Diagram:

![WhatsApp Image 2022-02-26 at 15 24 33](https://user-images.githubusercontent.com/98829310/155838716-047e69fe-f8d1-4f7d-8221-88c5e4b41082.jpeg)

##### Microcontroller and Memory:

###### Atmega32:

* The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family (later Microchip Technology acquired Atmel in 2016).
* It has a modified Harvard architecture 8-bit RISC processor core.
* The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. 
* The device achieves throughput approaching 1 MIPS/MHz.
