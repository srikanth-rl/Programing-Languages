import sys

required_version = (3, 12)  # The required Python version
if sys.version_info[:2] != required_version:
    raise Exception(
        f"This script requires Python {required_version[0]}.{required_version[1]}")

# Your code here
print("This script is running with the correct Python version.")
