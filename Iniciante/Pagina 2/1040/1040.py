float_str = input()
nota1, nota2, nota3, nota4 = float_str.split()

nota1 = float(nota1)
nota2 = float(nota2)
nota3 = float(nota3)
nota4 = float(nota4)

media = (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4 * 1) / 10

if media >= 5.0:
    if media >= 7.0:
        print("Media: %.1f" %media)
        print("Aluno aprovado.")
    else:
        notaexame = float(input())
        
        mediafinal = (media + notaexame) / 2
        if mediafinal >= 5.0:
            print("Media: %.1f" %media)
            print("Aluno em exame.")
            print("Nota do exame: %.1f" %notaexame)
            print("Aluno aprovado.")
            print("Media final: %.1f" %mediafinal)
        else:
            print("Media: %.1f" %media)
            print("Aluno em exame.")
            print("Nota do exame: %.1f" %notaexame)
            print("Aluno reprovado.")
            print("Media final: %.1f" %mediafinal)
else:
    print("Media: %.1f" %media)
    print("Aluno reprovado")
