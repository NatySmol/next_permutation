//
//  main.c
//  next_permutation
//
//Permutací N-prvkové množiny přirozených čísel {1, 2, ..., N} rozumíme každé uspořádání prvků této množiny. Uvedená množina má N! různých permutací. Všechny permutace množiny můžeme uspořádat lexikografickým uspořádáním, tzn. takovým způsobem, jak se řadí hesla v slovníku. O pořadí dvou zvolených permutací rozhoduje nejprve jejich první prvek, v případě shody prvního prvku pak druhý prvek, atd. První permutací v lexikografickém uspořádání je (1, 2, ..., N), poslední permutací je (N, N-1, ..., 2, 1).

//Na prvním řádku standardního vstupu je jedno kladné celé číslo N, které není větší než 100. Na druhém řádku následuje nějaká permutace množiny přirozených čísel {1, 2, ..., N}, přičemž jednotlivá čísla jsou na vstupu od sebe oddělena mezerami.

//Program k zadané permutaci určí permutaci bezprostředně po ní následující v lexikografickém uspořádání. Výslednou permutaci vypíše do jednoho řádku na standardní výstup, její jednotlivé členy budou na výstupu opět odděleny mezerami. Pokud byla na vstupu zadána poslední permutace v lexikogafickém uspořádání a následující permutace tedy neexistuje, program vypíše pouze znakový řetězec NEEXISTUJE
//  Created by Natálie Smolíková on 21.10.2021.
//

#include <stdio.h>

int pole[100];

    

int main()
{
    int N, i =0, a;
    int k =0, pom, j = 0;
    int pointer, value, temp = 0;
    
    scanf("%d",&N);
    
    for(i;i<N;i++)
    {
        scanf("%d", &a);
        pole[i] =a;
    }
    

//najde maximalni rostouci posloupnost odzadu
    k = N-1;
 while (pole[k] < pole[k-1])
    {   k -= 1;
        temp += 1;
    }

//pokud dojdu až na začátek, další permutace neexistuje
 if (k==0)
 {  printf("NEEXISTUJE");
    return 0;
 }
    //označim si hodnotu a pozici prvku před rostoucí posl.
    pointer = N-2-temp;
    value = pole[pointer];
    
    //prohodí pozici value a prvku prvního většího odzadu
    for (i = 0; i < N; i++)
    {
        if (pole[N-1-i] > value)
        {
            pom = pole[N-1-i];
            pole[N-1-i] = value;
            pole[pointer] = pom;
            break;
        }
    }
    
    for (i = 1; (pointer + i)<(N - i) ; i++)
    {
        pom = pole[N - i];
        pole[N - i] = pole[pointer + i];
        pole[pointer + i] = pom;
    }

    
        
    if(k != 0)
        {for(j=0; j<N; j++)
        {
            printf("%d ",pole[j]);
        }
    }
    
    
    
    return 0;
}


