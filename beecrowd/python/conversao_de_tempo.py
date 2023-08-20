tempo = int(input())

minutos = int(tempo / 60)
segundos = int(tempo % 60)
horas = int(minutos / 60)
minutos = int(minutos % 60)

print(horas, minutos, segundos, sep=":")
