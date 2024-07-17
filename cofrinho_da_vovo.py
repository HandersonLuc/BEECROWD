n = int(input())
t = 1

while n !=0:
    joao = 0
    ze = 0
    print('Teste', t)
    t += 1
    for i in range(n):
        j, z = map(int, input().split())
        joao += j
        ze += z
        print(joao - ze)
    print()
    n = int(input())
    