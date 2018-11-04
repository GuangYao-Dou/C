import sys
# num=float(input(''))
# if num%2:
#     print(num,"是奇数")
# else:
#     print(num,"是偶数")

# number = int(input(''))
# print('{}是{}'.format(number,'奇数'if number%2 else "偶数"))

# score=int(input("请输入得分:"))
# if score>=90:
#     print(score,"A")
# elif 90>score>=80:
#     print(score,"B")
# elif 80>score>=70:
#     print(score,"C")
# elif 70>score>=60:
#     print(score,"D")
# else:
#     print(score,"不及格")

# import random
# number =0
# i=0
# while number !=1:
#     number =random.randint(0,100)
#     i=i+1
#     print (number,'(第{}个)'.format(i))
#     if number ==1:
#         print( ("本次产生{}个随机数".format(i)))
# del number
# print(number)

# print("请输入两个数字")
# m=int(input('数字1：'))
# n=int(input('数字2：'))
# while n !=0:
#     r=m%n
#     m=n
#     n=r
#     if m==1:
#         print("互质")
#         break
# else:
#         print("最大公因数是：",m)

# import math
# def max(num1,num2):
#     return num1 if num1>num2 else num2
# a=input("1:")
# b=input("2:")
# print(max(a,b))
# print(math.pi)
def filter_It(predicate,It):
    result = []
    for elem in It:
        if predicate(elem):
            result.append(elem)
    return result
It = ['just','caterpollar','openhome','duide']
print('大于6：',filter_It(lambda elem:len(elem)>6,It))
print('小于5',filter_It(lambda elem:len(elem)<5,It))
print('有个i',filter_It(lambda elem:'i'in elem,It))
