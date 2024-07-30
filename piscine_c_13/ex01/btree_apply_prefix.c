#include "ft_btree.h"
#include <stddef.h>

void btree_apply_prefix(t_btree *root, void (*applyf)(void *)) {
	if (root == NULL)
		return;
	(*applyf)(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}