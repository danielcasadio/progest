# DETECTANDO COLISÃO

# a = list(map(int, input().split())) #ax0 ax1 ay0 ay1
# b = list(map(int, input().split())) #bx0 bx1 by0 by1

# max = 1000000
# ok = True
# r = 0
# for i in range (4):
#     if ((a[i] >= 0 and a[i] <= max) == False) or ((b[i] >= 0 and b[i] <= max) == False):
#         ok = False

# if(ok):
#     r = 0
#     if(b[0]<= a[0] and a[0] <= b[2]):
#         if ( b[1]<= a[1] and a[1] <= b[3]):
#             r = 1
#         elif ( a[1]<= b[1] and b[1] <= a[3]):
#             r = 1
#     elif(a[0]<= b[0] and b[0] <= a[2]):
#         if ( a[1]<= b[1] and b[1] <= a[3]):
#             r = 1
#         elif ( b[1]<= a[1] and a[1] <= b[3]):
#             r = 1
#     print(r)

#FUNCAO MAIOR

# def maior(vetor):
#     aux = [0]*10
#     for i in vetor:
#         aux[i]+=1
    
#     maior = aux[0]
#     indice = 0
#     for j in range(10):
#         if (aux[j] > maior):
#             maior = aux[j]
#             indice = j

    
#     return indice

# n = int(input())
# mat[10]
# for i in range(n):

# def main():
#     a = [0, 1, 2, 3, 4]
#     b = a # b e apelido para a
#     b[1] = 7
#     print(b[1])
#     print(a[1])

# main()
# n = int(input())
# mat = []
# #mat =  [[1, 1], [2, 2], [2, 3], [4, 4], [2, 3], [6, 5], [9, 11], [10, 10]]
# for i in range(n):
#     linha = (list(map(int, input().split())))
#     mat.append(linha)    

# print(mat)

# for i in range(len(mat)):
#     for j in range (i+1, len(mat)):
#         if(mat[i] == mat[j]):
#             print("IGUAL")


n = int(input())
matriz = [[0]*510 for i in range(510)]
toggle = 1
br = 1
for j in range(n):
    x, y = map(int, input().split(' '))
    matriz[y][x] += 1
    if matriz[y][x] > 1:
        print(1)
        toggle = 0
        br = 0
        break
    if br == 1:
        

if toggle == 1:
    print(0)

   




