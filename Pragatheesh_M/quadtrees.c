#include <stdio.h>
#include <stdlib.h>

#define CAPACITY 4

// Point structure
typedef struct {
    int x, y;
} Point;

// Boundary structure
typedef struct {
    int x, y;
    int w, h;
} Boundary;

// Quadtree node
typedef struct Quadtree {
    Boundary boundary;
    Point *points[CAPACITY];
    int count;

    int divided;

    struct Quadtree *nw;
    struct Quadtree *ne;
    struct Quadtree *sw;
    struct Quadtree *se;

} Quadtree;

// Create node
Quadtree* createQuadtree(Boundary boundary) {
    Quadtree *qt = (Quadtree*)malloc(sizeof(Quadtree));
    qt->boundary = boundary;
    qt->count = 0;
    qt->divided = 0;
    qt->nw = qt->ne = qt->sw = qt->se = NULL;
    return qt;
}

// Check boundary
int contains(Boundary b, Point *p) {
    return (p->x >= (b.x - b.w) &&
            p->x <= (b.x + b.w) &&
            p->y >= (b.y - b.h) &&
            p->y <= (b.y + b.h));
}

// Subdivide
void subdivide(Quadtree *qt) {
    int x = qt->boundary.x;
    int y = qt->boundary.y;
    int w = qt->boundary.w / 2;
    int h = qt->boundary.h / 2;

    qt->nw = createQuadtree((Boundary){x - w, y - h, w, h});
    qt->ne = createQuadtree((Boundary){x + w, y - h, w, h});
    qt->sw = createQuadtree((Boundary){x - w, y + h, w, h});
    qt->se = createQuadtree((Boundary){x + w, y + h, w, h});

    qt->divided = 1;
}

// Insert point
int insert(Quadtree *qt, Point *p) {
    if (!contains(qt->boundary, p))
        return 0;

    if (qt->count < CAPACITY) {
        qt->points[qt->count++] = p;
        return 1;
    }

    if (!qt->divided)
        subdivide(qt);

    if (insert(qt->nw, p)) return 1;
    if (insert(qt->ne, p)) return 1;
    if (insert(qt->sw, p)) return 1;
    if (insert(qt->se, p)) return 1;

    return 0;
}

// Display tree
void display(Quadtree *qt, int level) {
    if (qt == NULL) return;

    printf("Level %d: ", level);
    for (int i = 0; i < qt->count; i++) {
        printf("(%d,%d) ", qt->points[i]->x, qt->points[i]->y);
    }
    printf("\n");

    if (qt->divided) {
        display(qt->nw, level + 1);
        display(qt->ne, level + 1);
        display(qt->sw, level + 1);
        display(qt->se, level + 1);
    }
}

// Main function with user input
int main() {
    int n, x, y;

    Boundary boundary = {0, 0, 100, 100};
    Quadtree *qt = createQuadtree(boundary);

    printf("Enter number of points: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        Point *p = (Point*)malloc(sizeof(Point));

        printf("Enter x and y for point %d: ", i + 1);
        scanf("%d %d", &x, &y);

        p->x = x;
        p->y = y;

        if (!insert(qt, p)) {
            printf("Point (%d,%d) is outside boundary!\n", x, y);
            free(p);
        }
    }

    printf("\nQuadtree Structure:\n");
    display(qt, 0);

    return 0;
}