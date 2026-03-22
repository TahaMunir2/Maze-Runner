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

## Audio Preprocessing

The raw audio buffer from the FPGA is processed before sent to the Speech Recognition API:

1. **Downsampled** to 16kHz (Google STT Requirement)
2. **DC offset removed** to eliminate noise
3. **Normalized** to 16-bit integer PCM format

The code for this can be found in 


## Supported Voice Commands

The system listens to the following phrases and maps them to server actions:

| Spoken Phrase | Action |
|---------------|--------|
| "command center | 'COMMAND_CENTER' |
| "FPGA demo " | 'FPGA_DEMO' |
| "arena" | 'GHOST_ARENA' |
| "archives" | 'MAZE_ARCHIVES' |


## AWS DynamoDB Integration 

When a command is detected, it is written to the 'VoiceCommands' DynamoDB table with **CommandID**, **Timestamp** and **Command**

Any device connected to the same AWS account can poll this table in real time and respond to commands - for example, a computer connected navigates to the corresponding page.



