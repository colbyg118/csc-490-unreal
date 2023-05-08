import sys
import subprocess

# Set the path to the Python executable within Unreal Engine
python_executable = r"C:\Program Files\Epic Games\UE_5.0\Engine\Binaries\ThirdParty\Python3\Win64\python.exe"

# Install OpenAI using pip
subprocess.call([python_executable, "-m", "pip", "install", "unreal_engine"])
