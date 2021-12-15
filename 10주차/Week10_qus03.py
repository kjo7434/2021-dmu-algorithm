import math
 
def getPosOfRightmostSetBit(n):
    return int(math.log2(n&-n)+1)
 
def setRightmostUnsetBit(n):
    if (n == 0):
        return 1
      
    if ((n & (n + 1)) == 0):   
        return n
      
    pos = getPosOfRightmostSetBit(~n)   
      
    return ((1 << (pos - 1)) | n)
 
n = int(input("Input:"))
print("Output:",end="")
print(setRightmostUnsetBit(n))