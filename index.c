#include <stdio.h>

int
main(void) {
	printf("Content-type: text/html\n\n");
	printf("<html><title>Hello</title><body>");
	printf("<style> h1 {text-align: center;}");
	printf("p {text-align: center;} </style>");
	printf("<h1>Test</h1>\n");
	printf("<div><input type=\"text\"/>");
	printf("<button>Press Me</button></div>");
	printf("</body></html>");
	return 0;
}
