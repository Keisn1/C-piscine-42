#include "ft_btree.h"
#include <stddef.h>
#include <stdlib.h>


int btree_count(t_btree *root) {
	if (root == NULL)
		return 0;

	int count = 0;
	count += btree_count(root->left);
	count += btree_count(root->right);
	count++;
	return count;
}

void btree_apply_by_level(t_btree *root,
						  void (*applyf)(void *item, int current_level,
										 int is_first_elem)) {
	if (!root)
		return;

	int size = btree_count(root);
	t_btree** arr_nodes = (t_btree**)malloc(sizeof(t_btree*) * size);
	int* arr_levels = (int*)malloc(sizeof(int) * size);
	int* arr_first_elements = (int*)malloc(sizeof(int) * size);

	int idx = 0;
	int offset = 0;
	int level = 0;
	int level_size = 1;
	int first_element = 1;
	arr_nodes[offset + idx] = root;
	arr_levels[offset + idx] = level;
	arr_first_elements[offset + idx] = first_element;
	idx++;
	while (idx < size) {
		int level_idx = 0;
		first_element = 1;
		while (level_idx < level_size) {
			t_btree* cur = arr_nodes[offset+level_idx];
			if (cur->left != NULL) {
				arr_nodes[idx] = cur->left;
				arr_levels[idx] = level;
				arr_first_elements[idx] = first_element;
				first_element = 0;
				idx++;
			}
			if (cur->right != NULL) {
				arr_nodes[idx++] = cur->right;
				arr_levels[idx] = level;
				arr_first_elements[idx] = first_element;
				first_element = 0;
				idx++;
			}
			level_idx++;
		}
		offset += level_size;
		level_size = idx - offset;
		level++;
	}

	idx = 0;
	while (idx < size) {
		(*applyf)(arr_nodes[idx]->item, arr_levels[idx], arr_first_elements[idx]);
		idx++;
	}
	free(arr_nodes);
	free(arr_levels);
	free(arr_first_elements);
}
