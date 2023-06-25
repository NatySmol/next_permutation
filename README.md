# next_permutation

CZ:
Permutací N-prvkové množiny přirozených čísel {1, 2, ..., N} rozumíme každé uspořádání prvků této množiny. Uvedená množina má N! různých permutací. Všechny permutace množiny můžeme uspořádat lexikografickým uspořádáním, tzn. takovým způsobem, jak se řadí hesla v slovníku. O pořadí dvou zvolených permutací rozhoduje nejprve jejich první prvek, v případě shody prvního prvku pak druhý prvek, atd. První permutací v lexikografickém uspořádání je (1, 2, ..., N), poslední permutací je (N, N-1, ..., 2, 1).

Na prvním řádku standardního vstupu je jedno kladné celé číslo N, které není větší než 100. Na druhém řádku následuje nějaká permutace množiny přirozených čísel {1, 2, ..., N}, přičemž jednotlivá čísla jsou na vstupu od sebe oddělena mezerami.

Program k zadané permutaci určí permutaci bezprostředně po ní následující v lexikografickém uspořádání. Výslednou permutaci vypíše do jednoho řádku na standardní výstup, její jednotlivé členy budou na výstupu opět odděleny mezerami. Pokud byla na vstupu zadána poslední permutace v lexikogafickém uspořádání a následující permutace tedy neexistuje, program vypíše pouze znakový řetězec NEEXISTUJE

EN:
A permutation of an N-element set of natural numbers {1, 2, ..., N} refers to any arrangement of the elements in that set. The given set has N! (N factorial) different permutations. All permutations of the set can be ordered using lexicographic ordering, which means arranging them in the same way words are ordered in a dictionary. The order of two chosen permutations is determined by their first element, and if the first elements are the same, then the second element is considered, and so on. The first permutation in lexicographic order is (1, 2, ..., N), and the last permutation is (N, N-1, ..., 2, 1).

// The first line of the standard input contains a positive integer N, which is not greater than 100. The second line contains a permutation of the set of natural numbers {1, 2, ..., N}, with individual numbers separated by spaces.

// The program will determine the permutation immediately following the given permutation in lexicographic order. It will output the resulting permutation in one line to the standard output, with individual elements separated by spaces. If the input permutation is the last one in lexicographic order and there is no subsequent permutation, the program will output the string "NEEXISTUJE" (which means "DOES NOT EXIST" in Czech).

Note: The program's task is to find the next permutation in lexicographic order, which can be achieved by using algorithms like the next lexicographical permutation algorithm.
