        
        char s[] = "Maria";
        char *ptr = s;

        | Usando s | Usando ptr | Valor |
           s[2]         ptr[2]     'r'
           &s[0]        ptr        1000
           &s[1]        ptr+1      1001
                        &ptr       5000
