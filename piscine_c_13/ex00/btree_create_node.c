#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *item) {
	t_btree* new = (t_btree*)malloc(sizeof(t_btree));
	if (!new)
		return NULL;
	new->item = item;
	new->left = NULL;
	new->right = NULL;
	return new;
}
