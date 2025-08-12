import pyautogui
from time import sleep
cont = 8
for c in range(50):
    pyautogui.moveTo(x=143, y=97)
    sleep(0.4)
    pyautogui.click(x=143, y=97)
    sleep(0.5)
    pyautogui.write(f"aula_{cont}.c")
    pyautogui.press("enter")
    cont+=1