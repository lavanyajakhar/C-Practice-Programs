// #include<stdio.h>
// #include<conio.h>                        //DSA LINKED LIST
// #include<stdlib.h>
// struct node
// {
//     int info;
//     struct node *next;
// }; *start=NULL;

// void create(int num1){
//     struct node *q, *newnode;
//     if(start==NULL){    //first node
//         start=(struct node*)malloc(sizeof(struct node));
//         start->info=num1;
//         start->next=NULL;
//     }
//     else{            //if first node already exists
//         q=start;
//         while(q!=NULL){
//             q=q->next;
//         }
//         newnode=(struct node*)malloc(sizeof(struct node));
//         newnode->info=num1;
//         newnode->next=NULL;
//         q->next=newnode;
//     }
// }
// void display(){
//     struct node *q;
//     if(start==NULL){
//         printf("List is empty");
//     }
//     else{
//         q=start;
//         while(q!=NULL){
//             printf("%d ", q->info);
//             q=q->next;
//         }
//     }
// }

// void addatfirst(int num1){
//     struct node *newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->info=num1;
//     newnode->next=start;
//     start=newnode;
// }

// void addatpos(int pos, int num1){
//     struct node *newnode, *q;
//     int i;
//     q=start;
//     for(i=1; i<pos-1;i++){
//         q=q->next;
//     }
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->info=num1;
//     newnode->next=q->next;
//     q->next=newnode;
// }

// void deletebypos(int pos){
//     struct node *q, *temp;
//     int i;
//     q=start;
//     for(i=1; i<pos-1;i++){
//         q=q->next;
//     }
//     temp=q->next;
//     q->next=temp->next;
//     free(temp);
// }



