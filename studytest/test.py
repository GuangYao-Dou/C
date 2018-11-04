print(hex (22))#输出为十六进制
print(oct(11))#输出位八进制
print(int(True))
print(int('10',15))
print(int('233'))#将字符串转化为int型
print(int(float('3.14')))#将字符串转化为浮点型在取整
print((bool()))
a=3+2j
b=2+2j
print(a+b)#复数的运算
print('"just" \tin \'it\'')#转义字符
print('\u029f')#十六位十六进制字符
print('\101',end='')#八进制字符码点 end为空自字符串时print函数不换行
print(ord('我')) #输出字符的码点
name = 'jim'
print('hello',name,sep=' ! ')#print函数默认两个字符串之间是空格 sep可以指定字符串之间的字符
'''
字符串的格式化
'''
print('{} {} {}'.format(115,21,33))
print('{2} {1} {0}'.format(115,21,33))#括号中的数字代表后面的顺序
print('{n1} {n2} {test}'.format(n1=115,n2=21,test=33))
print('哈'.encode('GBK'))#反过来用decode函数
print(len('wnajiawe'))
#元组（tuple）无法更改 占用内存小 类似于list