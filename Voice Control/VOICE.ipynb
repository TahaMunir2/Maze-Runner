from pynq import Overlay, allocate
import pynq.lib.audio as a
import os
import numpy as np
import speech_recognition as sr
import time
import boto3
import requests

overlay = Overlay('/home/xilinx/jupyter_notebooks/base.bit')
audio = getattr(overlay._ip_map, 'audio_direct_v1_1_0')

def normalized_pcm(audio):
    fs = 16000
    samples = int(np.round(audio.sample_len * fs / audio.sample_rate))
    fractional_sample_indices = np.arange(samples) * (audio.sample_rate / fs)
    sample_indices = np.clip(np.round(fractional_sample_indices).astype(int), 0, audio.sample_len - 1)
    audio_data = audio.buffer[sample_indices].astype(np.float32)
    audio_data -= np.mean(audio_data)
    volume = np.sqrt(np.var(audio_data))
    audio_data /= max(1e-7, np.max(np.abs(audio_data)))
    audio_data *= 0.99 * np.iinfo(np.int16).max
    return volume, audio_data.astype(np.int16)

SERVER = "http://13.48.68.209:5000"

COMMANDS = {
    "command center": {"label": "COMMAND_CENTER", "page": "/"},
    "maze runner":    {"label": "MAZE_RUNNER",    "page": "/demo"},
    "arena":         {"label": "PACMAN",         "page": "/arena"},
    "Arena":         {"label": "PACMAN",         "page": "/arena"},
    "archives":  {"label": "MAZE_ARCHIVES",  "page": "/archives"},
}

# aws credentials 
AWS_ACCESS_KEY = "OUR_ACCESS_KEY"
AWS_SECRET_KEY = "OUR_SECRET_KEY"

session = boto3.Session(
    aws_access_key_id=AWS_ACCESS_KEY,
    aws_secret_access_key=AWS_SECRET_KEY,
    region_name='eu-north-1'
)
dynamodb = session.resource('dynamodb')
voice_commands_table = dynamodb.Table('VoiceCommands')
recognizer = sr.Recognizer()
CHUNK_SECONDS = 3

def send_to_aws(command, transcript):
    """Log the voice command to DynamoDB VoiceCommands table."""
    try:
        current_time = time.strftime('%H:%M:%S')
        command_id = f"CMD_{int(time.time())}"
        item = {
            'CommandID': command_id,
            'Timestamp': current_time,
            'Command': str(command),
            'Transcript': str(transcript),
        }
        print(f"Sending command to AWS: {item}")
        response = voice_commands_table.put_item(Item=item)
        print(f"Logged '{command}' at {current_time} to VoiceCommands - response: {response['ResponseMetadata']['HTTPStatusCode']}")
    except Exception as e:
        print(f"AWS Error: {type(e)._name_}: {e}")

def set_global_page(page):
    """POST to server — all browser tabs polling /get_page will redirect once."""
    try:
        requests.post(f"{SERVER}/set_page", json={"page": page}, timeout=3)
        print(f"All displays redirecting to {page}")
    except Exception as e:
        print(f"Server error: {e}")

def rover_action(keyword, transcript):
    command_data = COMMANDS[keyword]
    label = command_data["label"]
    page = command_data["page"]
    send_to_aws(label, transcript)
    set_global_page(page)

print(f"Listening... listening to 'command center', 'maze runner', 'pacman' or 'maze archives'")
print(f"Redirects apply to ALL displays connected to {SERVER}")
print("Press stop to stop.\n")

try:
    while True:
        print("Recording...")
        audio.record(CHUNK_SECONDS)
        _, recording = normalized_pcm(audio)

        try:
            text = recognizer.recognize_google(sr.AudioData(recording, 16000, 2))
            print(f"Heard: \"{text}\"")

            transcript = text.lower().strip()
            found = False
            for keyword in COMMANDS:
                if keyword in transcript:
                    print(f"Detected: '{keyword}'")
                    rover_action(keyword, transcript)
                    found = True
                    break

            if not found:
                print("No command detected.")

        except sr.UnknownValueError:
            pass
        except sr.RequestError as e:
            print(f"API error: {e}")
            break

except KeyboardInterrupt:
    print("\n Stopped.")
