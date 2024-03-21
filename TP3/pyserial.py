import serial
import time

# # Définir le port série et la vitesse de communication (baudrate)
port = 'com3'  # Remplacez par le port série de votre Arduino
baudrate = 9600 # recupération du serial monitor

# Ouvrir le port série
try:
    serial_port = serial.Serial(port=port, baudrate=baudrate)
    print(f"Port série {port} ouvert avec succès.")
except serial.SerialException as e:
    print(f"Impossible d'ouvrir le port série {port}: {e}")
    exit()

# Attendre un court instant pour que le port série soit prêt
time.sleep(2)

# Envoyer des mots à l'Arduino
message = ""
while message != "fin":
    print("\nVeuillez entrez un mot ou une phrase:")
    message = input()

    serial_port.write(message.encode())  # Envoyer le mot encodé en bytes
    serial_port.write(b'\n')  # Ajouter un saut de ligne
    print(f"Envoyé: {message}")
    
# Fermer le port série
serial_port.close()
print("Port série fermé.")