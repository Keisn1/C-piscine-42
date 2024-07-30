#include "ft_btree.h"

int btree_level_count(t_btree *root) {
	if (!root)
		return 0;

	int left = btree_level_count(root->left);
	int right = btree_level_count(root->right);
	if (left > right) {
		return left + 1;
	}
	return right + 1;
}
