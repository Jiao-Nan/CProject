#include "linklist.h"
#include <stdio.h>
#include <stdlib.h>

linklist list_create() {
    linklist H;
    H = (linklist) malloc(sizeof(listnode));
    if (H == NULL) {
        printf("malloc failed!\n");
        return H;
    }
    H->data = 0;
    H->next = NULL;
    return H;
}

int list_tail_insert(linklist H, data_t value) {
    linklist p, q;
    if (H == NULL) {
        printf("H is NULL\n");
        return -1;
    }
    if ((p = (linklist) malloc(sizeof(listnode))) == NULL) {
        printf("malloc failed\n");
        return -1;
    }
    p->data = value;
    p->next = NULL;
    q = H;
    while (q->next)
        q = q->next;
    q->next = p;
    return 0;
}

int list_show(linklist H) {
    linklist p;
    p = H;
    while (p->next) {
        printf("%d ", p->next->data);
        p = p->next;
    }
    puts("");
    return 0;
}

linklist list_get(linklist H, int pos) {
    linklist p;
    int i = -1;
    if (H == NULL) {
        printf("H is NULL\n");
        return H;
    }
    if (pos == -1)
        return H;
    if (pos < -1) {
        printf("pos is invalid\n");
        return NULL;
    }
    p = H;
    for (i = -1; i < pos; i++) {
        p = p->next;
        if (p == NULL) {
            printf("pos is invalid\n");
            return NULL;
        }
    }
    return p;
}

int list_insert(linklist H, data_t value, int pos) {
    linklist p, q;
    if (H == NULL) {
        printf("H is NULL\n");
        return -1;
    }
    p = list_get(H, pos - 1);
    if (p == NULL) {
        return -1;
    }
    if ((q = (linklist) malloc(sizeof(listnode))) == NULL) {
        printf("malloc failed\n");
        return -1;
    }
    q->data = value;
    q->next = p->next;
    p->next = q;
    return 0;
}

int list_delete(linklist H, int pos) {
    linklist p, q;
    if (H == NULL) {
        printf("H is NULL\n");
        return -1;
    }
    if ((p = list_get(H, pos - 1)) == NULL)
        return -1;
    if (p->next == NULL) {
        printf("delete pos is invalid\n");
        return -1;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    q = NULL;
    return 0;
}

linklist list_free(linklist H) {
    if (H == NULL)
        return NULL;
    linklist p;
    printf("free:");
    while (H) {
        p = H;
        H = H->next;
        printf("%d ", p->data);
        free(p);
    }
    puts("");
    return NULL;
}

int list_reverse(linklist H) {
    linklist p, q;
    if (H == NULL) {
        printf("H is NULL\n");
        return -1;
    }
    if (H->next == NULL || H->next->next == NULL)
        return 0;
    p = H->next->next;
    H->next->next = NULL;
    while (p) {
        q = p;
        p = p->next;
        q->next = H->next;
        H->next = q;
    }
    return 0;
}

linklist list_sum_max(linklist H, data_t *value) {
    linklist p, q, r;
    int sum = 0;
    if (H == NULL) {
        printf("H is NULL\n");
        return H;
    }
    if (H->next == NULL || H->next->next == NULL || H->next->next->next == NULL)
        return H;
    p = H->next->next;
    q = H->next;
    r = q;
    sum = p->data + q->data;
    while (p->next) {
        p = p->next;
        q = q->next;
        if ((p->data + q->data) > sum) {
            sum = p->data + q->data;
            r = q;
        }
    }
    *value = sum;
    return r;
}

int list_orderly_union(linklist H1, linklist H2) {
    linklist p, q, r;
    if (H1 == NULL || H2 == NULL) {
        printf("H1 or H2 is NULL");
        return -1;
    }
    p = H1->next;
    q = H2->next;
    r = H1;
    H1->next = NULL;
    H2->next = NULL;
    while (p && q) {
        if (p->data <= q->data) {
            r->next = p;
            p = p->next;
            r = r->next;
            r->next = NULL;
        } else {
            r->next = q;
            q = q->next;
            r = r->next;
            r->next = NULL;
        }
    }
    if (p == NULL)
        r->next = q;
    else
        r->next = p;
    return 0;
}

int list_sort(linklist H) {
    /*linklist p, q, r, s;
    int tmp = 0;
    if (H == NULL) {
        printf("H is NULL\n");
        return -1;
    }
    if (H->next == NULL || H->next->next == NULL)
        return 0;
    p = H->next;
    H->next = NULL;
    r = H;
    while (p) {
        q = p;
        p = p->next;
        q->next = NULL;
        s = p;
        while (s) {
            if (q->data > s->data) {
                tmp = q->data;
                q->data = s->data;
                s->data = tmp;
            }
            s = s->next;
        }
        r->next = q;
        r = r->next;
    }
    return 0;*/

    linklist p, q, r;
    int t;
    if (H == NULL) {
        printf("H is NULL");
        return -1;
    }
    p = H->next;
    H->next = NULL;
    r = H;
    while (p) {
        q = p;
        p = p->next;
        r = H;
        while (r->next && r->next->data < q->data)
            r = r->next;
        q->next = r->next;
        r->next = q;
    }
    return 0;
}

int list_union(linklist H1, linklist H2) {
    linklist p = H1;
    while (p->next)
        p = p->next;
    p->next = H2->next;
    H2->next = NULL;
    free(H2);
    return 0;
}
