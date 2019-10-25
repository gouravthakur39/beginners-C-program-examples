//ARRAY simple operations
#include<stdio.h>
#include<stdlib.h>

int arr[100],i,j,position,n,element,choice;

void menu();

void insertion(){
    printf("ENTER THE POSITION YOU WANT TO ENTER THE ELEMENT");
    scanf("%d",&position);
    position=position-1;
    if(position>n-1){
        printf("\n INVALID POSITION\n");
        menu();
    }
    printf("ENTER THE ELEMENT ");
    scanf("%d",&element);
    for(i=n;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    n=n+1;
    menu();
}

void traversing(){
    printf("\n THE ARRAY ENTERED IS:--\n");
    for(i=0;i<n;i++){
       printf("%d\t",*(arr+i));
    }
    menu();
}

void deletion(){
    printf("ENTER THE POSITION OF THE ELEMENT TO BE DELETED");
    scanf("%d",&position);
    position=position-1;
        if(position>n-1){
        printf("\n INVALID POSITION\n");
        menu();
    }
    for(i=position;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("ELEMENT IS DELETED!!!\n");
    n=n-1;
    menu();
}

void updation(){
    printf("ENTER THE POSITION WHERE U WANT TO UPDATE");
    scanf("%d",&position);
    if(position>n){
        printf("\n INVALID POSITION\n");
        menu();
    }
    printf("\n ENTER THE ELEMENT :-");
    scanf("%d",&element);
    arr[position]=element;

}

void linear_search(){
    printf("ENTER THE ELEMENT YOU WANT TO SEARCH\n");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(arr[i] == element){
            printf("ELEMENT FOUND AT THE POSITION %d\n\n",i+1);
            choice=20;
            break;
        }
    }
    if(choice!=20){
        printf("\nELEMNT NOT FOUND!!!");
    }
    menu();
}
bubble_sort_algo(){
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
}
void bubble_sort(){
    bubble_sort_algo();
    printf("\nTHE ARRAY HAS BEEN SORTED\n");
    menu();
}

void binary_search(){
    printf("ENTER THE ELEMENT YOU WANT TO SEARCH\n");
    scanf("%d",&element);
    int beg,mid,end,check;
    check=0;
    beg=0;
    end=n-1;
    bubble_sort_algo();
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==element){
            printf("ELEMENT FOUND AT POSITION: %d, AFTER THE SORTING",mid+1);
            check=10;
            break;
        }
        else if(arr[mid]>element){
            end = mid-1;
        }
        else if(arr[mid]<element){
            beg = mid+1;
        }
    }
    if(check!=10){
        printf("ELEMENT NOT FOUND IN THE ARRAY!!!");
    }
    menu();
}

selection_sort(){
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }
    printf("ARRAY IS SORTED");
    menu();
}


void menu(){
       while(1){
            printf("\n1. INSERTION\t 2. UPDATION\t 3. TRAVERSING\t 4. DELETION\t 5.EXIT\t 6. RECREATE THE ARRAY \n");
            printf("7. LINEAR SEARCH\t 8. BUBBLE SORT\t 9. BINARY SEARCH\t 10. SELECTION SORT\n\n");
            scanf("%d",&choice);
            switch(choice){
                case 1:
                    insertion();
                    break;
                case 2:
                    updation();
                    break;
                case 3:
                    traversing();
                    break;
                case 4:
                    deletion();
                    break;
                case 5:
                    exit(1);
                case 6:
                    main();
                    break;
                case 7:
                    linear_search();
                    break;
                case 8:
                    bubble_sort();
                    break;
                case 9:
                    binary_search();
                    break;
                case 10:
                    selection_sort();
                    break;
                default:
                    menu();
                    break;
            }
        }

}

int main(){

    printf("ENTER THE ELEMENTS OF ARRAY");
    i=0;
    while(1){
    printf("\nENTER THE ELEMENT:-\n");
    scanf("%d",arr+i);
    printf("\nDO YOU WANT TO ENTER ANOTHER ELEMENT PRESS ANY KEY ELSE PRESS 1\n");
    scanf("%d",&choice);
    if(choice == 1){
        n=i+1;
        menu();
    }
    i++;
   }

   return 0;
}
