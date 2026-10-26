def decode_message(s):
    
    first_half = 'abcdefghijklmn'
    second_half = 'opqrstuvwxyz'
    
    
    mirror_an = {first_half[i]: first_half[-(i+1)] for i in range(len(first_half))}
   
    mirror_oz = {second_half[i]: second_half[-(i+1)] for i in range(len(second_half))}
    
    decoded = []
    i = 0
    while i < len(s):
       
        if i + 1 < len(s) and s[i+1] == '#':
            char = s[i]
            original_char = mirror_oz[char]
            decoded.append(original_char)
            i += 2  
        else:
            char = s[i]
            original_char = mirror_an[char]
            decoded.append(original_char)
            i += 1
            
    return "".join(decoded)

encoded_str = input().strip()
print(decode_message(encoded_str))