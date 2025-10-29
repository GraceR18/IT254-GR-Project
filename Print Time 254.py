#Displays countdown for fan time remaining
import time

def countdown(seconds):
    for i in range(seconds, 0, -1):
        print(f"{i} seconds remaining... ")
        time.sleep(1)

    print("Finished")

fan_time = int(input("How long do you want the fan on? (seconds): "))
countdown(fan_time)