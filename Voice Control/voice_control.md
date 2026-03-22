# FPGA Voice Control - Speech-to-Text Pipeline

This module implements a voice-controlled navigation system using the PYNQ-Z1 FPGA board. 

It captures speech, converts it to text, detects predefined commands and broadcasts them to connected devices in real time via the AWS DynamoDB. 

## Overview

| Component | Technology Used |
|-----------|-----------------|
| Hardware  | PYNQ-Z1 FPGA Board |
| Audio IP Core | 'AudioDirect' ('audio_direct_v1_1_0') |
| Bitstream | 'base.bit' |
| Speech Recognition | Google Speech Recognition API |
| Cloud Backend | AWS DynamoDB |
| Language | Python (via Jupyter Notebook) |

## Hardware Setup

We used the PYNQ-Z1 FPGA board and specifically utilized the onboard microphone via the 'AudioDirect' IP core, exposed through the base.bit bitstream. To connect with the Jupyter Notebook, we used WiFi via 'wpa_supplicant', connected to a mobile hotspot.

## Pipeline Architecture

```
Microphone (Onboard the PYNQ-Z1)
    ↓
AudioDirect IP Core (through base.bit hardware)
    ↓
Audio Preprocessing (16kHz Downsampling, DC removal, normalisation)
    ↓
Google Speech Recognition API (over mobile hotspot)
    ↓
Keyword / Phrase Detection
    ↓
AWS DynamoDB (VoiceCommands Table in Server)
    ↓
Connected Devices poll DynamoDB 
    ↓
Real-Time Navigation / Action triggered
```

##
