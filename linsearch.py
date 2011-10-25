#!/usr/bin/python
#! LINEAR SEARCH

'''Program for linear search.
Still not working for keys that are not present in list.'''

datalist=[]
print("PROGRAM FOR LINEAR SEARCH.\n\nEnter the data. Give 's' or 'S' as input when you want to stop.\n\nYou will be prompted for giving the key.")
num=count=0
while True:
    data=input()
    if data=='s' or data=='S':
        break
    data=(int(data))
    datalist.append(data)
    num+=1
key=int(input("Key:"))
flag=0
datalist.append(key)
while count<num:
    if datalist[count]==key:
        print("Key found at",count+1)
        flag=1
        break
    count+=1
if flag==0:
    print("Key not found")
