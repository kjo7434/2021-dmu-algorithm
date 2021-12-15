x = 32;
 
def toggleCase(a):
    print(a)
    for i in range(len(a)):
        # Bitwise EXOR with 32
        a = a[:i] + chr(ord(a[i]) ^ 32) + a[i + 1:];
    return a;

str = "CheRrY";
print("Toggle case: ", end = "");
str = toggleCase(str);
print(str);
 
print("Original string: ", end = "");
str = toggleCase(str);
print(str);
 