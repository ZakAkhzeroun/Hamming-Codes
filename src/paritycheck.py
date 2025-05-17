def extended_parity_check(message):
    c = []
    i = 0
    while (i < 16):
        if message[i]:
            c.append(i)
        i+=1 
    i = 0
    l = len(c)
    print(c)
    while(i < l-1):
        out = c[i] ^ c[i+1]
        c[i+1] = out
        i += 1 
    correct = message 
    if correct[out] == 1 :
        correct[out] = 0
    else :
        correct[out] = 1 

    return correct
 
message = [1,0,1,0,1,1,1,1,0,0,1,0,1,0,0,0]
            
print(extended_parity_check(message))