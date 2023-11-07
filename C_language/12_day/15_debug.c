#include <stdio.h>

#define NDEBUG
#include "debug.h"

int main(void)
{
	printf("hello world\n");
	pr_debug("这是一条调试信息1\n");
	pr_debug("这是一条调试信息2\n");
	pr_debug("这是一条调试信息3\n");
	pr_debug("这是一条调试信息4\n");
	pr_debug("这是一条调试信息5\n");
	pr_debug("这是一条调试信息6\n");
}

