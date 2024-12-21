#include <stdio.h>
#include <stdlib.h>
#include "ft_point.h"

/* 创建新节点的函数 */
t_point *create_point(int x, int y)
{
    /* 分配内存 */
    t_point *new_point = (t_point *)malloc(sizeof(t_point));
    if (!new_point)
        return NULL;
    
    /* 初始化节点数据 */
    new_point->x = x;
    new_point->y = y;
    new_point->next = NULL;  /* 新节点的next初始化为NULL */
    
    return new_point;
}

/* 在链表末尾添加节点 */
void append_point(t_point **head, int x, int y)
{
    t_point *new_point = create_point(x, y);
    if (!new_point)
        return;
    
    /* 如果链表为空 */
    if (*head == NULL)
    {
        *head = new_point;
        return;
    }
    
    /* 找到最后一个节点 */
    t_point *current = *head;
    while (current->next != NULL)
        current = current->next;
    
    /* 在末尾添加新节点 */
    current->next = new_point;
}

/* 打印链表中的所有点 */
void print_points(t_point *head)
{
    t_point *current = head;
    int i = 0;
    
    while (current != NULL)
    {
        printf("点 %d: (%d, %d)\n", i++, current->x, current->y);
        current = current->next;
    }
}

/* 释放链表内存 */
void free_points(t_point *head)
{
    t_point *current = head;
    t_point *next;
    
    while (current != NULL)
    {
        next = current->next;  /* 保存下一个节点 */
        free(current);         /* 释放当前节点 */
        current = next;        /* 移动到下一个节点 */
    }
}

int main(void)
{
    t_point *points = NULL;  /* 初始化空链表 */
    
    /* 添加几个点 */
    append_point(&points, 42, 21);
    append_point(&points, 10, 20);
    append_point(&points, 30, 40);
    
    /* 打印所有点 */
    printf("链表中的所有点：\n");
    print_points(points);
    
    /* 清理内存 */
    free_points(points);
    
    return (0);
}