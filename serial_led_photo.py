import serial
import time

lenghts = {'s': 3, 'u': 0, 'd': 0}

def get_connection(port):
    ser = serial.Serial(port, timeout=1)
    return ser

def send(ser, message, mesg_len):
    ser.write(message)
    time.sleep(0.1)
    if mesg_len != 0:
        data = ser.read(mesg_len)
        result = data.decode()
        result = result.strip()
        print(result)

if __name__ == '__main__':
    ser = get_connection("COM8")
    while True:
        inp = input("Enter command:")
        lenght = lenghts.get(inp, 17)
        send(ser, inp.encode(), lenght)