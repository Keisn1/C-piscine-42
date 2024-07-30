#include "ft_btree.h"
#include <stddef.h>

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	if (!root)
		return (NULL);

	t_btree* res = btree_search_item(root->left, data_ref, cmpf);
	if (res)
		return res;

	int cmp_res = (*cmpf)(root->item, data_ref);
	if (cmp_res == 0)
		return root;

	return btree_search_item(root->left, data_ref, cmpf);
}
