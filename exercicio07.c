#include<stdio.h>

main(){

    char sexo, cor_olhos, cor_cabelo;
    int idade, total_habitante=0, total_especifico=0, total_m=0, total_f=0, opcao;
    float salario, porcentagem;

    //Cadastrar um habitante em cada repeticao
    do{
        //contagem de cada habitante
        total_habitante++;
        //validar o campo sexo
        /*printf("\n====================");
        printf("\n|CADASTRO DE PESSOAS|");
        printf("\n====================");*/
        do{
            fflush(stdin);
            printf("\nDigite o sexo[m/f]: ");
            scanf("%c", &sexo);
            if(sexo =='m'){
                total_m++;
            }else if(sexo == 'f'){
                total_f++;
            }
            if (sexo != 'm' && sexo != 'f'){
                printf("\n==================================================================");
                printf("\nInformacao invalida. Por favor, digite a informacao corretamente. ");
                printf("\n==================================================================");
            }
           
        } while (sexo != 'm' && sexo != 'f');
        //validar cor dos olhos
        do{
            fflush(stdin);
            printf("\n-----------------");
            printf("\nSelecione a cor dos olhos:");
            printf("\n-----------------");
            printf("\n[a] azul \n[v] verde \n[c] castanho \n[p] preto \n-->");
            scanf("%c", &cor_olhos);
            if(cor_olhos != 'a' && cor_olhos != 'p' && cor_olhos != 'c' && cor_olhos != 'v'){
                printf("\n==================================================================");
                printf("\nInformacao invalida. Por favor, digite a informacao corretamente ");
                printf("\n==================================================================");

            }  
        } while(cor_olhos != 'a' && cor_olhos != 'p' && cor_olhos != 'c' && cor_olhos != 'v');
        //validar cor do cabelo
        do{
            fflush(stdin);
            printf("\n-----------------");
            printf("\nSelecione a cor do cabelo:");
            printf("\n-----------------");
            printf("\n[l] loiros \n[c] castanhos \n[p] preto \n[r] ruivos \n-->");
            scanf("%c", &cor_cabelo);
            if (cor_cabelo != 'l' && cor_cabelo != 'c' && cor_cabelo != 'p' && cor_cabelo != 'r'){
                printf("\n==================================================================");
                printf("\nInformacao invalida. Por favor, digite a informacao corretamente ");
                printf("\n==================================================================");
            }
        } while (cor_cabelo != 'l' && cor_cabelo != 'c' && cor_cabelo != 'p' && cor_cabelo != 'r');
        //validar idade
        do{
            fflush(stdin);
            printf("\n-----------------");
            printf("\nInforme a idade: ");
            scanf("%d", &idade);
            printf("------------------");
            if(idade < 10 || idade > 100){
                printf("\n===================================================================");
                printf("\nInformacao invalida. Por favor, digite uma idade entre 10 e 100 anos ");
                printf("\n===================================================================");
            }
        } while (idade < 10 || idade > 100);
        //validar o salario
        do{
            fflush(stdin);
            printf("\n-----------------");
            printf("\nInforme o salario: ");
            scanf("%f", &salario);
            printf("\n------------------");
            if (salario < 0){
                printf("\n===================================================================");
                printf("\nInformacao invalida. Por favor, digite a informacao corretamente");
                printf("\n===================================================================");          
            }
        } while (salario < 0);
        
        if (sexo == 'f' && cor_olhos == 'c' && cor_cabelo == 'c' && (idade > 18 && idade < 35) ){
            total_especifico ++;
        }

        printf("\n------------------------------------");
        printf("\nDeseja cadastrar um novo habitante: \n[1] sim \n[-1] nao \n-->");
        scanf("%d", &opcao);
        printf("\n------------------------------------");
    } while(opcao != -1);

    porcentagem =(float)total_especifico/ total_habitante * 100;
    printf("\nTotal de habitantes cadastrados %d", total_habitante);
    printf("\nTotal de habitantes cadastrados %d", total_m);
    printf("\nTotal de habitantes cadastrados %d", total_f);
    printf("\nPorcentagem de pessoas com caracteristicas especificas %.2f", porcentagem);
    

}