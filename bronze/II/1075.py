N = input()
F = int(input())
Number_2 = int(N[:-2] + '00')

for i in range(100):
    if (Number_2 + i) % F == 0:
        print(str(Number_2 + i)[-2:])
        break
