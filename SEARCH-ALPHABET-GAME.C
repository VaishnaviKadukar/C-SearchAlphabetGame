/*SEARCH ALPHABET GAME*/
/*Develop by VAISHNAVI KADUKAR*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char string[20];
char option,show,file,me,edit,search;

clrscr();
printf("\n*****************HOW GOOD ARE YOUR EYES*****************");
printf("\n     YOU ARE NOT NORMAL IF YOU ARE SOLVE THESE          ");
printf("\n\nENTER YOU NAME");
scanf("%s",string);
printf("\nPRESS THE S TO VISIT FIRST PUZZEL OF THE GAME LET'S GO"  );
option=getche();
if(option=='S')
{
printf("\n\n                           FIND F                        ");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E F E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E ");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
}
printf("\n\nYOU ARE SUCESSFUL TO FIND F(Y/N)");
option=getche();
if(option=='N')
{
printf("\n\n\nTHE ANSWER OF FIRST LEVEL IS                          ");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E(F)E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E ");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\nE E E E E E E E E E E E E E E E E E E E E E E E E E E E E E");
printf("\n\nSORRY YOU ARE NOT SUCSSFUL TO FIND FIRST PUZZEL OF THE GAME");
printf("\n\nIF YOU WANT YO VISIT SECOND LEVEL THEN PRESS Y");
}
option=getche();
if(option=='Y')
{

printf("\n\n            FIND NUMBER WHICH DIVISIBLE BY 7           ");
printf("\n1 9 8 6 4 2 1 5 4 3 1 G S 4 5 2 U K 1 G S 3 1 3 0 G D 3 2");
printf("\n3 4 5 5 6 4 2 1 F K N F S 3 4 D S R 4 6 8 O P 0 G C A 2 G");
printf("\n4 5 T J G S W E 3 Q N D E 2 5 6 8 4 2 2 F V C Z W 3 5 8 5");
printf("\n4 r 3 8 8 9 2 1 5 9 3 4 3 2 5 n i 0 R W Y I O 5 3 W I 0 6");
printf("\n5 4 3 y 5 h n 8 0 k 4 k f 2 4 1 0 j H R 5 5 F G T 2 1 5 8");
printf("\n4 5 b h 5 5  G D S G J K U D W Q Y I C S A O P B R R 6 53");
printf("\n5 y g 4 3 2 1 8 5 3 2 1 y 8 0 3 2 1 E D S FV VS E W Y 4 4");
printf("\n4 u g j b 4 1 2 9 8 6 4 5 8 l 7 3 G E 4 Y F S U 6 5 3 3 5");
printf("\n4 3 4 9 0 j f 4 3 g 3 n 3 k 9 0 y r T  5 6 4 E S A G D K8");
printf("\n2 1 4 3 g h s a 4 8 6 5 4 3 2 i o 0 T 4 3 5 J D S E Q I O");
printf("\n5 4 3 2 8 h k i o p d 8 9 0 5 4 e 3TY A U O 5 3 1 3 9 6 0");
}
printf("\n\nYOU ARE SUCESSFUL TO FIND DIVISIBLE OF NO 7(Y/N)");
show=getche();
if(show=='N')
{
printf("\n1 9 8 6 4 2 1 5 4 3 1 G S 4 5 2 U K 1 G S 3 1 3 0 G D 3 2");
printf("\n3 4 5 5 6 4 2 1 F K N F S 3 4 D S R 4 6 8 O P 0 G C A 2 G");
printf("\n4 5 T J G S W E 3 Q N D E 2 5 6 8 4 2 2 F V C Z W 3 5 8 5");
printf("\n4 r 3 8 8 9 2 1 5 9 3 4 3 2 5 n i 0 R W Y I O 5 3 W I 0 6");
printf("\n5 4 3 y 5 h n 8 0 k 4 k f 2 4 1 0 j H R 5 5 F G T 2 1 5 8");
printf("\n4 5 b h 5 5  G D S G J K U D W Q Y I C S A O P B R R 6 53");
printf("\n5 y g 4 3 2 1 8 5 3 2 1 y 8 0 3 2 1 E D S FV VS E W Y 4 4");
printf("\n4 u g j b 4 1 2 9 8 6 4 5 8 l(7)3 G E 4 Y F S U 6 5 3 3 5");
printf("\n4 3 4 9 0 j f 4 3 g 3 n 3 k 9 0 y r T  5 6 4 E S A G D K8");
printf("\n2 1 4 3 g h s a 4 8 6 5 4 3 2 i o 0 T 4 3 5 J D S E Q I O");
printf("\n5 4 3 2 8 h k i o p d 8 9 0 5 4 e 3TY A U O 5 3 1 3 9 6 0");
printf("\n\nYOU ARE NOT SUCCESFUL TO SOLVE SECOND PUZZEL OF THE GAME");
printf("\n\nIF YOU WANT TO VISIT THIRD LEVEL THEN PRESS Y         ");
}

show=getche();
if(show=='Y')
{
printf("\n\n                     FIND P                          ");
printf("\n                                RRRRRRRRRRRRRRRRRRRRRRR");
printf("\n                  RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\n        RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRPRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
}
printf("\n\nYOU ARE SUCESSFUL TO FIND OUT P(Y/N)                ");
file=getche();
if(file=='N')
{
printf("\n\n\nTHE ANSWER OF THIRD PUZZEL IS  ");
printf("\n                                RRRRRRRRRRRRRRRRRRRRRRR");
printf("\n                  RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\n        RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRR(P)RRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\nRRRRR   RRRRRRR   RRRRRRRRRRR   RRRRRRRRRRRRRRRRRRRRRRR");
printf("\n\nSORRY YOU ARE NOT SUCESSFUL TO SOLVE THIRD PUZZEL OF THE GAME");
printf("\n\nIF YOU WANT TO VISIT FOURTH LEVEL THEN PRESS Y");
}
file=getche();
if(file=='Y')
{
printf("\n\n                         FIND N                                 ");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMNMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
}
printf("\n\nYOU ARE SUCESSFUL TO FIND N(Y/N)");
me=getche();
if(me=='N')
{
printf("\n\n\nTHE ANSWER OF THE FOURTH PUZZEL IS                 ");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMM(N)MMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMM MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\nMMMMMMMMMMMMMMMMMM                   MMMMMMMMMMMMMMMMMMM");
printf("\n\nSORRY YOU ARE NOT SUCESSFUL TO SOLVE FORTH PUZZEL OF THE GAME");
printf("\n\nIF YOU WANT TO VISIT LAST LEVEL THEN PRESS Y        ");
}
me=getche();
if(me=='Y')
{
printf("\n\n                    FIND ODD ONE   ");
printf("\nXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXX");
printf("\n XXXXXXXXXXX   XXXXXXXXXXXXXXXXXXXXXXX   XXXXXXXXXXXX ");
printf("\n  XXXXXXXXX     XXXXXXXXXXXXXXXXXXXXX      XXXXXXXXX  ");
printf("\n   XXXXXxX       XXXXXXXXXXXXXXXXXXX        XXXXXXX    ");
printf("\n    XXXXX         XXXXXXXXXXXXXXXXX          XXXXX     ");
printf("\n     XXX           XXXXXXXXXXXXXXX            XXX      ");
printf("\n      X             XXXXXXXXXXXXX              X       ");
printf("\n                     XXXXXXXXXXX                        ");
printf("\n                      XXXXXXXXX                         ");
printf("\n                       XXXXXXX                          ");
printf("\n                        XXXXX                           ");
printf("\n                         XXX                            ");
printf("\n                          X                             ");
}
printf("\n\nYOU ARE SUCESSFUL TO FIND ODD ONE(Y/N)");
edit=getche();
if(edit=='N')
{
printf("\n\n\nANSWER OF THE FIFTH PUZZEL IS");
printf("\nXXXXXXXXXXXXX XXXXXXXXXXXXXXXXXXXXXXXXX XXXXXXXXXXXXXX");
printf("\n XXXXXXXXXXX   XXXXXXXXXXXXXXXXXXXXXXX   XXXXXXXXXXXX ");
printf("\n  XXXXXXXXX     XXXXXXXXXXXXXXXXXXXXX      XXXXXXXXX   ");
printf("\n   XXXXX(x)X     XXXXXXXXXXXXXXXXXXX        XXXXXXX"    );
printf("\n    XXXXX         XXXXXXXXXXXXXXXXX          XXXXX     ");
printf("\n     XXX           XXXXXXXXXXXXXXX            XXX      ");
printf("\n      X             XXXXXXXXXXXXX              X       ");
printf("\n                     XXXXXXXXXXX                        ");
printf("\n                      XXXXXXXXX                         ");
printf("\n                       XXXXXXX                          ");
printf("\n                        XXXXX                           ");
printf("\n                         XXX                            ");
printf("\n                          X                             ");
printf("\n\n CAN'T WIN THESE PUZZEL GAME");
printf("\n\n------------------------------------GAME OVER---------------------------------");
}
else if(edit=='Y'){
printf("\n\nCONGRATULATIONS %s",string);
printf("\n\nYOU ARE NOT NORMAL YOU ARE GENIUS ");
printf("\nVERY WELL DONE!!!!");
printf("\n\n------------------------------------GAME OVER---------------------------------");
}

getch();
return 0;
}