/*
Parking Capacity : Total Slots : 10
	
	Available Slots --  : 10
	OcuuppiedSlots ++   :  0
	
	Available Slots --  :  0
	OcuuppiedSlots ++   : 10
*/
#include <stdio.h>

int main()
{
    int totalSlots;
    int availableSlots;
    int occupiedSlots = 0;
    int choice;

    printf("Enter Total slots : ");
    scanf("%d",&totalSlots);

    availableSlots = totalSlots;

    printf("1) Add a Vehicle\n2) Remove a Vehicle\n3) View Slot Status\n4) Exit");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("ADD A VEHICLE\n");
    }
    else if(choice == 2)
    {
        printf("REMOVE A VEHICLE\n");
    }
    else if(choice == 3)
    {
        printf("VIEW SLOT STATUS\n");
    }
    else if(choice == 4)
    {
        printf("EXIT\n");
    }
    else
    {
        printf("Wrong Choice....\n");
    }

    return 0;
}