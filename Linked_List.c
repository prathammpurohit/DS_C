#include<stdio.h>
#include<stdlib.h>

struct Node{
    int val;
    struct Node *next;
}*head=NULL;

int create(int *a,int n){
    struct Node *p,*last=head;

    int i=1;
    for(i=1;i<n;i++){
        p=(struct Node*)malloc(sizeof(struct Node));
        p->val=a[i];
        p->next=NULL;

        last->next=p;
        last=p;
    }
    return 0;
}

int display(struct Node *t){
    if(t){
        printf("\nNode's value is %3d",t->val);
        display(t->next);
    }
    return 0;
}

int reverse_display(struct Node *t){
    if(t){
        display(t->next);
        printf("\nNode's value is %3d",t->val);
    }
    return 0;
}

int count(struct Node *t){
    if(t){
        return count(t->next)+1;
    }
    return 0;
}

int main(){
    head=(struct Node*)malloc(sizeof(struct Node));
    int a[]={1,2,3,4};
    create(a,4);
    display(head);
    printf("\n\nCount of nodes is %3d",count(head));
    return 0;
}
