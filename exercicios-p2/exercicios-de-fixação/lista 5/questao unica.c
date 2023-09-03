int main()
{
   float primeiras_notas[60], segundas_notas[60], media[60];
   int situacao_aluno[60], i;
   for (i = 0; i<= 59; i++){

    printf("Informe a primeira nota do aluno %d: ", i);
    scanf("%f", &primeiras_notas[i]);

    printf("Informe a segunda nota do aluno %d: ", i);
    scanf("%f", &segundas_notas[i]);

   }
    for (i = 0; i <= 59; i++){

    media[i] =  (primeiras_notas[i] * 2 + segundas_notas[i] * 3) / 5; 
   

}
    for (i = 0; i <= 59; i++){

        printf("A primeira nota do aluno %d foi %.1f,", i, primeiras_notas[i]);
        printf(" a segunda nota do aluno %d foi %.1f, ", i, segundas_notas[i]);
        printf("e a media do aluno %d foi %.1f", i, media[i]);
        printf("\n");
    }
    for (i = 0; i<= 2; i++);



    return 0;
}
