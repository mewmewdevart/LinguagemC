/*
        int x = 2;
        int y = 3;
        int *px;
        int *py;


                | 105
                | 104
        y = 3   | 103
        py      | 102
        px      | 101
        x = 2   | 100

        a)
                px = &x;
                py = &y;

        b)
                printf("%d %d", x, y);  2 e 3
                printf("%d %d", *px, *py); 2   e  3
                printf("%d %d", &px, &py); 101  e  102
                101 e 102

        c)
                Caso px = py;

                printf("%d %d %d %d %d %d %d",x, &x, px, *px, y, &y, py, *py);
                
                x = 2;
                &x = 100
                px = 
                *px = 3
                y = 3
                &y = 103
                py = 103 //endereço de y
                *py = 3 // conteudo que py aponta
 */
