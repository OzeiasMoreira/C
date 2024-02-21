//Implemente uma fun ̧c ̃ao recursiva respons ́avel por converte um n ́umero n na base decimal para binaria.

    #include <stdio.h>

    void bin(int x){

        if (x < 2){

            printf("%d",x);
        } else {

            bin(x / 2);
            printf("%d",x % 2);
            
        }
    }

    int main(){

        int n;

        printf("Insira um numero:");
        scanf("%d",&n);

        bin(n);

        return 0;
    }