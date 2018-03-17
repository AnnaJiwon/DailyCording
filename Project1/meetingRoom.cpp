#include<stdio.h>
#include<algorithm>
using namespace std;

struct node {
	int start, end;
};

bool cmp(struct node a, struct node b) {
	
	if (a.end < b.end)
		return 1;
	else if (a.end == b.end)
		return a.start < b.start;
	else
		return 0;
}


void main() {
	struct node Room[100000];
	int n, count = 0;

	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &Room[i].start, &Room[i].end);
	}

	sort(Room, Room + n, cmp);

	int curt = 0; //current end point

	for (int i = 0; i < n; i++) {
		if (curt <= Room[i].start) {
			curt = Room[i].end;
			count++;
		}
	}

	printf("\n%d\n", count);

}