#include<stdio.h>
// #define SENT 4 
int arr[10];
int chk1 = 0;
int chk2 = 0;
// int size = sizeof(arr)/sizeof(int);
// int count_ele = 0;

// Choice 1: Function to traverse in array
void traverseArray(int arr[], int *count_ele){
    printf("\n\t\t-------WELCOME TO ARRAY TRAVERSAL--------\n\n");
    if((*count_ele) == 0){
        printf("OOPS!!\n");
        printf("Array is Empty\n\n");
        return;
    }
    else{
        printf("Elements Present in the array are: \n");
        for (int i = 0; i < (*count_ele); i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}

// Choice 2: Function to insert element in array
void insetInArray(int arr[], int *count_ele,int size){
    printf("\t\t-------WELCOME TO ELEMENT INSERTION in ARRAY--------\n\n");
    // Checking Array Overflow Case
    if((*count_ele)>size){
        printf("Array Overflow\n");
        return;
    }

    while((*count_ele)<=size){
        printf("How many elements you want to insert in your array?\n");
        int num;
        scanf("%d",&num);
        if(num == 0){
            return;
        }
        chk1 = *count_ele;
        (*count_ele) += num;
        if((*count_ele)>size){
            printf("Array Overflow\n");
            (*count_ele) = chk1;
            return;
        }
        else{
            printf("Enter any '%d' integers in your array\n",num);
            for(int i=chk2;i<(*count_ele);i++){
                scanf("%d",&arr[i]);
            }
            chk2 = (*count_ele);
            return;
        }
    }
}

// Choice 3: Delete from the array
void deleteFromArray(int arr[], int *count_ele){
    printf("\t\t-------WELCOME TO ELEMENT DELETION in ARRAY--------\n\n");
    // Checking Array Underflow Case
    if((*count_ele) == 0){
        printf("Array Underflow: Array is EMPTY\n");
        return;
    }
    //Printing the array before deletion to make it easy for the user
    printf("Elements Present in the array are: \n");
        for (int i = 0; i < (*count_ele); i++){
            printf("%d ",arr[i]);
        }

    //Code for deletion
    printf("\n\nInsert the position you want to delete from the array\n");
    int pos;
    printf("Position: ");
    scanf("%d",&pos);
    if(pos>(*count_ele)){
        printf("Invalid Position\nDeletion is not possible in the array\n");
        return;
    }
    else{
        int index = pos - 1;
        (*count_ele) -= 1;
         // use for loop to delete the element and update the index  
        for(int i = index; i < (*count_ele); i++)  {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]   
        }  
        printf ("\nThe resultant array is: \n");
        for(int i=0;i<(*count_ele);i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        return; 
    }

}

// Choice 4: Linear Search in array
int LinearSearch(int arr[], int *count_ele){
    printf("\t\t-------WELCOME TO LINEAR SEARCH in ARRAY--------\n\n");
    if((*count_ele) == 0){
        printf("Array is Empty. Cannot Search in it\n");
        return -1;
    }
    else{
        printf("Enter the element you are Searching for\n");
        int key;
        printf("Element: ");
        scanf("%d",&key);
        for(int  i = 0;i<(*count_ele);i++){
            if(arr[i] == key){
                return i+1;
            }
        }
        return -1;
    }
}

//Choice 5: Selection Sorting the array
void SelectionSort(int arr[], int *count_ele){
    printf("\t\t-------WELCOME TO SELECTION SORT in ARRAY--------\n\n");
    if((*count_ele)==0){ 
        printf("Array UnderFlow: Array is Empty");
        return;
    }
    // Printing original array
    printf("Array BEFORE Sorting\n");
    for(int i=0;i<(*count_ele);i++){
                printf("%d ",arr[i]);
    }
    printf("\n");

    //Sorting the array
    for(int i = 0;i<(*count_ele)-1;i++){
        int minIndex = i;
        for(int j = i+1;j<(*count_ele);j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    //Printing the sorted array
    printf("\nArray AFTER Sorting\n");
    for(int i=0;i<(*count_ele);i++){
                printf("%d ",arr[i]);
    }
    printf("\n");

    return;
}

//Main includes on the menu code and choice calling
int main(){
    int size = sizeof(arr)/sizeof(int);
    int count_ele = 0;
    // Option for whether to start in the menu or not
    printf("\n\t\t\t\t****** WELCOME USER *******\n\n");
    printf("Are you ready to deep-dive into the world of ARRAY\n");
    printf("Do you want to play with ARRAY?\n");
    printf("Enter 'y' to START else 'n' to EXIT\n");

    char option;
    printf("Your choice: ");
    scanf("%s",&option);

    //Loop to print menu again and again
    while(option !='n'){
        // MENU
        printf("\n\t\t\t\t------- WELCOME TO THE MENU -------\n");
        printf("\t1. Traverse in the array\n");
        printf("\t2. Insert in the array\n");
        printf("\t3. Delete in the array\n");
        printf("\t4. Linear Search in the array\n");
        printf("\t5. Selection Sort in the array\n");
        printf("\t6. Exit\n\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");

        //Switch case code to call functions according to choice of user
        switch (choice)
        {
        case 1:
            if(choice == 1){
                traverseArray(arr,&count_ele);
            }
            break;
        case 2:
            if(choice == 2){
                insetInArray(arr,&count_ele,size);
            }
            break;
        case 3:
            if(choice == 3){
                deleteFromArray(arr,&count_ele);
            }
            break;
        case 4:
            if(choice == 4){
                int ans = LinearSearch(arr,&count_ele);
                if(ans == -1){
                    printf("The given Element is NOT Present in the array\n");
                }else{
                    printf("The given Element is Present in the array at position: %d \n",ans);
                }
            }
            break;
        case 5:
            if(choice == 5){
                SelectionSort(arr,&count_ele);
            }
            break;
        case 6:
            if(choice == 6){
                printf("Are you sure you want to exit?\n");
                printf("Enter 'y' to EXIT else 'n' to CONTINUE\n");
                char temp;
                scanf("%s",&temp);
                if(temp == 'y'){
                    printf("\n\t\t\tWe are Sad you are leaving us so soon!!\n");
                    printf("\t\t\t\tGOODBYE!!\n");
                    printf("\t\t\tHOPE YOU HAD A GREAT TIME!!\n");
                    printf("\t\t\tPLEASE VISIT US AGAIN!!\n\n");
                    option = 'n';
                }
                else if(temp == 'n'){
                    option = 'y';   
                }
                
            }
            break;
        
        default:
            printf("\tInvalid Expression\n");
            printf("\tInput a valid option from the menu\n\n");
            break;
        }
    }
    return 0;
}