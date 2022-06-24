#pragma once

/*
 *      MARKET DEPTH ROW
 */
typedef struct s_market_depth_row {
    int user_id;
    int amount;
    int price;
} t_market_depth_row;

t_market_depth_row *
create_market_depth_row(int user_id, int amount, int price);

char clear_market_depth_row(t_market_depth_row *row);

char compare_market_depth_row(t_market_depth_row *l,
                              t_market_depth_row *r);

/*
 *      MARKET DEPTH
 */
typedef struct s_market_depth {
    struct s_market_depth *prev;
    struct s_market_depth *next;
    t_market_depth_row *row;
} t_market_depth;

t_market_depth *create_market_depth();
// should input head (prev) of list
char clear_market_depth(t_market_depth *market);

void insert_to_market_depth(t_market_depth_row *row);
