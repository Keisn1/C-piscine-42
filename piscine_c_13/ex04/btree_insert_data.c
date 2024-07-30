#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *,
			void *))
{
	if (!*root) {
		*root = btree_create_node(item);
		return;
	}

	int cmp_res = (*cmpf)((*root)->item, item);
	if (cmp_res > 0) {
		btree_insert_data(&(*root)->left, item, cmpf);
	} else {
		btree_insert_data(&(*root)->right, item, cmpf);
	}
}
