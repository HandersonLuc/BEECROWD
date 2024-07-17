n = int(input())
for i in range(n):
    vet = list(map(str, input().split()))
    pala_deco = ''
    for j in range(len(vet)):
        pala_deco += vet[j][0]
    print(pala_deco)
    