#include<stdio.h>
void main()
{
int j=0;


printf("Come let us play the game of Kaun Banega Crorepati\n");

   
one:
printf("\n1. What is the name of the writer of hamlet?\n 1. william wordsworth 2. daniel defoe\n 3. william shakespeare 4. dan brown\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 1:
case 2:
case 4:printf("wrong answer you have won Rs 0\n");
goto end;
case 3:printf("right answer you have won Rs 2000\n");
goto two;
case 5:printf("the correct option is either 1 or 3\n");
goto one;
case 6:printf("the audience has given most votes to 3\n");
goto one;
case 7: goto end;
default: printf("invalid");
goto one;

}




two:
printf("\n2. What is the capital of Madhya pradesh?\n 1. Indore 2.ooty \n 3. Gangtok 4.Bhopal\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 1:
case 2:
case 3:printf("wrong answer you have won Rs 2000\n");
goto end;
case 4:printf("right answer you have won Rs 5000\n");
goto three;
case 5:printf("the correct option is either 4 or 3\n");
goto two;
case 6:printf("the audience has given most votes to 4\n");
goto two;
case 7: goto end;
default: printf("invalid");
goto two;

}





three:
printf("\n3. Where is the bermuda triangle?\n 1. Indian ocean 2.pacific ocean \n 3. Atlantic ocean 4.Gulf sea\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 1:
case 2:
case 4:printf("wrong answer you have won Rs 5000\n");
goto end;
case 3:printf("right answer you have won Rs 10000\n");
goto four;
case 5:printf("the correct option is either 3 or 2\n");
goto three;
case 6:printf("the audience has given most votes to 3\n");
goto three;
case 7: goto end;
default: printf("invalid");
goto three;

}




four:
printf("\n4. When did India become a republic?\n 1. 1951 2.1950 \n 3. 1947 4.1956\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 1:
case 3:
case 4:printf("wrong answer you have won Rs 10000\n");
goto end;
case 2:printf("right answer you have won Rs 20000\n");
goto five;
case 5:printf("the correct option is either 1 or 2\n");
goto four;
case 6:printf("the audience has given most votes to 2\n");
goto four;
case 7: goto end;
default: printf("invalid");
goto four;

}






five:
printf("\n5. What was the name of famous book by dante?\n 1. the tragic comedy 2.rozabal line \n 3.  2 states 4.inferno\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 2:
case 3:
case 4:printf("wrong answer you have won Rs 20000\n");
goto end;
case 1:printf("right answer you have won Rs 50000\n");
goto six;
case 5:printf("the correct option is either 1 or 2\n");
goto five;
case 6:printf("the audience has given most votes to 1\n");
goto five;
case 7: goto end;
default: printf("invalid");
goto five;

}







six:
printf("\n6. how many wives did akbar have?\n 1. 6 2. 5 \n 3. 4  4. 1 \n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 2:
case 3:
case 4:printf("wrong answer you have won Rs 50000\n");
goto end;
case 1:printf("right answer you have won Rs 100000\n");
goto seven;
case 5:printf("the correct option is either 1 or 2\n");
goto six;
case 6:printf("the audience has given most votes to 1\n");
goto six;
case 7: goto end;
default: printf("invalid");
goto six;

}






seven:
printf("\n7.which indian bussiness group has stake in jaguar?\n 1.wipro 2.mahindra&mahindra 5 \n 3. birla group 4. tata motors \n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter \n");
scanf("%d",&j);
switch(j)
{
case 2:
case 3:
case 1:printf("wrong answer you have won Rs 100000\n");
goto end;
case 4:printf("right answer you have won Rs 250000\n");
goto eight;
case 5:printf("the correct option is either 1 or 4\n");
goto seven;
case 6:printf("the audience has given most votes to 4\n");
goto seven;
case 7: goto end;
default: printf("invalid");
goto seven;

}





eight:
printf("\n8.when was indian congress formed ?\n 1.1885 2.1913  \n 3.1917 4. 1932 \n ");
printf("enter 5 for 50:50 and 6 for audience poll \n");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 2:
case 3:
case 4:printf("wrong answer you have won Rs 250000\n");
goto end;
case 1:printf("right answer you have won Rs 500000\n");
goto nine;
case 5:printf("the correct option is either 1 or 2\n");
goto eight;
case 6:printf("the audience has given most votes to 1\n");
goto eight;
case 7: goto end;
default: printf("invalid");
goto eight;

}






