## Table of Contents
1. About the DIGITAL VOLTMETER CIRCUIT
    i. Description
    ii. Identifying features
    iii. State of art
    iv. 5W's & 1H and S.W.O.T analysis

2. Requirements
    i. High level requirements
    ii. Low level requirements

3. Block Diagram and Blocks explination
    i. Block Diagram
    ii. Micro controller and memory
    iii.Sub-system and others

4. Application

## About the DIGITAL VOLTMETER CIRCUIT

### Description:
    
    Digital Voltmeter is a voltage sensitive device. It measures AC or DC voltage and displays the value directly in numeric form instead of pointer deflection. DVM is an acronym for Digital Voltmeter. DVM was first invented in 1954 by Andrew Kay. There exist many factors that affect the measurement accuracy of a digital voltmeter (DVM).Voltmeter is an electrical measuring instrument which is used to measure potential difference between two points. The voltage to be measured may be AC or DC. Two types of voltmeters are available for the purpose of voltage measurement i.e. analog and digital.


### 2. Requirements:

#### 2.1 High Level Requirements:

ID  | Description
------------- | -------------
HLR01  | It shall display the required potential difference on 16*2 LCD Display
HLR02  | It shall require a power supply of +5V
HLR03  | It shall require a 10bit ADC
HLR04  | It shall require Status and selection registers

#### 2.2 Low Level Requirements:

ID  | Description | Status
------------- | ------------- | -------------
LLR01  | Whenever power supply is given | Displays potential difference
LLR02  | Voltage divider circuits | To increase the required input voltage
LLR03  | If input is fed as 25 volts | Output is displayed as 5volts 


