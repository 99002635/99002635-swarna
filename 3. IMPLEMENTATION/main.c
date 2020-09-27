#include <header.h>


void main()
 {
   char ans;
   int ch;
   screenheader();
   intro();
   do
     {
       screenheader();
       printf("\n\n\n                      Choose a category:\n");
       printf("                        1. Get availability\n");
       printf("                     2. Features of room\n");
       printf("                        3. Room allocation\n");
       printf("           4. Show customer details\n");
       printf("           5. Restaurant\n");
       printf("                        6. Cancellation\n");
       printf("                        7. Room Deallocation\n");
       printf("                 8. Exit\n");
       scanf("%d",&ch);
       switch(ch)
   {
     case 1:getavail();
     putavail();
     break;
     case 2:features();
     break;
     case 3:allocate();
     break;
     case 4:putcust();
     break;
     case 5:restaurant();
     break;
     case 6:cancel();
     break;
     case 7:deallocate();
     break;
     case 8:exit(0);
     default:printf("\n\n\nWrong choice!!!!\n\nPlease choose 1-6");
      getch();
   }
 printf("\n\nDo you want to continue:");
 fflush(stdin);
 scanf("%c",&ans);
     }while(ans=='y'||ans=='Y');
 }
