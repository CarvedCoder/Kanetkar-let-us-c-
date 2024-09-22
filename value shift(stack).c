#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int is_empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int is_full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (is_full(ptr))
    {
        printf("\nOverflow! cannot push %d into the stack\n\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("\nSuccesfully pushed %d into the stack\n\n", val);
    }
}
int pop(struct stack *ptr)
{
    if (is_empty(ptr))
    {
        printf("\nNo elements left inside the stack\n\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("\nSuccesfully poped %d from the stack\n\n", val);
        return val;
    }
}
int show(struct stack *sp, int x)
{
    if (sp->top - x < 0)
    {
        printf("\nInvalid num");
        return -1;
    }
    else
    {
        return sp->arr[sp->top - x];
    }
}

void stack_shift_anticlockwise(struct stack *sp, int ans)
{
    ans = ans % (sp->top + 1);
    int temp[ans];
    for (int i = 0; i < ans; i++)
    {
        temp[i] = sp->arr[sp->top - i];
    }
    for (int i = sp->top; i >= ans; i--)
    {
        sp->arr[i] = sp->arr[i - ans];
    }
    for (int i = 0; i < ans; i++)
    {
        sp->arr[(ans - 1) - i] = temp[i];
    }
}

void stack_shift_clockwise(struct stack *sp, int ans)
{
    ans = ans % (sp->top + 1);
    int temp[ans];
    for (int i = 0; i < ans; i++)
    {
        temp[i] = sp->arr[i];
    }
    for (int i = 0; i < sp->top; i++)
    {
        sp->arr[i] = sp->arr[ans + i];
    }
    for (int i = 0; i < ans; i++)
    {
        sp->arr[sp->top - (ans - 1 - i)] = temp[i];
    }
}

int main(void)
{
    int choice, ans, value;
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    sp->top = -1;
    sp->size = 100;
    printf("\nSIZE OF THE STACK IS 100 \n\n");
    while (1)
    {
        printf("---------------------------------------MENU---------------------------------------\n");
        printf("what do you want to do?\n(1) -> Push elements into the stack\n(2) -> Pop elements from the stack\n(3) -> Show the stack\n(4) -> Shift values circuraly in the stack\n(5) -> Exit\n");
        printf("----------------------------------------------------------------------------------\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("How many values do you want to push into the stack : ");
            scanf("%d", &ans);
            for (int i = 0; i < ans; i++)
            {
                printf("element %d of the stack will be : ", sp->top + 1);
                scanf("%d", &value);
                push(sp, value);
            }
            break;
        case 2:
            if (is_empty(sp))
            {
                printf("\nNo elements are present in the stack to pop\n\n");
                break;
            }
            printf("How many values do you want to pop from the stack : ");
            scanf("%d", &ans);
            for (int i = 0; i < ans; i++)
            {
                pop(sp);
            }
            break;
        case 3:
            for (int i = 0; i <= sp->top; i++)
            {
                printf("Element %d of the stack is %d\n",sp->top, show(sp, i));
            }
            break;
        case 4:
            printf("what do you want to do?\n\n(1)Shift values clockwise\n(2)shift values anticlockwise\n\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("\nHow many places do you want to shift the stack clockwise : ");
                scanf("%d", &ans);
                stack_shift_clockwise(sp, ans);
                printf("\n\n");
                break;

            case 2:
                printf("\nHow many places do you want to shift the stack anticlockwise: ");
                scanf("%d", &ans);
                stack_shift_anticlockwise(sp, ans);
                printf("\n\n");
                break;
            }
            break;

        case 5:
            return 0;
        }
    }
}
