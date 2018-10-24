input() #dummy - the length of the file name
file_name = input()
x_counter = 0
ans = 0 #letters that needed to be deleted
for char in file_name:
    if char=='x':
        x_counter+=1
        if x_counter>=3: ans+=1
    else:
        x_counter=0
print(ans)