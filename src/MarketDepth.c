#include "MarketDepth.h"

#include <stdlib.h>

#include "CheckError/ce.h"

t_market_depth_row *
create_market_depth_row(int user_id, int amount, int price) {
    t_market_depth_row *new_row =
            (t_market_depth_row *)malloc(sizeof(t_market_depth_row));
    new_row->user_id = user_id;
    new_row->amount = amount;
    new_row->price = price;
    return new_row;
}

char clear_market_depth_row(t_market_depth_row *row) {
    free(row);
    return CE_OK;
}

t_market_depth *create_market_depth() {
    t_market_depth *new_market =
            (t_market_depth *)malloc(sizeof(t_market_depth));
    new_market->prev = NULL;
    new_market->next = NULL;
    new_market->row = NULL;
    return new_market;
}

char clear_market_depth(t_market_depth *market) {
    t_market_depth *tmp;
    while (market != NULL) {
        tmp = market;
        clear_market_depth_row(market->row);
        market = market->next;
        free(tmp);
    }
    return CE_OK;
}

void insert_to_market_depth(t_market_depth_row *row) {}
