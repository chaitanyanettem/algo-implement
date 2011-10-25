#!/usr/bin/python
#Insertion Sort

array=[]
num=0
print("ENTER ARRAY VALUES. Press S to stop entering values")
while True:
    data=input()
    if data=='s' or data=='S':
        break
    data=int(data)
    array.append(data)
    num+=1
for j in range(1,num):
    key=array[j]
    i=j-1
    while i>=0 and array[i]>key:
        array[i+1]=array[i]
        i=i-1
    array[i+1]=key
#for item in array:
#    print(item,end='\t')
print(array)
