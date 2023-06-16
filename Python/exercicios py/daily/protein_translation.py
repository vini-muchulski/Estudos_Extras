codons = {
    "Methionine": ("AUG",),
    "Phenylalanine": ("UUU", "UUC"),
    "Leucine": ("UUA", "UUG"),
    "Serine": ("UCU", "UCC", "UCA", "UCG"),
    "Tirosina" : ("UAU", "UAC"),
    "Cisteina" : ("UGU", "UGC"),
    "Triptofano" : ("UGG",),
    "STOP": ("UAA", "UAG", "UGA")

}


dna ="AUGUUUUCUUAAAUG"

proteinas_codificadas = []

for i in range(0,len(dna),3):
    codon = dna[i:i+3]
    for proteina, codones in codons.items():
        if codon in codones:
            if proteina == "STOP":
                break
            else:
                proteinas_codificadas.append(proteina)

print(proteinas_codificadas)