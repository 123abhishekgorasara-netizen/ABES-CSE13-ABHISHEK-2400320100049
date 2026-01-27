#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_RECIPES 20
#define MAX_NAME_LEN 50
#define MAX_INGREDIENTS 10
#define INF 1000000

typedef struct {
    char result[MAX_NAME_LEN];
    int numIngredients;
    char ingredients[MAX_INGREDIENTS][MAX_NAME_LEN];
} Recipe;

Recipe recipes[MAX_RECIPES];
int N;
char target[MAX_NAME_LEN];

// Memoization
typedef struct {
    char name[MAX_NAME_LEN];
    int cost;
} Memo;

Memo memo[100];
int memoCount = 0;

int getMemo(char *name) {
    for (int i = 0; i < memoCount; i++) {
        if (strcmp(memo[i].name, name) == 0)
            return memo[i].cost;
    }
    return -1;
}

void setMemo(char *name, int cost) {
    strcpy(memo[memoCount].name, name);
    memo[memoCount].cost = cost;
    memoCount++;
}

int minOrbs(char *potion) {
    int cached = getMemo(potion);
    if (cached != -1) return cached;

    int minCost = INF;
    int found = 0;

    for (int i = 0; i < N; i++) {
        if (strcmp(recipes[i].result, potion) == 0) {
            found = 1;
            int cost = recipes[i].numIngredients - 1;
            for (int j = 0; j < recipes[i].numIngredients; j++) {
                int subCost = minOrbs(recipes[i].ingredients[j]);
                cost += subCost;
            }
            if (cost < minCost) minCost = cost;
        }
    }

    if (!found) {
        // It's a base item
        setMemo(potion, 0);
        return 0;
    }

    setMemo(potion, minCost);
    return minCost;
}

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char line[300];
        scanf("%s", line);

        char *token = strtok(line, "=");
        strcpy(recipes[i].result, token);

        token = strtok(NULL, "+");
        recipes[i].numIngredients = 0;
        while (token != NULL) {
            strcpy(recipes[i].ingredients[recipes[i].numIngredients++], token);
            token = strtok(NULL, "+");
        }
    }

    scanf("%s", target);
    printf("%d\n", minOrbs(target));
    return 0;
}
