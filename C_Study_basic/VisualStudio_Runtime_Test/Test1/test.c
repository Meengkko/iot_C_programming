#include <stdio.h>
#include <string.h>

void main(){

	char skill[4] = "CBD";
	char* skill_trees[4] = { "BACDE", "CBADF", "AECB", "BDA" };

	printf("%d", solution(skill, skill_trees, 4));
}

// skill_trees_len은 skill_trees의 길이입니다.
int solution(char* skill, char* skill_trees[], size_t skill_trees_len) {

	int skill_len = strlen(skill);
	int i, j = 0, k = 0;
	int matchCount = 0;

	for (i = 0; i < skill_trees_len; i++) {
		while (k < strlen(skill_trees[i])) {
			if (skill[j] == (skill_trees)[i][k]) {
				j++;
			}
			k++;
		}
		if (j == skill_len - 1) {
			matchCount++;
		}
		k = 0;
		j = 0;
	}
	return matchCount;
}