n = int(input())
t = 1
while n != 0:
    ganhador = 0
    lista = list(map(int, input().split()))
    for i in range(1, n+1):
        if lista[i-1] == i:
            ganhador = lista[i-1]
    print('Teste', t)
    t += 1
    print(ganhador)
    print()
    n = int(input())