nine:
printf("\n9.how many prime no.s are between 1 and 100 ?\n 1.22 2.21  \n 3.25 4. 26 \n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 2:
case 1:
case 4:printf("wrong answer you have won Rs 500000\n");
goto end;
case 3:printf("right answer you have won Rs 1000000\n");
goto ten;
case 5:printf("the correct option is either 3 or 2\n");
goto nine;
case 6:printf("the audience has given most votes to 3\n");
goto nine;
case 7: goto end;
default: printf("invalid");
goto nine;

}




ten:
printf("\n10.On what date did titanic sank ?\n 1.15/04 2.13/05 \n 3.23/09 4. 26 /11\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 3:
case 2:
case 4:printf("wrong answer you have won Rs 1000000\n");
goto end;
case 1:printf("right answer you have won Rs 2500000\n");
goto eleven;
case 5:printf("the correct option is either 1 or 2\n");
goto ten;
case 6:printf("the audience has given most votes to 1\n");
goto ten;
case 7: goto end;
default: printf("invalid");
goto ten;

}


eleven:
printf("\n11.who is prime minister of japan ?\n 1.xi jingping 2. shinzo abe \n 3.narendra modi 4. kim jong un\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 3:
case 1:
case 4:printf("wrong answer you have won Rs 2500000\n");
goto end;
case 2:printf("right answer you have won Rs 5000000\n");
goto tweleve;
case 5:printf("the correct option is either 4 or 2\n");
goto eleven;
case 6:printf("the audience has given most votes to 2\n");
goto eleven;
case 7: goto end;
default: printf("invalid");
goto eleven;

}




tweleve:
printf("\n12.who is president of india ?\n 1.xi jingping 2. shinzo abe \n 3.ram nath kovind 4. kim jong un\n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 1:
case 2:
case 4:printf("wrong answer you have won Rs 5000000\n");
goto end;
case 3:printf("right answer you have won Rs 10000000\n");
goto thirteen;
case 5:printf("the correct option is either 4 or 3\n");
goto tweleve;
case 6:printf("the audience has given most votes to 3\n");
goto tweleve;
case 7: goto end;
default: printf("invalid");
goto tweleve;

}




thirteen:
printf("\n13.who was 1st president of india  ?\n 1. sardar patel 2. rajendra prasad \n 3.ram nath kovind 4. kim jong un\n ");
printf("enter 5 for 50:50 and 6 for audience poll \n");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 1:
case 3:
case 4:printf("wrong answer you have won Rs 10000000\n");
goto end;
case 2:printf("right answer you have won Rs 20000000\n");
goto fourteen;
case 5:printf("the correct option is either 4 or 2\n");
goto thirteen;
case 6:printf("the audience has given most votes to 2\n");
goto thirteen;
case 7: goto end;
default: printf("invalid");
goto thirteen;

}





fourteen:
printf("\n14.which is india's highest civil honor  ?\n 1. bharat ratna  2. paramvir chakra \n 3.kirti chakra 4. mahavir chakra \n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 2:
case 3:
case 4:printf("wrong answer you have won Rs 20000000\n");
goto end;
case 1:printf("right answer you have won Rs 50000000\n");
goto fifteen;
case 5:printf("the correct option is either 3 or 1\n");
goto fourteen;
case 6:printf("the audience has given most votes to 1\n");
goto fourteen;
case 7: goto end;
default: printf("invalid");
goto fourteen;

}





fifteen:
printf("\n15.which neighbour of india is carbon emission positive  ?\n 1. china 2. sri lanka \n 3.bhutan 4.myanammar \n ");
printf("enter 5 for 50:50 and 6 for audience poll\n ");
printf("to quit the game enter 7\n");
scanf("%d",&j);
switch(j)
{
case 2:
case 3:
case 4:printf("wrong answer you have won Rs 50000000\n");
goto end;
case 1:printf("right answer you have won Rs 100000000\n");
goto end;
case 5:printf("the correct option is either 3 or 1\n");
goto fifteen;
case 6:printf("the audience has given most votes to 3\n");
goto fifteen;
case 7: goto end;
default: printf("invalid");
goto fifteen;

}


end: 
printf("thank you for playing the game .\n");
 
}
