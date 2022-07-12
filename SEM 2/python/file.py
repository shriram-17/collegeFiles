'''with open('file.txt','w') as f:
    f.write('Hi\n')
    f.write('How are you\n')
    f.write('Im fine\n')
f.close()

f=open('file.txt','r')
print(f.read())
print(f.tell())
f.close()'''

x=str(raw_input('Enter the Text to be replaced:'))
y=str(raw_input('Enter the Text that will replace'))
f = open("file.txt", "r+")
l=f.readlines()

c=0
for i in l:
    if x in l:
        Replacement=i.replace(x,y)
        l=replacement
    c+=1


f.truncate(0)

f.writelines(l)
f.close()
